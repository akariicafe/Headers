@interface HKMCNotificationInteractedAnalytics : NSObject

+ (BOOL)_isAllowed;
+ (BOOL)_isMetricEnabled;
+ (BOOL)shouldSubmit;
+ (void)submitMetricForCategory:(id)a0 action:(id)a1;

@end
