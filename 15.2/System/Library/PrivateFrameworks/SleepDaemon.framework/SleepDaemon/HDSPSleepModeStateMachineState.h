@class NSString, HDSPSleepModeStateMachine;

@interface HDSPSleepModeStateMachineState : HKSPPersistentStateMachineState <HDSPSleepModeStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPSleepModeStateMachine *stateMachine;
@property (readonly, nonatomic) long long sleepMode;
@property (readonly, nonatomic) unsigned long long defaultChangeReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)automationTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (void)sleepScheduleStateChangedToWakeUp:(unsigned long long)a0;
- (void)updateState;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (void)automationTurnedOnSleepModeWithReason:(unsigned long long)a0;
- (void)userTurnedOnSleepModeWithReason:(unsigned long long)a0;
- (void)sleepFocusModeDidChange;
- (id)determineNextState;
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (void)sleepScheduleStateChangedToDisabledFromState:(unsigned long long)a0;
- (void)userTurnedOffSleepModeWithReason:(unsigned long long)a0;

@end
