@class SBFFluidBehaviorSettings;

@interface SBSwitcherSystemApertureSettings : PTSettings

@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomToJindoLayoutSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomToJindoLayoutAlternateSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomToJindoPositionSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomToJindoPositionAlternateSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomToJindoCornerRadiusSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomToJindoScaleAndRotateSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomToJindoScaleAndRotateAlternateSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomToJindoBlurAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomToJindoTopClippingSettings;
@property (nonatomic) double zoomToJindoTargetYDisplacement;
@property (nonatomic) double zoomToJindoTargetXDisplacement;
@property (nonatomic) double zoomToJindoStraightSwipeScale;
@property (nonatomic) double zoomToJindoStraightSwipeAlternateScale;
@property (nonatomic) double zoomToJindoArcSwipeScale;
@property (nonatomic) double zoomToJindoTuckInThreshold;
@property (nonatomic) double zoomToJindoBounceThreshold;
@property (nonatomic) double xDeltaToRotationMappingFactor;
@property (nonatomic) double zoomToJindoYFromScreenTopToUseAlternateSettings;
@property (nonatomic) BOOL zoomToJindoCollapseToInert;
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomToAndFromJindoMeshSettings;
@property (nonatomic) double zoomToJindoBeginShowingShadowThreshold;
@property (nonatomic) double zoomToJindoEndShowingShadowThreshold;
@property (nonatomic) double zoomToFromJindoMaxBlurRadius;
@property (nonatomic) double zoomToFromJindoMaxCornerRadius;
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomFromJindoLayoutSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomFromJindoPositionSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomFromJindoCornerRadiusSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomFromJindoScaleAndRotateSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomFromJindoBlurAnimationSettings;
@property (nonatomic) double zoomFromJindoBeginUnblurringProgressThreshold;
@property (nonatomic) double zoomFromJindoUnmaskThreshold;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
