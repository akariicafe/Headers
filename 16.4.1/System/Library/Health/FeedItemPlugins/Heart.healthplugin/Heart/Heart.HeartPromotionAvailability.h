@interface Heart.HeartPromotionAvailability : NSObject <HKHeartRhythmAvailabilityObserver> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ heartRhythmAvailability;
    void /* unknown type, empty encoding */ _atrialFibrillationAvailabilityResult;
    void /* unknown type, empty encoding */ _aFibBurdenAvailabilityResult;
    void /* unknown type, empty encoding */ _aFibFeaturesAvailabilityResult;
    void /* unknown type, empty encoding */ irregularRhythmNotificationsStatusManager;
    void /* unknown type, empty encoding */ _irregularRhythmNotificationsFeatureStatus;
    void /* unknown type, empty encoding */ aFibBurdenFeatureStatusManager;
    void /* unknown type, empty encoding */ _aFibBurdenFeatureStatus;
    void /* unknown type, empty encoding */ aFibBurdenEnabled;
    void /* unknown type, empty encoding */ subscriptions;
}

- (void)heartRhythmAvailabilityDidUpdate;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
