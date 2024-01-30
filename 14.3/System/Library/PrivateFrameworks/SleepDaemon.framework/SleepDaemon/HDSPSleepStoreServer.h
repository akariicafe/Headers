@class NAFuture, NSString, HKSPXPCConnectionListener, HDSPSleepMessageStore, HDSPEnvironment;

@interface HDSPSleepStoreServer : NSObject <HKSPSleepServer, HDSPSleepScheduleStateObserver, HDSPSleepScheduleModelObserver, HDSPSleepEventHandler, HDSPSleepModeObserver, HDSPDiagnosticsProvider, HDSPEnvironmentAware>

@property (readonly, nonatomic) NAFuture *environmentIsReady;
@property (readonly, nonatomic) HKSPXPCConnectionListener *connectionListener;
@property (readonly, nonatomic) HDSPSleepMessageStore *messageStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (id)eventIdentifiers;
- (void)environmentDidBecomeReady:(id)a0;
- (void)environmentWillInvalidate:(id)a0;
- (void)publishNotificationWithIdentifier:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)_notifyClientForMissedSleepModeChange:(id)a0 syncAnchor:(id)a1;
- (void)checkInWithSyncAnchor:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0;
- (void)connectWithCompletion:(id /* block */)a0;
- (void)sleepScheduleModelManager:(id)a0 source:(id)a1 didUpdateSleepSettings:(id)a2;
- (void)_notifyClientForMissedSettingsChange:(id)a0 syncAnchor:(id)a1;
- (void)saveSleepSettings:(id)a0 completion:(id /* block */)a1;
- (id)diagnosticInfo;
- (void)getSleepScheduleWithCompletion:(id /* block */)a0;
- (void)sleepScheduleModelManager:(id)a0 source:(id)a1 didUpdateSleepEventRecord:(id)a2;
- (void)_performWhenEnvironmentIsReady:(id /* block */)a0;
- (void)startListening;
- (void)sleepAlarmWasDismissedOnDate:(id)a0 completion:(id /* block */)a1;
- (id)diagnosticDescription;
- (void)_notifyClient:(id)a0 forMissedSleepEvent:(id)a1 syncAnchor:(id)a2;
- (void)getSleepEventRecordWithCompletion:(id /* block */)a0;
- (void)sleepScheduleModelManager:(id)a0 source:(id)a1 didUpdateSleepSchedule:(id)a2;
- (void)_notifyClientForMissedScheduleChange:(id)a0 syncAnchor:(id)a1;
- (void)publishWakeUpResultsNotificationWithCompletion:(id /* block */)a0;
- (void)confirmAwakeWithCompletion:(id /* block */)a0;
- (void)setSleepMode:(long long)a0 completion:(id /* block */)a1;
- (void)dismissGoodMorningWithCompletion:(id /* block */)a0;
- (void)sleepEventIsDue:(id)a0;
- (void)_notifyClientForMissedScheduleStateChange:(id)a0 syncAnchor:(id)a1;
- (void)saveSleepSchedule:(id)a0 completion:(id /* block */)a1;
- (void)sleepAlarmWasSnoozedUntilDate:(id)a0 completion:(id /* block */)a1;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)getSleepSettingsWithCompletion:(id /* block */)a0;
- (void)delayBedtimeForTimeInterval:(double)a0 completion:(id /* block */)a1;
- (void)dismissSleepLockWithCompletion:(id /* block */)a0;
- (void)getSleepModeWithCompletion:(id /* block */)a0;
- (void)getSleepScheduleStateWithCompletion:(id /* block */)a0;
- (void)_notifyClientForMissedRecordChange:(id)a0 syncAnchor:(id)a1;
- (void)environmentWillBecomeReady:(id)a0;
- (void)saveSleepEventRecord:(id)a0 completion:(id /* block */)a1;
- (void)sleepAlarmWasModifiedWithCompletion:(id /* block */)a0;
- (id)initWithEnvironment:(id)a0 connectionListenerProvider:(id /* block */)a1;
- (void)skipBedtimeWithCompletion:(id /* block */)a0;
- (void)_notifyClient:(id)a0 forMissedMessagesWithSyncAnchor:(id)a1;
- (void)skipWindDownWithCompletion:(id /* block */)a0;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;
- (void)setLockScreenOverrideState:(long long)a0 userInfo:(id)a1 completion:(id /* block */)a2;

@end
