@interface HDSPSleepScheduleStateCoordinatorWakeUpState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (id)determineExpirationDateForCurrentDate:(id)a0;
- (void)windDownReached;
- (unsigned long long)scheduleState;
- (id)stateName;
- (void)bedtimeReached;

@end
