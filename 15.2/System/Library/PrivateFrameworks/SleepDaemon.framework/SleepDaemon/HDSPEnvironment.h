@class HDSPBiomeManager, HDSPSleepScheduleModelManager, HDSPAnalyticsManager, NSString, HDSPSleepWidgetManager, HKSPSensitiveUIMonitor, HDSPWakeDetectionManager, HDSPGoodMorningAlertManager, _HKBehavior, HDSPEnvironmentStateMachine, HDSPSleepModeManager, HDSPSleepLockScreenManager, HDSPSleepStoreServer, HDSPSleepScheduleModelMigrationManager, HDSPDiagnostics, HDSPIDSServiceManager, HDSPSleepActionManager, HDSPAssertionManager, HDSPWakeUpResultsNotificationManager, HDSPContextStoreManager, NAFuture, HDSPTimeChangeListener, HDSPSleepTrackingManager, HDSPChargingReminderManager, HDSPSystemMonitor, HDSPSleepAlarmManager, HDSPNotificationListener, HDSPSleepEventScheduler, HKSPHealthStoreProvider, HDSPSleepStorage, HDSPSleepScheduleStateCoordinator, HDSPSleepNotificationManager;
@protocol HKSPQueueBackedScheduler, NAScheduler, HKSPUserDefaults;

@interface HDSPEnvironment : NSObject <HDSPDiagnosticsProvider, HDSPEnvironmentStateMachineDelegate, HDSPEnvironmentStateMachineInfoProvider, HDSPSystemReadyDelegate>

@property (readonly, nonatomic) HDSPEnvironmentStateMachine *stateMachine;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } stateMachineLock;
@property (readonly, nonatomic) NAFuture *environmentIsReady;
@property (readonly, nonatomic) BOOL isSystemReady;
@property (readonly, nonatomic) BOOL isDisabled;
@property (readonly, nonatomic) BOOL isDemoEnvironment;
@property (readonly, copy, nonatomic) id /* block */ currentDateProvider;
@property (readonly, nonatomic) id<HKSPUserDefaults> userDefaults;
@property (readonly, nonatomic) HDSPSleepStoreServer *sleepServer;
@property (readonly, nonatomic) HDSPGoodMorningAlertManager *goodMorningAlertManager;
@property (readonly, nonatomic) HDSPChargingReminderManager *chargingReminderManager;
@property (readonly, nonatomic) HDSPWakeDetectionManager *wakeDetectionManager;
@property (readonly, nonatomic) HDSPWakeUpResultsNotificationManager *wakeUpResultsNotificationManager;
@property (readonly, nonatomic) HDSPSleepAlarmManager *sleepAlarmManager;
@property (readonly, nonatomic) HKSPHealthStoreProvider *healthStoreProvider;
@property (readonly, nonatomic) HDSPDiagnostics *diagnostics;
@property (readonly, nonatomic) HDSPNotificationListener *notificationListener;
@property (readonly, nonatomic) HDSPSleepLockScreenManager *sleepLockScreenManager;
@property (readonly, nonatomic) HDSPSleepWidgetManager *sleepWidgetManager;
@property (readonly, nonatomic) HDSPSystemMonitor *systemMonitor;
@property (readonly, nonatomic) HDSPAssertionManager *assertionManager;
@property (readonly, nonatomic) HDSPTimeChangeListener *timeChangeListener;
@property (readonly, nonatomic) HKSPSensitiveUIMonitor *sensitiveUIMonitor;
@property (readonly, nonatomic) HDSPSleepScheduleModelMigrationManager *migrationManager;
@property (readonly, nonatomic) HDSPContextStoreManager *contextStoreManager;
@property (readonly, nonatomic) HDSPBiomeManager *biomeManager;
@property (readonly, nonatomic) HDSPIDSServiceManager *idsServiceManager;
@property (readonly, nonatomic) id<HKSPQueueBackedScheduler> defaultCallbackScheduler;
@property (readonly, nonatomic) HDSPAnalyticsManager *analyticsManager;
@property (readonly, nonatomic) BOOL isEnvironmentReady;
@property (readonly, nonatomic) _HKBehavior *behavior;
@property (readonly, nonatomic) HDSPSleepScheduleModelManager *sleepScheduleModelManager;
@property (readonly, nonatomic) HDSPSleepStorage *sleepStorage;
@property (readonly, nonatomic) HDSPSleepEventScheduler *sleepScheduler;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinator *sleepCoordinator;
@property (readonly, nonatomic) HDSPSleepModeManager *sleepModeManager;
@property (readonly, nonatomic) HDSPSleepTrackingManager *sleepTrackingManager;
@property (readonly, nonatomic) HDSPSleepActionManager *actionManager;
@property (readonly, nonatomic) HDSPSleepNotificationManager *notificationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;

+ (id)standardEnvironment;
+ (id)demoModeEnvironment;
+ (id)disabledEnvironment;

- (id)currentContext;
- (void)performBlock:(id /* block */)a0 withLock:(struct os_unfair_lock_s { unsigned int x0; } *)a1;
- (id)diagnosticDescription;
- (void)environmentShouldMigrateData;
- (BOOL)needsDataMigration;
- (void)perform:(id /* block */)a0 withSource:(id)a1;
- (id)diagnosticInfo;
- (id)_environmentAwareComponents;
- (void)environmentDidBecomeReady;
- (id)currentState;
- (void)performWhenEnvironmentIsReady:(id /* block */)a0 withContext:(id)a1;
- (void)systemDidBecomeReady;
- (void)performWhenEnvironmentIsReady:(id /* block */)a0;
- (void)perform:(id /* block */)a0 withContext:(id)a1;
- (void)updateState;
- (id)currentSource;
- (void)shutdown;
- (void)prepare;
- (void).cxx_destruct;
- (id)initWithBehavior:(id)a0 sleepStorageProvider:(id /* block */)a1 sleepScheduleModelManagerProvider:(id /* block */)a2 sleepSchedulerProvider:(id /* block */)a3 sleepServerProvider:(id /* block */)a4 sleepCoordinatorProvider:(id /* block */)a5 sleepModeManagerProvider:(id /* block */)a6 sleepTrackingManagerProvider:(id /* block */)a7 goodMorningAlertManagerProvider:(id /* block */)a8 chargingReminderManagerProvider:(id /* block */)a9 wakeDetectionManagerProvider:(id /* block */)a10 wakeUpResultsNotificationManagerProvider:(id /* block */)a11 actionManagerProvider:(id /* block */)a12 sleepAlarmManagerProvider:(id /* block */)a13 healthStoreProvider:(id)a14 contextStoreManagerProvider:(id /* block */)a15 biomeManagerProvider:(id /* block */)a16 migrationManagerProvider:(id /* block */)a17 notificationManagerProvider:(id /* block */)a18 notificationListenerProvider:(id /* block */)a19 sleepLockScreenManagerProvider:(id /* block */)a20 sleepWidgetManagerProvider:(id /* block */)a21 idsServiceManagerProvider:(id /* block */)a22 diagnosticsProvider:(id /* block */)a23 systemMonitorProvider:(id /* block */)a24 assertionManager:(id)a25 timeChangeListenerProvider:(id /* block */)a26 sensitiveUIMonitorProvider:(id /* block */)a27 analyticsManagerProvider:(id /* block */)a28 userDefaults:(id)a29 currentDateProvider:(id /* block */)a30 defaultCallbackScheduler:(id)a31;
- (void)dealloc;
- (void)_withLock:(id /* block */)a0;

@end
