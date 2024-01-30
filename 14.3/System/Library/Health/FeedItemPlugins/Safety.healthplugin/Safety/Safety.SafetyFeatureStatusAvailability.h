@interface Safety.SafetyFeatureStatusAvailability : NSObject {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ emergencySOSFeatureStatusPublisher;
    void /* unknown type, empty encoding */ emergencySOSFeatureStatus;
    void /* unknown type, empty encoding */ fallDetectionFeatureStatusPublisher;
    void /* unknown type, empty encoding */ fallDetectionFeatureStatus;
    void /* unknown type, empty encoding */ callWithSideButtonKey;
    void /* unknown type, empty encoding */ autoCallKey;
    void /* unknown type, empty encoding */ countdownAudioKey;
    void /* unknown type, empty encoding */ sosDefaults;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)pairedDevicesDidUpdate;

@end
