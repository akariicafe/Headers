@interface HDSPSleepModeManualOffState : HDSPSleepModeStateMachineState

- (void)updateState;
- (BOOL)isUserRequested;
- (void)userDisengagedCurrentMode;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)determineExpirationDateForCurrentDate:(id)a0;
- (void)sleepScheduleStateChangedToWindDownFromState:(unsigned long long)a0;
- (void)sleepScheduleStateChangedToBedtimeFromState:(unsigned long long)a0;
- (id)stateName;

@end
