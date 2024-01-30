@interface SBHHomePullToSearchSettings : PTSettings

@property (nonatomic) double pullTransitionDistance;
@property (nonatomic) double pullTransitionActivationThreshold;
@property (nonatomic) double pullGestureBeganFromTopLeeway;
@property (nonatomic) double fluidBehaviorDampingRatio;
@property (nonatomic) double fluidBehaviorResponse;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
