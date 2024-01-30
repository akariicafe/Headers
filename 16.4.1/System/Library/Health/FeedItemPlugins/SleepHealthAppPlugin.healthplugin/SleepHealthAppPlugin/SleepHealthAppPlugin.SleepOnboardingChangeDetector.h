@interface SleepHealthAppPlugin.SleepOnboardingChangeDetector : NSObject <HKSPSleepStorePrivateObserver, HKFeatureAvailabilityProvidingObserver> {
    void /* unknown type, empty encoding */ sleepStore;
    void /* unknown type, empty encoding */ sleepEventRecord;
    void /* unknown type, empty encoding */ sleepSettings;
    void /* unknown type, empty encoding */ watchFeatureAvailability;
    void /* unknown type, empty encoding */ isAgeGatedObserver;
    void /* unknown type, empty encoding */ ageGatingDidChange;
    void /* unknown type, empty encoding */ onboardingCapability;
}

- (void)sleepStore:(id)a0 sleepSettingsDidChange:(id)a1;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void)sleepStore:(id)a0 sleepEventRecordDidChange:(id)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
