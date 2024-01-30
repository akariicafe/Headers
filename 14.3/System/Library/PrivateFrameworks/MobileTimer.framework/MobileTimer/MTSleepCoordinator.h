@class MTSleepCoordinatorStateMachine, NSString, MTAlarm, NSDate, MTObserverStore, MTSleepModeMonitor, MTXPCScheduler, NAFuture;
@protocol MTAlarmStorage, NAScheduler;

@interface MTSleepCoordinator : NSObject <MTSource, MTSleepCoordinatorStateMachineDelegate, MTSleepCoordinatorStateMachineInfoProvider, MTAlarmObserver, MTTimeObserver, MTAgentDiagnosticDelegate>

@property (retain, nonatomic) MTSleepCoordinatorStateMachine *stateMachine;
@property (retain, nonatomic) MTAlarm *cachedSleepAlarm;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (retain, nonatomic) NAFuture *sleepStateResolved;
@property (retain, nonatomic) MTObserverStore *observers;
@property (copy, nonatomic) id<MTAlarmStorage> alarmStorage;
@property (retain, nonatomic) MTXPCScheduler *alarmTimeoutScheduler;
@property (retain, nonatomic) MTSleepModeMonitor *sleepModeMonitor;
@property (copy, nonatomic) id /* block */ currentDateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) MTAlarm *sleepAlarm;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) unsigned long long sleepTimeOutMinutes;

- (void)handleNotification:(id)a0 ofType:(long long)a1 completion:(id /* block */)a2;
- (void)source:(id)a0 didUpdateAlarms:(id)a1;
- (void)source:(id)a0 didDismissAlarm:(id)a1 dismissAction:(unsigned long long)a2;
- (BOOL)handlesNotification:(id)a0 ofType:(long long)a1;
- (void)source:(id)a0 didSnoozeAlarm:(id)a1 snoozeAction:(unsigned long long)a2;
- (void)source:(id)a0 didChangeNextAlarm:(id)a1;
- (void)source:(id)a0 didRemoveAlarms:(id)a1;
- (void)source:(id)a0 didAddAlarms:(id)a1;
- (void)timeListener:(id)a0 didDetectSignificantTimeChangeWithCompletionBlock:(id /* block */)a1;
- (void)source:(id)a0 didFireAlarm:(id)a1 triggerType:(unsigned long long)a2;
- (id)sourceIdentifier;
- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (id)initWithAlarmStorage:(id)a0 currentDateProvider:(id /* block */)a1;
- (void)updateSleepStateWithSleepAlarm:(id)a0;
- (void)notifyObserversForSleepAlarmChange:(id)a0;
- (void)notifyObserversForSleepAlarmChangeIfNecessary:(id)a0;
- (void)_notifyObserversForSleepAlarmChange:(id)a0;
- (void)handleBedtimeForAlarm:(id)a0 date:(id)a1;
- (void)handleBedtimeReminderForAlarm:(id)a0 date:(id)a1;
- (BOOL)isSleepModeOn;
- (id)initWithAlarmStorage:(id)a0;
- (void)printDiagnostics;
- (void)handleWakeUpAlarmForAlarm:(id)a0 date:(id)a1;
- (void)handleWakeUpTimeForAlarm:(id)a0 date:(id)a1;
- (void)handleSnoozeOfGoToBedNotificationForAlarm:(id)a0 date:(id)a1;
- (void)handleSnoozeForAlarm:(id)a0 date:(id)a1;
- (void)handleConfirmationOfGoToBedNotificationForAlarm:(id)a0 date:(id)a1;
- (void)handleDismissForAlarm:(id)a0 dismissAction:(unsigned long long)a1 date:(id)a2;
- (void)handleSleepSessionEndedForAlarm:(id)a0 date:(id)a1 reason:(unsigned long long)a2;
- (void)updateSleepState;
- (void)stateMachineUserWokeUp:(id)a0;
- (void)pairedDevicePreferencesChanged:(id)a0;
- (id)gatherDiagnostics;
- (void)stateMachineUserWentToBed:(id)a0;
- (void)stateMachine:(id)a0 dismissWakeUpAlarm:(id)a1 dismissAction:(unsigned long long)a2;
- (void)stateMachine:(id)a0 shouldScheduleAlarmTimeoutForSecondsFromNow:(double)a1;
- (BOOL)isUserAsleep;
- (void)sleepSessionTracker:(id)a0 sessionDidComplete:(id)a1;

@end
