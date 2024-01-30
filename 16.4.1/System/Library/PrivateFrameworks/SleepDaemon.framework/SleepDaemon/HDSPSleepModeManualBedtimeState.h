@interface HDSPSleepModeManualBedtimeState : HDSPSleepModeBedtimeState

- (id)stateName;
- (void)sleepScheduleStateChangedToWakeUp:(unsigned long long)a0;
- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (unsigned long long)defaultChangeReason;
- (void)automationTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (id)nextStateWithContext:(id *)a0;
- (void)sleepScheduleStateChangedToDisabledFromState:(unsigned long long)a0;

@end
