@interface HKMCLoggedDataAnalytics : NSObject

+ (BOOL)_isMetricEnabled;
+ (BOOL)_isAllowed;
+ (BOOL)shouldSubmit;
+ (void)submitMetricForMethod:(id)a0 loggedDayIndex:(long long)a1 currentDayIndex:(long long)a2;

@end
