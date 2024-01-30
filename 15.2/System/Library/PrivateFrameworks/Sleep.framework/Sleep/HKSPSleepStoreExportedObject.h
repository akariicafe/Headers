@class HKSPSleepStore;

@interface HKSPSleepStoreExportedObject : NSObject <HKSPSleepClient>

@property (weak, nonatomic) HKSPSleepStore *sleepStore;

- (void)sleepSettingsChanged:(id)a0;
- (void)sleepScheduleStateChanged:(id)a0;
- (void)clientShouldCheckInWithCompletion:(id /* block */)a0;
- (void)sleepScheduleChanged:(id)a0;
- (void)sleepEventRecordChanged:(id)a0;
- (void).cxx_destruct;
- (void)getClientIdentifierWithCompletion:(id /* block */)a0;
- (void)sleepEventOccurred:(id)a0;
- (void)sleepModeChanged:(id)a0;

@end
