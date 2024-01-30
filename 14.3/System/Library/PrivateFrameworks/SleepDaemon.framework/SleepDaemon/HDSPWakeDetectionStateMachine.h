@class HDSPWakeDetectionNotifiedState, NSString, HDSPWakeDetectionDisabledState, NSDate, HKSPSleepScheduleModel, HKSPSleepScheduleOccurrence, HDSPWakeDetectionWaitingState, HDSPWakeDetectionDetectingState;
@protocol HDSPWakeDetectionStateMachineInfoProvider, HDSPWakeDetectionStateMachineDelegate, NAScheduler;

@interface HDSPWakeDetectionStateMachine : HKSPPersistentStateMachine <HDSPWakeDetectionStateMachineDelegate, HDSPWakeDetectionStateMachineInfoProvider, HDSPWakeDetectionStateMachineEventHandler>

@property (readonly, weak, nonatomic) id<HDSPWakeDetectionStateMachineDelegate> delegate;
@property (readonly, weak, nonatomic) id<HDSPWakeDetectionStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic) HDSPWakeDetectionDisabledState *disabledState;
@property (readonly, nonatomic) HDSPWakeDetectionWaitingState *waitingState;
@property (readonly, nonatomic) HDSPWakeDetectionDetectingState *detectingState;
@property (readonly, nonatomic) HDSPWakeDetectionNotifiedState *notifiedState;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *relevantOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL sleepModeIsOff;
@property (readonly, nonatomic) BOOL isWatch;
@property (readonly, nonatomic) BOOL inDetectionWindow;

- (id)stateMachineLog;
- (id)initWithIdentifier:(id)a0 persistence:(id)a1 delegate:(id)a2 infoProvider:(id)a3 currentDateProvider:(id /* block */)a4;
- (void).cxx_destruct;
- (void)wakeDetectionEventDue;
- (void)wakeupEventDetected:(id)a0;
- (void)earlyWakeUpWasNotifiedRemotely;
- (void)postWakeDetectionNotification;
- (id)nextWakeUpAfterDate:(id)a0;
- (void)scheduleWakeDetection;
- (void)unscheduleWakeDetection;
- (void)startWakeDetection;
- (void)stopWakeDetection;
- (id)upcomingStartDetectionDateAfterDate:(id)a0;

@end
