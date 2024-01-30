@interface AXHapticFeedbackManager : NSObject

+ (id)sharedManager;

- (void)_playFeedback:(id)a0;
- (void)_playCancelPatternFeedback;
- (void)_playDiscreteFeedbackForType:(long long)a0;
- (void)_playFeedbackImpactBehaviorWithIntensity:(double)a0;
- (void)_playPatternFeedback:(long long)a0 numberOfRepetitions:(long long)a1 atInterval:(double)a2;
- (void)playHapticFeedbackForType:(long long)a0;

@end
