@interface HDSPSleepModeBedtimeState : HDSPSleepModeStateMachineState

- (long long)sleepMode;
- (void)automationTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (id)stateName;
- (void)userTurnedOffSleepModeWithReason:(unsigned long long)a0;

@end
