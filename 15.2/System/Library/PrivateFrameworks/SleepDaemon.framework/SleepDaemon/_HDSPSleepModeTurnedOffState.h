@interface _HDSPSleepModeTurnedOffState : HDSPSleepModeStateMachineState

- (void)updateState;
- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (id)determineExpirationDateForCurrentDate:(id)a0;
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)userTurnedOffSleepModeWithReason:(unsigned long long)a0;

@end
