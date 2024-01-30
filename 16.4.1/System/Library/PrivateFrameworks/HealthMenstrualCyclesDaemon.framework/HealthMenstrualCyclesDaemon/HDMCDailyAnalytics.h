@class HDProfile, HKMCAnalysis, HDKeyValueDomain, HKFeatureStatusManager, HKSPSleepStore;

@interface HDMCDailyAnalytics : NSObject {
    HDProfile *_profile;
    HKMCAnalysis *_analysis;
    HDKeyValueDomain *_keyValueDomain;
    HDKeyValueDomain *_fertileWindowNotificationKeyValueDomain;
    HKFeatureStatusManager *_heartRateFeatureStatusManager;
    HKFeatureStatusManager *_deviationDetectionFeatureStatusManager;
    HDKeyValueDomain *_deviationDetectionAnalyticsKeyValueDomain;
    HDKeyValueDomain *_appProtectedKeyValueDomain;
    HKFeatureStatusManager *_wristTemperatureInputFeatureStatusManager;
    HKSPSleepStore *_sleepStore;
}

+ (BOOL)shouldSubmit;
+ (id)_hasConfirmedDeviationInPastMonthOfType:(long long)a0 profile:(id)a1 calendar:(id)a2 error:(id *)a3;
+ (id)_countDeviationSamplesInPastYearOfType:(long long)a0 profile:(id)a1 calendar:(id)a2 error:(id *)a3;
+ (id)_getDeviationDetectedCountForDeviationType:(long long)a0 gregorianCalendar:(id)a1 domain:(id)a2 error:(id *)a3;
+ (id)_setCycleFactorReminderFieldsInMetric:(id)a0 appProtectedKeyValueDomain:(id)a1 error:(id *)a2;
+ (id)_setDetectedDeviationFieldsInMetric:(id)a0 gregorianCalendar:(id)a1 deviationDetectionAnalyticsKeyValueDomain:(id)a2 todayDayIndex:(long long)a3 error:(id *)a4;
+ (id)_setDeviationSampleFieldsInMetric:(id)a0 profile:(id)a1 userCalendar:(id)a2 error:(id *)a3;

- (id)_daysWithWristTemperatureSamplesInDayIndexRange:(struct { long long x0; long long x1; })a0 calendarCache:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (long long)_daysWithSleepSamples:(id)a0 calendar:(id)a1;
- (BOOL)_collectDiagnosticFieldsForMetric:(id)a0 settingsManager:(id)a1 heartRateInputFeatureStatus:(id)a2 deviationDetectionFeatureStatus:(id)a3 wristTemperatureInputFeatureStatus:(id)a4 gregorianCalendar:(id)a5 error:(id *)a6;
- (BOOL)_collectSensitiveFieldsForMetric:(id)a0 settingsManager:(id)a1 heartRateInputFeatureStatus:(id)a2 wristTemperatureInputFeatureStatus:(id)a3 gregorianCalendar:(id)a4 error:(id *)a5;
- (id)_eligibleCyclesStartPastDayIndex:(long long)a0;
- (id)_predicateForFirstPartySleepDataFromPast48HoursWithCalendar:(id)a0;
- (id)_predicateForSleepDataFromPast45DaysWithCalendar:(id)a0;
- (id)_predicateForSleepDataFromPast48HoursWithCalendar:(id)a0;
- (id)_weeksBetweenStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2;
- (id)_yearsBetweenStartDateComponents:(id)a0 endDate:(id)a1 calendar:(id)a2;
- (id)initWithProfile:(id)a0 analysis:(id)a1 heartRateFeatureAvailabilityManager:(id)a2 deviationDetectionFeatureAvailabilityManager:(id)a3 wristTemperatureInputFeatureAvailabilityManager:(id)a4;
- (BOOL)submitMetricWithError:(id *)a0;

@end
