@interface PUPerformanceDiagnosticsSettings : PXSettings

@property (nonatomic) BOOL shouldTracePerformance;
@property (nonatomic) double scrollTestRampUpDuration;
@property (nonatomic) double scrollTestCPUWarmupDuration;
@property (nonatomic) double scrollTestCPUSustainDuration;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
