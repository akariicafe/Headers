@interface HDSPSleepScheduleStateCoordinatorDisabledState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (void)updateState;
- (unsigned long long)scheduleState;
- (id)stateName;

@end
