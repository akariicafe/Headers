@interface HKMCLoggedDataAnalytics : NSObject

+ (BOOL)shouldSubmit;
+ (BOOL)_isAllowed;
+ (BOOL)_isMetricEnabled;
+ (void)submitMetricForMethod:(id)a0 loggedDayIndex:(long long)a1 currentDayIndex:(long long)a2;

@end
