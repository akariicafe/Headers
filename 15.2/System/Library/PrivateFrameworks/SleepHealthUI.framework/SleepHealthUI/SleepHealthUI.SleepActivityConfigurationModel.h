@interface SleepHealthUI.SleepActivityConfigurationModel : NSObject <HKFeatureAvailabilityProvidingObserver> {
    void /* unknown type, empty encoding */ _layout;
    void /* unknown type, empty encoding */ _scheduleModel;
    void /* unknown type, empty encoding */ _settingsModel;
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ configUIVisitedKey;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ behavior;
}

- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
