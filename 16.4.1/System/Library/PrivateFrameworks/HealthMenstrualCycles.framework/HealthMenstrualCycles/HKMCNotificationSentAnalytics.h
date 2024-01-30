@interface HKMCNotificationSentAnalytics : NSObject

+ (BOOL)shouldSubmit;
+ (BOOL)_isAllowed;
+ (BOOL)_isMetricEnabled;
+ (void)submitMetricForCategory:(id)a0 areHealthNotificationsAuthorized:(BOOL)a1 internalLiveOnCycleFactorOverrideEnabled:(BOOL)a2;
+ (void)submitMetricForCategory:(id)a0 areHealthNotificationsAuthorized:(BOOL)a1 numberOfDaysShiftedForFertileWindow:(id)a2 numberOfDaysOffsetFromFertileWindowEnd:(id)a3 numberOfDaysWithWristTemp45DaysBeforeOvulationConfirmedNotification:(id)a4 internalLiveOnCycleFactorOverrideEnabled:(BOOL)a5;

@end
