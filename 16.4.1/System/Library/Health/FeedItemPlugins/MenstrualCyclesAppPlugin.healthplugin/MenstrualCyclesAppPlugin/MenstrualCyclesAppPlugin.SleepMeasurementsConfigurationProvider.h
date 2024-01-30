@interface MenstrualCyclesAppPlugin.SleepMeasurementsConfigurationProvider : NSObject <HKSPSleepStorePrivateObserver> {
    void /* unknown type, empty encoding */ sleepStore;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ configurationUpdates;
    void /* unknown type, empty encoding */ configurationPublisher;
}

- (void)sleepStore:(id)a0 sleepEventRecordDidChange:(id)a1;
- (void)sleepStore:(id)a0 sleepFocusConfigurationDidUpdate:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
