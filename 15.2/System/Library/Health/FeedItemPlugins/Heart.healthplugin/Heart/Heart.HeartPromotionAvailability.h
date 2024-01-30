@interface Heart.HeartPromotionAvailability : NSObject <HKHeartRhythmAvailabilityObserver> {
    void /* unknown type, empty encoding */ electrocardiogramAvailabilityResultPublisher;
    void /* unknown type, empty encoding */ electrocardiogramAvailabilityResult;
    void /* unknown type, empty encoding */ atrialFibrillationAvailabilityResultPublisher;
    void /* unknown type, empty encoding */ atrialFibrillationAvailabilityResult;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ heartRhythmAvailability;
    void /* unknown type, empty encoding */ irregularRhythmNotificationsStatusManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_irregularRhythmNotificationsFeatureStatus;
    void /* unknown type, empty encoding */ subscriptions;
}

- (void)heartRhythmAvailabilityDidUpdate;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
