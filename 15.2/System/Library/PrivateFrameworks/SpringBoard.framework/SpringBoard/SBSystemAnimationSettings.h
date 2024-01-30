@class SBFWakeAnimationSettings, SBFAnimationSettings, SBEntityRemovalAnimationSettings;

@interface SBSystemAnimationSettings : PTSettings

@property (nonatomic) float assistantAnimationDuration;
@property (nonatomic) float assistantDismissAnimationDurationOverApp;
@property (nonatomic) float assistantBottomEdgeDismissThreshold;
@property (nonatomic) float assistantBottomEdgeDismissVelocity;
@property (nonatomic) float spotlightNoninteractiveAnimationDuration;
@property (retain, nonatomic) SBFAnimationSettings *slideoverDosidoAnimationSettings;
@property (retain, nonatomic) SBEntityRemovalAnimationSettings *entityRemovalAnimationSettings;
@property (retain, nonatomic) SBFWakeAnimationSettings *wakeAnimationSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
