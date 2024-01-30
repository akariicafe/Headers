@interface HDSPGoodMorningAlertWaitingState : HDSPGoodMorningAlertStateMachineState

- (id)stateName;
- (void)sleepScheduleStateChangedToWakeUp;

@end
