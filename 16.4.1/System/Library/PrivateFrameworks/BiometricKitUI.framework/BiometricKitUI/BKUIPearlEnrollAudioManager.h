@class BKUIPearlAudioSession, BKUIPearlEnrollControllerPreloadedState, CHHapticEngine;
@protocol BKUIPearlAudioStateDelegate;

@interface BKUIPearlEnrollAudioManager : NSObject {
    BKUIPearlAudioSession *_audioSession;
}

@property (retain, nonatomic) CHHapticEngine *hapticsEngine;
@property (retain, nonatomic) BKUIPearlEnrollControllerPreloadedState *preloadedState;
@property (weak, nonatomic) id<BKUIPearlAudioStateDelegate> stateDelegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cleanupHaptics;
- (void)cleanupHapticsAndSound;
- (void)cleanupSound;
- (id)createEngine;
- (void)fadeCurrentSound:(double)a0 completion:(id /* block */)a1;
- (id)hapticEventWithEventType:(unsigned long long)a0 withDelay:(double)a1;
- (void)playHaptic:(unsigned long long)a0 withDelay:(double)a1;
- (void)playHapticWithEvents:(id)a0;
- (void)setUpHaptics;
- (void)setupSound;
- (void)triggerSoundHapticForTransitionToState:(int)a0 fromState:(int)a1;
- (void)triggerSoundHapticForTransitionToSubstate:(int)a0 fromSubstate:(int)a1;

@end
