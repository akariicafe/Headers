@class NSString, HDSPSleepModeStateMachine;

@interface HDSPSleepModeStateMachineState : HKSPPersistentStateMachineState <HDSPSleepModeStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPSleepModeStateMachine *stateMachine;
@property (readonly, nonatomic) long long sleepMode;
@property (readonly, nonatomic) BOOL isUserRequested;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateState;
- (void)userDisengagedCurrentMode;
- (void)sleepScheduleStateChangedToWindDownFromState:(unsigned long long)a0;
- (void)sleepScheduleStateChangedToDisabledFromState:(unsigned long long)a0;
- (void)userEngagedBedtimeMode;
- (void)sleepScheduleStateChangedToWakeUp:(unsigned long long)a0;
- (void)sleepScheduleStateChangedToBedtimeFromState:(unsigned long long)a0;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)determineNextState;
- (BOOL)isScheduledSleepModeEnabled;
- (BOOL)isSleepModeDuringWindDownEnabled;

@end
