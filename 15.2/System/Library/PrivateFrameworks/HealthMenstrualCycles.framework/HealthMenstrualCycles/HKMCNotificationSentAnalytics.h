@interface HKMCNotificationSentAnalytics : NSObject

+ (BOOL)_isAllowed;
+ (BOOL)_isMetricEnabled;
+ (BOOL)shouldSubmit;
+ (void)submitMetricForCategory:(id)a0 numberOfDaysShiftedForFertileWindow:(long long)a1 numberOfDaysBeforePredictionEnd:(long long)a2;
+ (void)submitMetricForCategory:(id)a0;

@end
