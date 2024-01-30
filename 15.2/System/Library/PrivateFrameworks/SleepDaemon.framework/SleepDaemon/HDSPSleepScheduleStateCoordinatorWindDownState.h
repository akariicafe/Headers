@interface HDSPSleepScheduleStateCoordinatorWindDownState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (id)determineExpirationDateForCurrentDate:(id)a0;
- (unsigned long long)scheduleState;
- (id)stateName;
- (void)bedtimeReached;

@end
