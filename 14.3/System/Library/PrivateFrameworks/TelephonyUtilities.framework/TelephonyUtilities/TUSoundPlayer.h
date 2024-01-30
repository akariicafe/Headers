@class TURepeatingActor, NSObject;
@protocol OS_dispatch_queue;

@interface TUSoundPlayer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) TURepeatingActor *repeatingActor;
@property (nonatomic) unsigned int soundID;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;

- (id)init;
- (void).cxx_destruct;
- (void)stopPlaying;
- (void)playSound:(unsigned int)a0;
- (void)playSound:(unsigned int)a0 iterations:(unsigned long long)a1 pauseDurationBetweenIterations:(double)a2;
- (void)playSound:(unsigned int)a0 iterations:(unsigned long long)a1 pauseDurationBetweenIterations:(double)a2 completion:(id /* block */)a3;
- (void)playSoundIndefinitely:(unsigned int)a0 pauseDurationBetweenIterations:(double)a1;

@end
