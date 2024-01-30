@interface HealthExperienceUI.PairedDeviceFeatureAttributesProvider : NSObject <HKFeatureAvailabilityProvidingObserver> {
    void /* unknown type, empty encoding */ pairedDeviceRegistry;
    void /* unknown type, empty encoding */ featureAvailabilityStore;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ subscribers;
}

- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
