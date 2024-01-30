@interface Heart.CardioFitnessOnboardingStatusProxy : NSObject <HKHRCardioFitnessFeatureStatusManagerObserver> {
    void /* unknown type, empty encoding */ featureStatusManager;
    void /* unknown type, empty encoding */ _onboardingStatus;
    void /* unknown type, empty encoding */ queue;
}

- (void)featureStatusManager:(id)a0 didUpdateOnboardingStatus:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
