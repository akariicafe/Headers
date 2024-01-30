@class DNDModeAssertionService, NSString, MTSleepCoordinator, MTSleepModeStateMachine, MTAlarm, NSDate;
@protocol MTAlarmStorage, NAScheduler;

@interface MTSleepModeMonitor : NSObject <DNDModeAssertionUpdateListener, MTSleepModeStateMachineInfoProvider, MTSleepModeStateMachineDelegate, MTSleepObserver, MTTimeObserver, MTAgentDiagnosticDelegate>

@property (retain, nonatomic) id<MTAlarmStorage> alarmStorage;
@property (weak, nonatomic) MTSleepCoordinator *sleepCoordinator;
@property (copy, nonatomic) id /* block */ currentDateProvider;
@property (retain, nonatomic) MTSleepModeStateMachine *stateMachine;
@property (retain, nonatomic) DNDModeAssertionService *assertionService;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) MTAlarm *sleepAlarm;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) NSDate *keepOffUntilDate;
@property (readonly, nonatomic) BOOL isUserAsleep;

- (void)timeListener:(id)a0 didDetectSignificantTimeChangeWithCompletionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)printDiagnostics;
- (void)dealloc;
- (id)gatherDiagnostics;
- (id)initWithAlarmStorage:(id)a0 sleepCoordinator:(id)a1;
- (BOOL)stateMachine:(id)a0 disengageSleepModeUserRequested:(BOOL)a1;
- (void)stateMachine:(id)a0 keepSleepModeOffUntilDate:(id)a1;
- (id)initWithAlarmStorage:(id)a0 sleepCoordinator:(id)a1 currentDateProvider:(id /* block */)a2;
- (BOOL)isSleepModeEnabled:(BOOL *)a0 error:(id *)a1;
- (unsigned long long)sleepModeTimeoutMinutes;
- (BOOL)isSleepModeEnabled:(BOOL *)a0;
- (void)userDisengagedSleepModeOnDate:(id)a0;
- (void)updateMonitorState;
- (void)userDisengagedSleepMode;
- (void)modeAssertionService:(id)a0 didReceiveModeAssertionInvalidation:(id)a1;
- (BOOL)stateMachine:(id)a0 engageSleepModeUntilDate:(id)a1 userEngaged:(BOOL)a2;
- (void)stateMachineClearKeepSleepModeOff:(id)a0;
- (void)stateMachine:(id)a0 scheduleUpdateForSecondsFromNow:(double)a1;
- (void)sleepCoordinator:(id)a0 userWentToBed:(id)a1 sleepAlarm:(id)a2;
- (void)sleepCoordinator:(id)a0 userWokeUp:(id)a1 sleepAlarm:(id)a2;
- (void)sleepCoordinator:(id)a0 bedtimeReminderDidFire:(id)a1 sleepAlarm:(id)a2;
- (void)sleepCoordinator:(id)a0 bedtimeReminderWasConfirmed:(id)a1 sleepAlarm:(id)a2;
- (void)sleepCoordinator:(id)a0 bedtimeWasReached:(id)a1 sleepAlarm:(id)a2;
- (BOOL)isEnabled;
- (void)sleepCoordinator:(id)a0 wakeUpAlarmDidFire:(id)a1 sleepAlarm:(id)a2;
- (void)sleepCoordinator:(id)a0 wakeUpAlarmWasSnoozed:(id)a1 sleepAlarm:(id)a2;
- (void)sleepCoordinator:(id)a0 sleepAlarmDidChange:(id)a1;
- (BOOL)sleepMode:(id *)a0;

@end
