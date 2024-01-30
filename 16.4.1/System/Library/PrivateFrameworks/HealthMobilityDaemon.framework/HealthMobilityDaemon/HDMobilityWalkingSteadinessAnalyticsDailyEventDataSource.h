@class NSString, HDProfile, NSUserDefaults;

@interface HDMobilityWalkingSteadinessAnalyticsDailyEventDataSource : NSObject <HKMobilityWalkingSteadinessAnalyticsDailyEventDataSourceProvider> {
    HDProfile *_profile;
    NSUserDefaults *_mobilitySettingsDefaults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (id)biologicalSexWithError:(id *)a0;
- (void).cxx_destruct;
- (id)ageWithError:(id *)a0;
- (id)activePairedWatchTypeWithError:(id *)a0;
- (id)hasLaunchedHealthAppInLastWeek:(id *)a0;
- (id)areHealthNotificationsAuthorizedWithError:(id *)a0;
- (id)currentWalkingSteadinessClassificationWithError:(id *)a0;
- (id)daysSinceLastInitialNotificationWithError:(id *)a0;
- (id)daysSinceLastRepeatNotificationWithError:(id *)a0;
- (id)hasHeightWithError:(id *)a0;
- (id)hasLaunchedHealthAppInLastMonth:(id *)a0;
- (id)hasWalkingSteadinessMeasurementsWithError:(id *)a0;
- (id)numberOfDaysSinceLastWalkingSteadinessMeasurementWithError:(id *)a0;
- (id)numberOfInitialNotificationsInPastYearWithError:(id *)a0;
- (id)numberOfLowNotificationsInPastYearWithError:(id *)a0;
- (id)numberOfRepeatLowNotificationsInPastYearWithError:(id *)a0;
- (id)numberOfRepeatVeryLowNotificationsInPastYearWithError:(id *)a0;
- (id)numberOfVeryLowNotificationsInPastYearWithError:(id *)a0;
- (id)previousWalkingSteadinessClassificationWithError:(id *)a0;
- (id)walkingSteadinessNotificationsEnabledWithError:(id *)a0;
- (id)_countOfCategorySamplesInPastYearWithType:(id)a0 values:(id)a1 error:(id *)a2;
- (id)_countOfSamplesWithType:(id)a0 predicate:(id)a1 error:(id *)a2;
- (id)_categoryValuePredicateWithValues:(id)a0;
- (id)_countOfSamplesInPastYearWithType:(id)a0 valuePredicate:(id)a1 error:(id *)a2;
- (id)_hasLaunchedHealthAppInLastMonthWithError:(id *)a0;
- (id)_hasLaunchedHealthAppInLastTimeInterval:(double)a0 error:(id *)a1;
- (id)_hasLaunchedHealthAppInLastWeekWithError:(id *)a0;
- (id)_hasSampleWithType:(id)a0 error:(id *)a1;
- (id)_healthAppLastOpenedDateWithError:(id *)a0;
- (id)_numberOfDaysSinceLastCategorySampleWithSampleType:(id)a0 values:(id)a1 error:(id *)a2;
- (id)_numberOfDaysSinceLastSampleWithSampleType:(id)a0 predicate:(id)a1 error:(id *)a2;
- (id)_samplePredicateForPastYearFromDate:(id)a0;

@end
