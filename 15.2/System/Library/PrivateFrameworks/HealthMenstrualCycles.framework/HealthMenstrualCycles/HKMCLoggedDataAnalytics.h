@interface HKMCLoggedDataAnalytics : NSObject

+ (BOOL)_isAllowed;
+ (BOOL)_isMetricEnabled;
+ (BOOL)shouldSubmit;
+ (void)submitMetricForMethod:(id)a0 loggedDayIndex:(long long)a1 currentDayIndex:(long long)a2;

@end
