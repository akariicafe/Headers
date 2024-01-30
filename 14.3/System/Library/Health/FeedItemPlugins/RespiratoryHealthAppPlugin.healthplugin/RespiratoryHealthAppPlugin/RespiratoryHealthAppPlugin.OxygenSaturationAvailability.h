@interface RespiratoryHealthAppPlugin.OxygenSaturationAvailability : NSObject <HKRPOxygenSaturationSettingsObserver> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ manager;
    void /* unknown type, empty encoding */ settings;
    void /* unknown type, empty encoding */ oxygenSaturationFeatureStatusPublisher;
    void /* unknown type, empty encoding */ oxygenSaturationFeatureStatus;
    void /* unknown type, empty encoding */ oxygenSaturationPromotionVisibilityPublisher;
    void /* unknown type, empty encoding */ oxygenSaturationPromotionVisibility;
    void /* unknown type, empty encoding */ onboardingCompletedKey;
    void /* unknown type, empty encoding */ respiratoryUserDefaults;
    void /* unknown type, empty encoding */ ageGatingUserDefaults;
    void /* unknown type, empty encoding */ ageGatingKey;
}

- (void)oxygenSaturationSettingsDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)pairedDevicesDidUpdate;

@end
