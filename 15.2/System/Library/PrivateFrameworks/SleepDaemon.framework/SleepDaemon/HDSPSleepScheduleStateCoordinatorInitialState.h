@interface HDSPSleepScheduleStateCoordinatorInitialState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (void)updateStateWithChangeReason:(unsigned long long)a0;
- (unsigned long long)scheduleState;
- (id)stateName;

@end
