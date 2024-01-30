@interface HealthMobilityUI.WalkingSteadinessAnalyticsOnboardingEventDataSource : NSObject <HKMobilityWalkingSteadinessAnalyticsOnboardingEventDataSourceProvider> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ presentation;
    void /* unknown type, empty encoding */ onboardingStep;
    void /* unknown type, empty encoding */ changedDetailItems;
    void /* unknown type, empty encoding */ defaultDetailItems;
    void /* unknown type, empty encoding */ acceptDefaults;
}

- (id)init;
- (id)biologicalSexWithError:(id *)a0;
- (void).cxx_destruct;
- (id)stepWithError:(id *)a0;
- (id)acceptDefaultHeightWithError:(id *)a0;
- (id)acceptDefaultWeightWithError:(id *)a0;
- (id)acceptDefaultNotificationsWithError:(id *)a0;
- (id)activeWatchProductTypeWithError:(id *)a0;
- (id)ageWithError:(id *)a0;
- (id)featureVersionWithError:(id *)a0;
- (id)hasDefaultHeightWithError:(id *)a0;
- (id)hasDefaultWeightWithError:(id *)a0;
- (id)provenanceWithError:(id *)a0;

@end
