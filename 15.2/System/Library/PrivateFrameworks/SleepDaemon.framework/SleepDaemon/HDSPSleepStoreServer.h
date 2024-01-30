@class HDSPProcessStateManager, NSString, HKSPXPCConnectionListener, HDSPEnvironment;
@protocol HKSPSyncAnchor;

@interface HDSPSleepStoreServer : NSObject <HKSPSleepServer, HDSPSleepScheduleStateObserver, HDSPSleepScheduleModelObserver, HDSPSleepEventHandler, HDSPSleepModeObserver, HDSPProcessStateManagerDelegate, HKSPXPCConnectionListenerDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware>

@property (readonly, nonatomic) HKSPXPCConnectionListener *connectionListener;
@property (readonly, nonatomic) HDSPProcessStateManager *processStateManager;
@property (readonly, nonatomic) id<HKSPSyncAnchor> syncAnchor;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } syncLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (id)eventIdentifiers;
- (void)startListening;
- (id)diagnosticDescription;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepSettings:(id)a1;
- (id)diagnosticInfo;
- (void)publishNotificationWithIdentifier:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)environmentDidBecomeReady:(id)a0;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)getSleepEventRecordWithCompletion:(id /* block */)a0;
- (void)dismissGoodMorningWithCompletion:(id /* block */)a0;
- (void)sleepAlarmWasDismissedOnDate:(id)a0 completion:(id /* block */)a1;
- (void)confirmAwakeWithCompletion:(id /* block */)a0;
- (id)incrementSyncAnchor;
- (id /* block */)_checkForSuspendedBlock;
- (void)setWidgetOverrideState:(long long)a0 completion:(id /* block */)a1;
- (void)environmentWillBecomeReady:(id)a0;
- (void)deleteSleepFocusModeWithCompletion:(id /* block */)a0;
- (void)setLockScreenOverrideState:(long long)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepSchedule:(id)a1;
- (void)publishWakeUpResultsNotificationWithCompletion:(id /* block */)a0;
- (void)environmentWillInvalidate:(id)a0;
- (void)createSleepFocusModeWithCompletion:(id /* block */)a0;
- (void)sleepEventIsDue:(id)a0;
- (void)processNoLongerSuspended:(int)a0;
- (void)getSleepWidgetStateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_notifyClient:(id)a0 forMissedMessagesWithSyncAnchor:(id)a1;
- (void)processDidBecomeSuspended:(int)a0;
- (void)clearWidgetOverrideWithCompletion:(id /* block */)a0;
- (void)checkInWithSyncAnchor:(id)a0 completion:(id /* block */)a1;
- (void)sleepAlarmWasModifiedWithCompletion:(id /* block */)a0;
- (void)saveSleepEventRecord:(id)a0 completion:(id /* block */)a1;
- (void)getSleepSettingsWithCompletion:(id /* block */)a0;
- (id)_locked_syncAnchor;
- (id)initWithEnvironment:(id)a0;
- (void)getSleepScheduleStateWithCompletion:(id /* block */)a0;
- (void)getSleepScheduleWithCompletion:(id /* block */)a0;
- (id)initWithEnvironment:(id)a0 connectionListenerProvider:(id /* block */)a1 processStateManager:(id)a2;
- (void)_withLock:(id /* block */)a0;
- (void)_performWhenEnvironmentIsReady:(id /* block */)a0;
- (void)saveSleepSettings:(id)a0 completion:(id /* block */)a1;
- (void)sleepAlarmWasSnoozedUntilDate:(id)a0 completion:(id /* block */)a1;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepEventRecord:(id)a1;
- (void)saveSleepSchedule:(id)a0 completion:(id /* block */)a1;
- (void)dismissSleepLockWithCompletion:(id /* block */)a0;
- (void)getSleepModeWithCompletion:(id /* block */)a0;
- (void)connectionListenerDidRemoveClient:(id)a0;
- (void)connectionListenerDidAddClient:(id)a0;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;
- (void)setSleepMode:(long long)a0 reason:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)connectWithCompletion:(id /* block */)a0;

@end
