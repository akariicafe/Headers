@interface HDSPSleepScheduleStateCoordinatorBedtimeState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (id)stateName;
- (id)expirationDate;
- (void)wakeUpConfirmed;
- (void)wakeTimeReached;
- (unsigned long long)scheduleState;

@end
