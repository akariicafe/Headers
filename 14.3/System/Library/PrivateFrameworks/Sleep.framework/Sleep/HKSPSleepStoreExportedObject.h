@class HKSPSleepStore;

@interface HKSPSleepStoreExportedObject : NSObject <HKSPSleepClient>

@property (weak, nonatomic) HKSPSleepStore *sleepStore;

- (void)sleepScheduleStateChanged:(unsigned long long)a0 syncAnchor:(id)a1;
- (void)sleepSettingsChanged:(id)a0 syncAnchor:(id)a1;
- (void).cxx_destruct;
- (void)sleepScheduleChanged:(id)a0 syncAnchor:(id)a1;
- (void)getClientIdentifierWithCompletion:(id /* block */)a0;
- (void)sleepEventOccurred:(id)a0 syncAnchor:(id)a1;
- (void)sleepModeChanged:(long long)a0 syncAnchor:(id)a1;
- (void)sleepEventRecordChanged:(id)a0 syncAnchor:(id)a1;

@end
