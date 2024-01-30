@class SBFFluidBehaviorSettings, SBEntityRemovalDosidoDefaultAnimationSettings;

@interface SBEntityRemovalDosidoSlideOutAnimationSettings : PTSettings

@property (nonatomic) double fromViewSlideOutAnimationDelay;
@property (nonatomic) double fromViewSlideOutHeightOffsetMultiplier;
@property (retain, nonatomic) SBFFluidBehaviorSettings *fromViewSlideOutAnimationSettings;
@property (retain, nonatomic) SBEntityRemovalDosidoDefaultAnimationSettings *defaultAnimationSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
