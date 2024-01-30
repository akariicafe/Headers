@interface SBHInterpolationSettings : PTSettings

@property (nonatomic) double lowerBoundFactor;
@property (nonatomic) double upperBoundFactor;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
