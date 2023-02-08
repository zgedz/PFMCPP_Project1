#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1) 
//  Noun: cell phone
//  action 1: receives call
cellPhone.receivesCall();
//  action 2: receives text
cellPhone.receivesText();
//  action 3: takes photos
cellPhone.takesPhotos();

//  2) 
//  Noun: microphone
//  action 1: receives audio
microphone.receivesAudio();
//  action 2: sends audio
microphone.sendsAudio();
//  action 3: filters audio
microphone.filtersAudio();

//  3)
//  Noun: curtain
//  action 1: blocks sunlight
curtain.blocksSunlight();
//  action 2: provides privacy
curtain.providesPrivacy();
//  action 3: supresses sound
curtain.supressesSound();

//  4)
//  Noun: audio interface
//  action 1:receives audio
audioInterface.receivesAudio();
//  action 2:sends audio
audioInterface.sendsAudio();
//  action 3:converts audio
audioInterface.convertsAudio();

//  5)
//  Noun:pre amp
//  action 1: receives audio
preAmp.receivesAudio();
//  action 2: sends audio
preAmp.sendsAudio();
//  action 3: converts audio
preAmp.convertsAudio();

//  6)
//  Noun: rug
//  action 1: protects floor
rug.protectsFloor();
//  action 2: covers floor
rug.coversFloor();
//  action 3: supresses sound
rug.supressesSound();

//  7) 
//  Noun: coat
//  action 1: provides warmth
coat.providesWarmth();
//  action 2: provides fashion
coat.providesFashion();
//  action 3: protects from weather
coat.protectsFromWeather();

//  8)
//  Noun: drill
//  action 1: inserts screws
drill.insertsScrews();
//  action 2: removes screws
drill.removesScrews();
//  action 3: makes holes
drill.makesHoles();

//  9)
//  Noun: candle
//  action 1: emits scent
candle.emitsScent();
//  action 2: illuminates
candle.illuminates();
//  action 3: melts
candle.melts();

//  10)
//  Noun: fire
//  action 1: emits smoke
fire.emitsSmoke();
//  action 2: provides heat
fire.providesHeat();
//  action 3: burns other objects
fire.burnsOtherObjects();



#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
