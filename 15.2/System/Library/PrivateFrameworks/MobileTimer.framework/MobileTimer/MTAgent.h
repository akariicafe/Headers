@class MTTimerSnapshot, MTLanguageChangeListener, MTSystemStateListener, MTSleepModeMonitor, MTAlarmStorage, MTMetrics, MTAlarmScheduler, MTSleepCoordinator, NSString, MTSleepManager, MTSleepSessionManager, MTTimerScheduler, MTTimeListener, MTSleepSessionTracker, MTAgentDiagnosticListener, MTAlarmIntentDonor, MTTimerStorage, MTTimerServer, MTTimerIntentDonor, MTAlarmSyncDataModel, MTCoreDuetMonitor, MTAlarmServer, NSDate, MTAlarmSnapshot, MTAgentNotificationManager;
@protocol NAScheduler, MTNotificationCenter;

@interface MTAgent : NSObject <MTAgentDiagnosticDelegate, MTSystemStateDelegate>

@property (retain, nonatomic) NSDate *launchDate;
@property (nonatomic) BOOL systemReady;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (retain, nonatomic) MTAgentNotificationManager *notificationManager;
@property (retain, nonatomic) MTSystemStateListener *systemStateListener;
@property (retain, nonatomic) MTLanguageChangeListener *languageChangeListener;
@property (retain, nonatomic) MTAgentDiagnosticListener *diagnostics;
@property (retain, nonatomic) MTTimeListener *timeListener;
@property (retain, nonatomic) MTAlarmServer *alarmServer;
@property (retain, nonatomic) MTAlarmScheduler *alarmScheduler;
@property (retain, nonatomic) MTAlarmSnapshot *alarmSnapshot;
@property (retain, nonatomic) MTAlarmStorage *alarmStorage;
@property (retain, nonatomic) MTTimerServer *timerServer;
@property (retain, nonatomic) MTTimerScheduler *timerScheduler;
@property (retain, nonatomic) MTTimerSnapshot *timerSnapshot;
@property (retain, nonatomic) MTTimerStorage *timerStorage;
@property (retain, nonatomic) id<MTNotificationCenter> notificationCenter;
@property (retain, nonatomic) MTAlarmIntentDonor *alarmIntentDonor;
@property (retain, nonatomic) MTTimerIntentDonor *timerIntentDonor;
@property (retain, nonatomic) MTCoreDuetMonitor *coreDuetMonitor;
@property (retain, nonatomic) MTSleepCoordinator *sleepCoordinator;
@property (retain, nonatomic) MTSleepModeMonitor *sleepModeMonitor;
@property (retain, nonatomic) MTSleepSessionManager *sleepSessionManager;
@property (retain, nonatomic) MTSleepSessionTracker *sleepSessionTracker;
@property (retain, nonatomic) MTAlarmSyncDataModel *alarmSyncDataModel;
@property (retain, nonatomic) MTMetrics *syncMetrics;
@property (readonly, nonatomic) MTSleepManager *sleepManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)agent;

- (void)printDiagnostics;
- (id)gatherDiagnostics;
- (void)handleF5Reset;
- (id)_diagnosticProviders;
- (void)_setupSync;
- (void)handleMigrationFinish;
- (void).cxx_destruct;
- (id)init;
- (void)_setupTimers;
- (void)_setupNotificationCenter;
- (void)_setupAlarms;
- (void)restoreDidFinish;
- (void)_setupInitialListeners;
- (void)_setupSecondaryListeners;

@end
