@interface HDSPSleepScheduleStateCoordinatorWindDownState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (id)stateName;
- (void)bedtimeReached;
- (id)expirationDate;
- (unsigned long long)scheduleState;

@end
