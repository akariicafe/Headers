@interface Heart.ElectrocardiogramUpdateAvailability : _TtCs12_SwiftObject <HKHeartRhythmAvailabilityObserver> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ heartRhythmAvailability;
    void /* unknown type, empty encoding */ isElectrocardiogramUpdateAvailablePublisher;
    void /* unknown type, empty encoding */ isElectrocardiogramUpdateAvailable;
}

- (void)heartRhythmAvailabilityDidUpdate;

@end
