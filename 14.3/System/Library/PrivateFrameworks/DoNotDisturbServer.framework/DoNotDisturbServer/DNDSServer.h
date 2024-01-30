@class DNDSClientDetailsProvider, DNDSScheduleLifetimeMonitor, NSObject, DNDSRemoteServiceProvider, IDSService, DNDSScheduleManager, DNDSSettingsManager, NSString, DNDSModeAssertionManager, DNDSCalendarEventLifetimeMonitor, DNDSStateProvider, NSArray, DNDSPairedDeviceStateMonitor, DNDSMetricsManager, DNDSEventBehaviorResolver;
@protocol OS_dispatch_queue, DNDSAssertionSyncManager, DNDSSettingsSyncManager;

@interface DNDSServer : NSObject <DNDSEventBehaviorResolverDataSource, DNDSLifetimeMonitorDataSource, DNDSScheduleLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate, DNDSRemoteServiceProviderDelegate, DNDSAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate, DNDSLegacyAssertionSyncManagerDataSource, DNDSSettingsSyncManagerDataSource, DNDSSettingsSyncManagerDelegate, DNDSScheduleManagerDataSource, DNDSSettingsManagerDelegate, DNDSPairedDeviceStateMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    DNDSModeAssertionManager *_modeAssertionManager;
    DNDSCalendarEventLifetimeMonitor *_calendarEventLifetimeMonitor;
    DNDSScheduleLifetimeMonitor *_scheduleLifetimeMonitor;
    NSArray *_lifetimeMonitors;
    DNDSScheduleManager *_scheduleManager;
    DNDSStateProvider *_stateProvider;
    DNDSEventBehaviorResolver *_eventBehaviorResolver;
    DNDSRemoteServiceProvider *_serviceProvider;
    id<DNDSAssertionSyncManager> _assertionSyncManager;
    id<DNDSSettingsSyncManager> _settingsSyncManager;
    DNDSSettingsManager *_settingsManager;
    IDSService *_idsService;
    DNDSPairedDeviceStateMonitor *_pairedDeviceStateMonitor;
    DNDSMetricsManager *_metricsManager;
}

@property unsigned long long lockState;
@property unsigned long long lostModeState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_queue_resume;
- (void)settingsManager:(id)a0 didReceiveUpdatedBehaviorSettings:(id)a1;
- (id)scheduleSettingsForSyncManager:(id)a0;
- (id)init;
- (void)syncManager:(id)a0 performModeAssertionUpdatesWithHandler:(id /* block */)a1;
- (id)currentStateForLegacyAssertionSyncManager:(id)a0;
- (id)eventBehaviorResolver:(id)a0 bypassSettingsForClientIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)settingsManager:(id)a0 didReceiveUpdatedSyncSettings:(id)a1;
- (void)_handleSignificantTimeChange;
- (void)_queue_handlePairedDeviceAndSyncSettingsChange;
- (BOOL)setUILockState:(unsigned long long)a0 error:(id *)a1;
- (id)remoteServiceProvider:(id)a0 assertionWithClientIdentifer:(id)a1 error:(id *)a2;
- (id)remoteServiceProvider:(id)a0 behaviorSettingsWithError:(id *)a1;
- (id)remoteServiceProvider:(id)a0 currentStateWithError:(id *)a1;
- (id)remoteServiceProvider:(id)a0 phoneCallBypassSettingsWithError:(id *)a1;
- (id)remoteServiceProvider:(id)a0 latestInvalidationWithClientIdentifer:(id)a1 error:(id *)a2;
- (BOOL)remoteServiceProvider:(id)a0 setScheduleSettings:(id)a1 withError:(id *)a2;
- (id)lifetimeMonitor:(id)a0 modeAssertionsWithLifetimeClass:(Class)a1;
- (id)_stateSystemSnapshot;
- (void)settingsManager:(id)a0 didReceiveUpdatedScheduleSettings:(id)a1;
- (unsigned long long)currentUILockStateForEventBehaviorResolver:(id)a0;
- (void)pairedDeviceStateMonitor:(id)a0 pairingChangedFromDevice:(id)a1 toDevice:(id)a2;
- (id)currentlyActivePairedDeviceForSyncManager:(id)a0;
- (void)syncManager:(id)a0 didReceiveUpdatedPhoneCallBypassSettings:(id)a1;
- (id)_activeDateIntervalForModeAssertion:(id)a0 currentlyActive:(BOOL)a1;
- (id)_updateModeAssertionManagerAndRefreshLifetimesAndStateWithHandler:(id /* block */)a0 error:(id *)a1;
- (void)settingsManager:(id)a0 didReceiveUpdatedPhoneCallBypassSettings:(id)a1;
- (void)syncManager:(id)a0 didReceiveUpdatedScheduleSettings:(id)a1;
- (id)remoteServiceProvider:(id)a0 scheduleSettingsWithError:(id *)a1;
- (id)remoteServiceProvider:(id)a0 invalidateAllModeAssertionsTakenBeforeDate:(id)a1 forReason:(unsigned long long)a2 clientIdentifier:(id)a3 error:(id *)a4;
- (void)resume;
- (id)remoteServiceProvider:(id)a0 invalidateModeAssertionForClientIdentifier:(id)a1 reason:(unsigned long long)a2 reasonOverride:(unsigned long long)a3 details:(id)a4 error:(id *)a5;
- (id)remoteServiceProvider:(id)a0 invalidateModeAssertionWithUUID:(id)a1 reason:(unsigned long long)a2 reasonOverride:(unsigned long long)a3 error:(id *)a4;
- (id)scheduleSettingsForScheduleManager:(id)a0;
- (BOOL)_setLostModeState:(unsigned long long)a0 error:(id *)a1;
- (id)currentStateForEventBehaviorResolver:(id)a0;
- (void)activeAssertionsDidChangeForLifetimeMonitor:(id)a0;
- (id)scheduleSettingsForScheduleLifetimeMonitor:(id)a0;
- (void)lifetimeMonitor:(id)a0 lifetimeDidExpireForAssertionUUIDs:(id)a1 expirationDate:(id)a2;
- (id)remoteServiceProvider:(id)a0 resolveBehaviorForEventDetails:(id)a1 clientDetails:(id)a2 date:(id)a3 error:(id *)a4;
- (id)remoteServiceProvider:(id)a0 takeModeAssertionWithDetails:(id)a1 clientIdentifier:(id)a2 error:(id *)a3;
- (void)_queue_updateScheduleManagerLifetimeMonitorsAndStateForReason:(unsigned long long)a0;
- (BOOL)remoteServiceProvider:(id)a0 setBehaviorSettings:(id)a1 withError:(id *)a2;
- (BOOL)remoteServiceProvider:(id)a0 setPhoneCallBypassSettings:(id)a1 withError:(id *)a2;
- (id)phoneCallBypassSettingsForSyncManager:(id)a0;

@end
