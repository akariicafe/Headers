@interface Heart.CardioFitnessAdvertisableFeatureSource : NSObject <HKHRCardioFitnessFeatureStatusManagerObserver> {
    void /* unknown type, empty encoding */ featureStatusManager;
    void /* unknown type, empty encoding */ onboardingFlowManager;
    void /* unknown type, empty encoding */ currentCountry;
    void /* unknown type, empty encoding */ includeFeaturesMadeAvailableByBuddy;
    void /* unknown type, empty encoding */ presentationLocation;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ delegate;
}

- (void)featureStatusManager:(id)a0 didUpdateNotificationStatus:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
