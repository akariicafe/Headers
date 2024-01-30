@interface Heart.HeartFeatureStatusAvailability : NSObject <HKHeartRhythmAvailabilityObserver, HKHRCardioFitnessFeatureStatusManagerObserver> {
    void /* unknown type, empty encoding */ ageGatingKeys;
    void /* unknown type, empty encoding */ privacyKeys;
    void /* unknown type, empty encoding */ bradycardiaKeys;
    void /* unknown type, empty encoding */ tachycardiaKeys;
    void /* unknown type, empty encoding */ atrialFibrillationKeys;
    void /* unknown type, empty encoding */ electrocardiogramKeys;
    void /* unknown type, empty encoding */ ageGatingDefaults;
    void /* unknown type, empty encoding */ privacyDefaults;
    void /* unknown type, empty encoding */ heartRateDefaults;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ heartRhythmAvailability;
    void /* unknown type, empty encoding */ cardioFitnessAvailability;
    void /* unknown type, empty encoding */ ageGatingKeyPaths;
    void /* unknown type, empty encoding */ privacyKeyPaths;
    void /* unknown type, empty encoding */ heartRateKeyPaths;
    void /* unknown type, empty encoding */ _bradycardiaFeatureStatus;
    void /* unknown type, empty encoding */ _tachycardiaFeatureStatus;
    void /* unknown type, empty encoding */ _atrialFibrillationFeatureStatus;
    void /* unknown type, empty encoding */ _electrocardiogramFeatureStatus;
    void /* unknown type, empty encoding */ _cardioFitnessFeatureStatus;
}

- (void)heartRhythmAvailabilityDidUpdate;
- (void)featureStatusManager:(id)a0 didUpdateNotificationStatus:(id)a1;
- (void)featureStatusManager:(id)a0 didUpdateOnboardingStatus:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)pairedDevicesDidUpdate;

@end
