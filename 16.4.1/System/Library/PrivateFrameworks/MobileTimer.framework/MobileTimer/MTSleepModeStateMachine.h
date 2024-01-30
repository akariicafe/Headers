@class MTSleepModeStateMachineOffState, NSString, MTSleepModeStateMachineWaitingState, MTSleepModeStateMachineInitialState;

@interface MTSleepModeStateMachine : MTStateMachine <MTSleepModeStateMachineEventHandler>

@property (readonly, nonatomic) MTSleepModeStateMachineInitialState *initialState;
@property (readonly, nonatomic) MTSleepModeStateMachineOffState *offState;
@property (readonly, nonatomic) MTSleepModeStateMachineWaitingState *waitingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sleepAlarm;
- (id)currentDate;
- (id)keepOffUntilDate;
- (void)updateState:(BOOL)a0;
- (id)initWithDelegate:(id)a0 infoProvider:(id)a1;
- (void).cxx_destruct;
- (id)stateMachineLog;
- (BOOL)isSleepModeEnabled:(BOOL *)a0;
- (BOOL)isUserAsleep;
- (id)onStateWithSleepModeEndDate:(id)a0;
- (void)sleepModeEnabled:(BOOL)a0 userRequested:(BOOL)a1 date:(id)a2;
- (BOOL)stateMachine:(id)a0 disengageSleepModeUserRequested:(BOOL)a1;
- (BOOL)stateMachine:(id)a0 engageSleepModeUntilDate:(id)a1 userEngaged:(BOOL)a2;
- (void)stateMachine:(id)a0 keepSleepModeOffUntilDate:(id)a1;
- (void)stateMachine:(id)a0 scheduleUpdateForSecondsFromNow:(double)a1;
- (void)stateMachineClearKeepSleepModeOff:(id)a0;
- (id)userRequestedOffStateWithKeepOffUntilDate:(id)a0;
- (void)userWokeUp;

@end
