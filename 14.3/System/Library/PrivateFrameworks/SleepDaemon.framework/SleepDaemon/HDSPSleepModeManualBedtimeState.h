@interface HDSPSleepModeManualBedtimeState : HDSPSleepModeBedtimeState

- (void)updateState;
- (BOOL)isUserRequested;
- (void)sleepScheduleStateChangedToWindDownFromState:(unsigned long long)a0;
- (void)sleepScheduleStateChangedToDisabledFromState:(unsigned long long)a0;
- (void)sleepScheduleStateChangedToWakeUp:(unsigned long long)a0;
- (void)sleepScheduleStateChangedToBedtimeFromState:(unsigned long long)a0;
- (id)stateName;

@end
