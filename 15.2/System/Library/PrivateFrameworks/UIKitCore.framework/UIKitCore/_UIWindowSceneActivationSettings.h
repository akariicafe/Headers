@class _UISpringAnimationPrototypeSettings;

@interface _UIWindowSceneActivationSettings : PTSettings

@property (nonatomic) double pinchActivationScaleThreshold;
@property (nonatomic) double pinchEndingProjectionDuration;
@property (nonatomic) double pinchPlatterMaxShadowIntensity;
@property (nonatomic) double pinchEndPlatterVelocityMultiplier;
@property (retain, nonatomic) _UISpringAnimationPrototypeSettings *pinchInteractiveScale;
@property (retain, nonatomic) _UISpringAnimationPrototypeSettings *pinchSettle;
@property (retain, nonatomic) _UISpringAnimationPrototypeSettings *pinchShadow;
@property (retain, nonatomic) _UISpringAnimationPrototypeSettings *morph;
@property (retain, nonatomic) _UISpringAnimationPrototypeSettings *morphMenuDismissal;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
