@interface HDSPSleepModeBedtimeState : HDSPSleepModeStateMachineState

- (id)stateName;
- (void)userTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (void)sleepModeTurnedOffForUnknownReason;
- (void)automationTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (void)sleepModeTurnedOnForUnknownReason;
- (long long)sleepMode;

@end
