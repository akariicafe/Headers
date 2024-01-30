@class NSString, HDProfile;
@protocol HDHRAFibBurdenAnalyticsEventHealthAppNotificationsAuthorizedProvider;

@interface HDHRAFibBurdenDailyAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    HDProfile *_profile;
    id<HDHRAFibBurdenAnalyticsEventHealthAppNotificationsAuthorizedProvider> _notificationsAuthorizedProvider;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (long long)_bucketedBurdenValueForSample:(id)a0;
- (long long)_bucketedWeeksSinceDate:(id)a0 dataSource:(id)a1;
- (long long)_daysSinceDate:(id)a0 dataSource:(id)a1;
- (long long)_daysSinceDate:(id)a0 maximum:(id)a1 dataSource:(id)a2;
- (id)_determineIfSamplesOverlappingSample:(id)a0 dataSource:(id)a1;
- (void)_extractAFibBurdenFeatureStatusPropertiesFromDataSource:(id)a0 payload:(id)a1;
- (void)_extractBucketedDaysSinceLastSampleOfType:(id)a0 intoProperty:(id)a1 inPayload:(id)a2 dataSource:(id)a3;
- (void)_extractBurdenSamplePropertiesIntoPayload:(id)a0 dataSource:(id)a1;
- (void)_extractDaysSinceDateInKeyValueDomain:(id)a0 withKey:(id)a1 intoProperty:(id)a2 inPayload:(id)a3 dataSource:(id)a4;
- (void)_extractFeatureStatusPropertiesForFeatureIdentifier:(id)a0 payload:(id)a1 dataSource:(id)a2 ifOnboardedBlock:(id /* block */)a3 ifUsageRequirementsEvaluationPresentBlock:(id /* block */)a4 ifErrorRetrievingFeatureStatusBlock:(id /* block */)a5;
- (void)_extractIRNFeatureStatusPropertiesFromDataSource:(id)a0 payload:(id)a1;
- (void)_extractWatchWearPropertiesIntoPayload:(id)a0 dataSource:(id)a1;
- (id)_numberOfSamplesOfType:(id)a0 dateInterval:(id)a1 additionalPredicate:(id)a2 bucketer:(id /* block */)a3;
- (id)_sedentaryAndBackgroundHeartRateContextPredicate;
- (id)initWithProfile:(id)a0 notificationsAuthorizedProvider:(id)a1;

@end
