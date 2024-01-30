@interface Heart.HeartPromotionAvailability : _TtCs12_SwiftObject <HKHeartRhythmAvailabilityObserver> {
    void /* unknown type, empty encoding */ electrocardiogramAvailabilityResultPublisher;
    void /* unknown type, empty encoding */ electrocardiogramAvailabilityResult;
    void /* unknown type, empty encoding */ atrialFibrillationAvailabilityResultPublisher;
    void /* unknown type, empty encoding */ atrialFibrillationAvailabilityResult;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ heartRhythmAvailability;
}

- (void)heartRhythmAvailabilityDidUpdate;

@end
