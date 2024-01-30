@interface SBHHomePullToSearchSettings : PTSettings

@property (nonatomic) double pullTransitionDistance;
@property (nonatomic) double pullTransitionActivationThreshold;
@property (nonatomic) double pullGestureBeganFromTopLeeway;
@property (nonatomic) double fluidBehaviorDampingRatio;
@property (nonatomic) double fluidBehaviorResponse;
@property (nonatomic) double libraryFluidBehaviorDampingRatio;
@property (nonatomic) double libraryFluidBehaviorResponse;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
