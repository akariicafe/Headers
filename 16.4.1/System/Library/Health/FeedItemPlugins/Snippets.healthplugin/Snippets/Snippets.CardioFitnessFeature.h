@interface Snippets.CardioFitnessFeature : NSObject <HKHRCardioFitnessFeatureStatusManagerObserver> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_publisher;
    void /* unknown type, empty encoding */ currentAvailability;
    void /* unknown type, empty encoding */ _status;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ statusManager;
}

- (void)featureStatusManager:(id)a0 didUpdateOnboardingStatus:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
