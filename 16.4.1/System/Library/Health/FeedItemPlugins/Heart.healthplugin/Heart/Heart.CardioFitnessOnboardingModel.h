@interface Heart.CardioFitnessOnboardingModel : NSObject <HKHRCardioFitnessFeatureStatusManagerObserver> {
    void /* unknown type, empty encoding */ onboardingFlowManager;
    void /* unknown type, empty encoding */ featureStatusManager;
    void /* unknown type, empty encoding */ detailsProvider;
    void /* unknown type, empty encoding */ mostRecentSampleDateProvider;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ queue_mostRecentNotificationStatus;
    void /* unknown type, empty encoding */ countryCode;
    void /* unknown type, empty encoding */ notificationsEnabled;
    void /* unknown type, empty encoding */ detailsChanged;
}

- (void)featureStatusManager:(id)a0 didUpdateNotificationStatus:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
