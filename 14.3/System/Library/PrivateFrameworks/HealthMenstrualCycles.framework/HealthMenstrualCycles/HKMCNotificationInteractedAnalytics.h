@interface HKMCNotificationInteractedAnalytics : NSObject

+ (BOOL)_isMetricEnabled;
+ (BOOL)_isAllowed;
+ (BOOL)shouldSubmit;
+ (void)submitMetricForCategory:(id)a0 action:(id)a1;

@end
