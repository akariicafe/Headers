@interface _UIPointerEffectSettings : PTSettings

@property (class, readonly, nonatomic) BOOL pointerSlipMatchesContentSlip;

@property (nonatomic) double defaultPointerCornerRadius;
@property (nonatomic) double overrideSlipPoints;
@property (nonatomic) double slipFactorX;
@property (nonatomic) double slipFactorY;
@property (nonatomic) double parallaxAmount;
@property (nonatomic) double maxSlipPoints;
@property (nonatomic) double scaleUpPoints;
@property (nonatomic) double scaleUpAnimationResponse;
@property (nonatomic) double scaleUpAnimationDampingRatio;
@property (nonatomic) double progressiveScaleUpAnimationResponse;
@property (nonatomic) double dampedAnimationResponse;
@property (nonatomic) double dampedAnimationDampingRatio;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
