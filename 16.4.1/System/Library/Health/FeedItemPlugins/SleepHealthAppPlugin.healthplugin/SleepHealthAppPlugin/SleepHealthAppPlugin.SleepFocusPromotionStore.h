@interface SleepHealthAppPlugin.SleepFocusPromotionStore : NSObject <HKSPSleepStorePrivateObserver> {
    void /* unknown type, empty encoding */ _shouldPromoteSleepFocus;
    void /* unknown type, empty encoding */ sleepStore;
    void /* unknown type, empty encoding */ userDismissedPromotionObserver;
    void /* unknown type, empty encoding */ userVisitedSleepActivityConfigurationObserver;
    void /* unknown type, empty encoding */ cancellables;
}

- (void)sleepStore:(id)a0 sleepFocusConfigurationDidUpdate:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
