@interface ISPerformanceDiagnosticsSettings : ISSettings

@property (nonatomic) BOOL shouldTracePerformance;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
