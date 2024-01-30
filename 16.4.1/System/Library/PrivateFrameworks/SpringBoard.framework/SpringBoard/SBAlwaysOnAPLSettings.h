@interface SBAlwaysOnAPLSettings : PTSettings

@property (nonatomic) double overallAPLLimit;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
