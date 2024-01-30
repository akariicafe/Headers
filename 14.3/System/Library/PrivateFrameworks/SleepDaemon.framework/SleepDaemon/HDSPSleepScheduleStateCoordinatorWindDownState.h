@interface HDSPSleepScheduleStateCoordinatorWindDownState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (void)bedtimeReached;
- (id)determineExpirationDateForCurrentDate:(id)a0;
- (unsigned long long)scheduleState;
- (void)windDownSkipped;
- (id)stateName;

@end
