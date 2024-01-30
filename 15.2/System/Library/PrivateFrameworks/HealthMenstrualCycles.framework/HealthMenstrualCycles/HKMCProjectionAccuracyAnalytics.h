@interface HKMCProjectionAccuracyAnalytics : NSObject

+ (BOOL)_isAllowed;
+ (BOOL)_isMetricEnabled;
+ (BOOL)shouldSubmit;
+ (id)_closestProjectionToLoggedDayIndex:(long long)a0 analysis:(id)a1;
+ (void)submitMetricWithDayIndex:(long long)a0 oldMenstrualFlow:(long long)a1 newMenstrualFlow:(long long)a2 analysis:(id)a3 isLoggingMultipleDays:(BOOL)a4 periodPredictionEnabled:(BOOL)a5 sensorBasedPredictionEnabled:(BOOL)a6 cycles:(id)a7;

@end
