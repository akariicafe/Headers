@class SBFFluidBehaviorSettings, SBEntityRemovalMedusaDefaultAnimationSettings;

@interface SBEntityRemovalMedusaSlideOutAnimationSettings : PTSettings

@property (nonatomic) double toBeMadeFullScreenPushInScale;
@property (nonatomic) double toBeMadeFullScreenScaleResetAnimationDelay;
@property (nonatomic) double toBeRemovedSlideOutAnimationDelay;
@property (nonatomic) double toBeRemovedSlideOutHeightOffsetMultiplier;
@property (retain, nonatomic) SBFFluidBehaviorSettings *toBeMadeFullscreenPushInScaleAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *toBeMadeFullscreenScaleResetAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *toBeRemovedSlideOutAnimationSettings;
@property (retain, nonatomic) SBEntityRemovalMedusaDefaultAnimationSettings *defaultAnimationSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
