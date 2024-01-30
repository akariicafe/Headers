@interface HKMCNotificationSentAnalytics : NSObject

+ (BOOL)_isMetricEnabled;
+ (BOOL)_isAllowed;
+ (BOOL)shouldSubmit;
+ (void)submitMetricForCategory:(id)a0;

@end
