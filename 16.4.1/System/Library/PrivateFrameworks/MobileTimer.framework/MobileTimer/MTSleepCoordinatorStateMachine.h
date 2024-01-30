@class MTSleepCoordinatorStateMachineDisabledState, NSString, MTSleepCoordinatorStateMachineAwakeState, MTSleepCoordinatorStateMachineAsleepState;

@interface MTSleepCoordinatorStateMachine : MTStateMachine <MTSleepCoordinatorStateMachineEventHandler>

@property (retain, nonatomic) MTSleepCoordinatorStateMachineAsleepState *asleepState;
@property (retain, nonatomic) MTSleepCoordinatorStateMachineAwakeState *awakeState;
@property (retain, nonatomic) MTSleepCoordinatorStateMachineDisabledState *disabledState;
@property (readonly, nonatomic) BOOL isUserAsleep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sleepAlarm;
- (id)currentDate;
- (id)initWithDelegate:(id)a0 infoProvider:(id)a1;
- (void)updateState;
- (void).cxx_destruct;
- (id)stateMachineLog;
- (unsigned long long)sleepTimeOutMinutes;
- (void)stateMachine:(id)a0 dismissWakeUpAlarm:(id)a1 dismissAction:(unsigned long long)a2;
- (void)stateMachine:(id)a0 shouldScheduleAlarmTimeoutForSecondsFromNow:(double)a1;
- (void)stateMachineUserWentToBed:(id)a0;
- (void)stateMachineUserWokeUp:(id)a0;
- (void)userBedTimeReached:(id)a0;
- (void)userWakeTimeReached:(id)a0;
- (void)userWakeUpAlarmFired;
- (void)userWentToBed;
- (void)userWokeUp;
- (void)wakeUpAlarmTimedOut;

@end
