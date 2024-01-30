@interface Heart.TachycardiaFeatureStatusAvailability : _TtCs12_SwiftObject <HKHeartRhythmAvailabilityObserver, HKWristDetectionSettingManagerObserver> {
    void /* unknown type, empty encoding */ featureUserDefaultsDomain;
    void /* unknown type, empty encoding */ featureUserDefaultsKey;
    void /* unknown type, empty encoding */ heartRhythmAvailability;
    void /* unknown type, empty encoding */ wristDetectionManager;
    void /* unknown type, empty encoding */ userDefaultObservers;
    void /* unknown type, empty encoding */ notificationCancellable;
    void /* unknown type, empty encoding */ _featureStatus;
}

- (void)wristDetectionSettingManagerDidObserveWristDetectChange:(id)a0;
- (void)heartRhythmAvailabilityDidUpdate;

@end
