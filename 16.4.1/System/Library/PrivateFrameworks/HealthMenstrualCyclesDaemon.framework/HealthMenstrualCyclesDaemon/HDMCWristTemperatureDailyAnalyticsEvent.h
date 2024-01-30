@class HKMCSettingsManager, NSString, HDProfile, HKSPSleepStore, HKWristDetectionSettingManager, NSUserDefaults, HDMCAnalysisManager;

@interface HDMCWristTemperatureDailyAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    HDProfile *_profile;
    HDMCAnalysisManager *_analysisManager;
    HKMCSettingsManager *_settingsManager;
    HKSPSleepStore *_sleepStore;
    HKWristDetectionSettingManager *_wristDetectionSettingManager;
    NSUserDefaults *_privacyDefaults;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)_isWristDetectionEnabled;
- (long long)_bucketedWeeksSinceDate:(id)a0 dataSource:(id)a1;
- (id)_IHAGatedDemographicsFieldsWithDataSource:(id)a0;
- (id)_IHAGatedLastSleepDayWristTemperatureFieldsWithCurrentDate:(id)a0 gregorianCalendar:(id)a1;
- (id)_IHAGatedSleepingWristTemperatureStatisticsFieldsWithCurrentDate:(id)a0 gregorianCalendar:(id)a1;
- (id)_allNoiseFieldsWithCurrentDate:(id)a0 gregorianCalendar:(id)a1;
- (id)_areBloodOxygenMeasurementsEnabledWithDataSource:(id)a0;
- (id)_areRespiratoryRateMeasurementsEnabledWithDataSource:(id)a0;
- (id)_celsiusValueFromQuantity:(id)a0 scale:(short)a1;
- (id)_changeInCelsiusStringFromQuantity:(id)a0 scale:(short)a1;
- (id)_countOfLast30DaysWithSleepSamplesWithCurrentDate:(id)a0 calendarCache:(id)a1;
- (id)_countOfLast30DaysWithSleepingWristTemperatureSamplesWithCurrentDate:(id)a0 gregorianCalendar:(id)a1;
- (long long)_countOfUniqueSerialNumbersFromSamples:(id)a0;
- (long long)_countOfUniqueSourcesFromSamples:(id)a0;
- (id)_countOfUniqueSourcesOfWristTemperatureSamplesFieldsWithCurrentDate:(id)a0 gregorianCalendar:(id)a1;
- (id)_daysWithStandHoursInLast30DaysWithCurrentDate:(id)a0 gregorianCalendar:(id)a1;
- (id)_discreteRelativeSleepingWristTemperatureStatisticsLast30DaysWithCurrentDate:(id)a0 gregorianCalendar:(id)a1 dominantWatchSourceEntityPredicate:(id)a2;
- (id)_discreteSleepingWristTemperatureStatisticsLast30DaysWithCurrentDate:(id)a0 gregorianCalendar:(id)a1 dominantWatchSourceEntityPredicate:(id)a2;
- (id)_dominantSleepingWristTemperatureSourceEntityPredicateOverLastNDays:(long long)a0 currentDate:(id)a1 gregorianCalendar:(id)a2;
- (id)_dominantSleepingWristTemperatureSourceOverLastNDays:(long long)a0 currentDate:(id)a1 gregorianCalendar:(id)a2;
- (id)_dominantWatchLast30DaysFieldsWithCurrentDate:(id)a0 gregorianCalendar:(id)a1;
- (id)_featureStatusForFeatureIdentifier:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (id)_firstPartySleepSamplesFromLastNSleepDays:(long long)a0 currentDate:(id)a1 gregorianCalendar:(id)a2;
- (id)_hasCycleFactorsActive;
- (id)_hoursAsleepDuringLastSleepDayWithCurrentDate:(id)a0 gregorianCalendar:(id)a1;
- (id)_isAFibHistoryEnabledWithDataSource:(id)a0;
- (id)_isCycleTrackingWristTemperatureInputEnabledWithDataSource:(id)a0;
- (BOOL)_isDeviceWristTemperatureCompatible:(id)a0;
- (id)_isHeartRateEnabledInPrivacy;
- (id)_isIRNEnabledWithDataSource:(id)a0;
- (id)_isWristTemperatureEnabledWithDataSource:(id)a0;
- (id)_lastSleepDayHasSleepDataFromCompatibleProductTypeWithCurrentDate:(id)a0 gregorianCalendar:(id)a1;
- (id)_lastSleepDayHasSleepDataWithCurrentDate:(id)a0 calendarCache:(id)a1;
- (id)_lastSleepDayHasWristTemperatureDataWithCurrentDate:(id)a0 gregorianCalendar:(id)a1;
- (id)_lastSleepDayRelativeSleepingWristTemperatureWithCurrentDate:(id)a0 gregorianCalendar:(id)a1;
- (id)_medianSleepingWristTemperatureLast30DaysWithCurrentDate:(id)a0 gregorianCalendar:(id)a1 dominantWatchSourceEntityPredicate:(id)a2;
- (id)_noiseMetricsFromSleepingWristTemperatureSamples:(id)a0 gregorianCalendar:(id)a1;
- (id)_pairedWristTemperatureCompatibleDevice;
- (id)_predicateForAppleWatchSamplesInLast30SleepDaysRelativeToCurrentDate:(id)a0 gregorianCalendar:(id)a1 sampleType:(id)a2;
- (id)_predicateForAppleWatchSamplesInLastNSleepDays:(long long)a0 currentDate:(id)a1 gregorianCalendar:(id)a2 sampleType:(id)a3;
- (id)_predicateForAppleWatchSamplesInLastNSleepDays:(long long)a0 currentDate:(id)a1 gregorianCalendar:(id)a2 sampleType:(id)a3 sourceEntityPredicate:(id)a4;
- (id)_preferredSleepingWristTemperatureUnit;
- (id)_roundDouble:(double)a0 scale:(short)a1;
- (id)_sampleStandardDeviationOfValues:(id)a0;
- (id)_samplesByMorningIndex:(id)a0 gregorianCalendar:(id)a1;
- (id)_sleepFields;
- (id)_sleepingWristTemperatureDominantWatchSampleCountOverLast30DaysWithCurrentDate:(id)a0 gregorianCalendar:(id)a1;
- (id)_sleepingWristTemperatureSampleCountBySourceOverLastNDays:(long long)a0 currentDate:(id)a1 gregorianCalendar:(id)a2;
- (id)_sleepingWristTemperatureSamplesFromLastNSleepDays:(long long)a0 currentDate:(id)a1 gregorianCalendar:(id)a2 sourceEntityPredicate:(id)a3;
- (id)_weeksSinceDeliveryWithDataSource:(id)a0;
- (id)_wristTemperatureCompatibleDeviceFields;
- (id)initWithProfile:(id)a0 analysisManager:(id)a1 settingsManager:(id)a2 sleepStore:(id)a3 wristDetectionSettingManager:(id)a4 privacyDefaults:(id)a5;
- (id)initWithProfile:(id)a0 analysisManager:(id)a1 sleepStore:(id)a2;

@end
