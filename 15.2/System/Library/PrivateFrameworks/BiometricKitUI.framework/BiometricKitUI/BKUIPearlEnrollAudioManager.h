@class BKUIPearlAudioSession, BKUIPearlEnrollControllerPreloadedState, CHHapticEngine;
@protocol BKUIPearlAudioStateDelegate;

@interface BKUIPearlEnrollAudioManager : NSObject {
    BKUIPearlAudioSession *_audioSession;
}

@property (retain, nonatomic) CHHapticEngine *hapticsEngine;
@property (retain, nonatomic) BKUIPearlEnrollControllerPreloadedState *preloadedState;
@property (weak, nonatomic) id<BKUIPearlAudioStateDelegate> stateDelegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)cleanupSound;
- (void)cleanUpHaptics;
- (void)setupSound;
- (void)setUpHaptics;
- (void)triggerSoundHapticForTransitionToState:(int)a0 fromState:(int)a1;
- (void)triggerSoundHapticForTransitionToSubstate:(int)a0 fromSubstate:(int)a1;
- (void)playHaptic:(unsigned long long)a0 withDelay:(double)a1;
- (void)fadeCurrentSound:(double)a0 completion:(id /* block */)a1;
- (id)createEngine;
- (id)hapticEventWithEventType:(unsigned long long)a0 withDelay:(double)a1;
- (void)playHapticWithEvents:(id)a0;

@end
