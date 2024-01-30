@interface SBProximitySettings : SBUISettings

@property (nonatomic) double initialBacklightDebounceDuration;
@property (nonatomic) double subsequentBacklightDebounceDuration;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
