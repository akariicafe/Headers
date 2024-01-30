@interface LPKPerfResultAnalyzer : NSObject

+ (void)_populateMigratorsData:(id)a0;
+ (id)_abstractUserSwitchsFromTheEnd:(long long)a0 userSwitches:(id)a1;
+ (id)_perfResultsFromUserSwitches:(id)a0;
+ (double)_durationFromString:(id)a0;
+ (id)analyzePerformanceTestResult:(id)a0 type:(unsigned long long)a1 count:(long long)a2;

@end
