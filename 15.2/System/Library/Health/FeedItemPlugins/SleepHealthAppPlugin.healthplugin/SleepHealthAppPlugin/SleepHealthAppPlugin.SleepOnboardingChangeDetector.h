@interface SleepHealthAppPlugin.SleepOnboardingChangeDetector : NSObject <HKSPSleepStorePrivateObserver, HKFeatureAvailabilityProvidingObserver> {
    void /* unknown type, empty encoding */ sleepStore;
    void /* unknown type, empty encoding */ sleepEventRecord;
    void /* unknown type, empty encoding */ sleepSettings;
    void /* unknown type, empty encoding */ watchFeatureAvailability;
    void /* unknown type, empty encoding */ isAgeGatedObserver;
    void /* unknown type, empty encoding */ ageGatingDidChange;
    void /* unknown type, empty encoding */ onboardingCapability;
}

- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void)sleepStore:(id)a0 sleepSettingsDidChange:(id)a1;
- (void)sleepStore:(id)a0 sleepEventRecordDidChange:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
