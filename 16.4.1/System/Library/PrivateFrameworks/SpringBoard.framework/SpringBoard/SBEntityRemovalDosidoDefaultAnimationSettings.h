@class SBFFluidBehaviorSettings;

@interface SBEntityRemovalDosidoDefaultAnimationSettings : PTSettings

@property (nonatomic) double fromViewFinalScale;
@property (nonatomic) double fromViewFinalAlpha;
@property (nonatomic) double fromViewFinalBlurRadius;
@property (nonatomic) double fromViewAlphaAnimationDelay;
@property (retain, nonatomic) SBFFluidBehaviorSettings *fromViewScaleAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *fromViewAlphaAnimationSettings;
@property (nonatomic) double toViewInitialPushInScale;
@property (nonatomic) double toViewScreenInitialAlpha;
@property (nonatomic) double toViewInitialDimmingAlpha;
@property (nonatomic) double toViewInitialBlurProgress;
@property (nonatomic) double toViewScaleAndAlphaResetAnimationDelay;
@property (nonatomic) double toViewDimmingViewFadeOutDelay;
@property (retain, nonatomic) SBFFluidBehaviorSettings *toViewScaleAndAlphaResetAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *toViewWallpaperScaleAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *toViewDimmingViewAlphaAnimationSettings;

+ (id)settingsControllerModule;
+ (id)_settingsModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
