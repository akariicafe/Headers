@interface HDSPSleepScheduleStateCoordinatorInitialState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (id)stateName;
- (id)nextStateWithContext:(id *)a0 forceUpdate:(BOOL)a1;
- (unsigned long long)scheduleState;

@end
