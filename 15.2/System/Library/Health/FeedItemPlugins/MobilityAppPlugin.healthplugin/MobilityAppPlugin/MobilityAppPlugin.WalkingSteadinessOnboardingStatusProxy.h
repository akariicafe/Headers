@interface MobilityAppPlugin.WalkingSteadinessOnboardingStatusProxy : NSObject <HKMobilityWalkingSteadinessFeatureStatusManagerObserver> {
    void /* unknown type, empty encoding */ _onboardingStatus;
    void /* unknown type, empty encoding */ featureStatusManager;
    void /* unknown type, empty encoding */ queue;
}

- (void)featureStatusManager:(id)a0 didUpdateOnboardingStatus:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
