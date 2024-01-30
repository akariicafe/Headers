@interface SleepHealthUI.SleepSettingsProvider : NSObject <HKSPSleepStorePrivateObserver> {
    void /* unknown type, empty encoding */ sleepStore;
    void /* unknown type, empty encoding */ currentSettingsPublisher;
    void /* unknown type, empty encoding */ currentSleepFocusConfigurationPublisher;
}

- (void)sleepStore:(id)a0 sleepSettingsDidChange:(id)a1;
- (void)sleepStore:(id)a0 sleepFocusConfigurationDidUpdate:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
