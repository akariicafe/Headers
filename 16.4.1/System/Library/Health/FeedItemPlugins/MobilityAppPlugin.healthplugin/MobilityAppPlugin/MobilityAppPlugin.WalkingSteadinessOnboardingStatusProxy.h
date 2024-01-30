@interface MobilityAppPlugin.WalkingSteadinessOnboardingStatusProxy : NSObject <HKMobilityWalkingSteadinessFeatureStatusManagerObserver> {
    void /* unknown type, empty encoding */ _onboardingStatus;
    void /* unknown type, empty encoding */ featureStatusManager;
    void /* unknown type, empty encoding */ queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)featureStatusManager:(id)a0 didUpdateOnboardingStatus:(id)a1;

@end
