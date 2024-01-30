@interface HDSPSleepModeBedtimeState : HDSPSleepModeStateMachineState

- (long long)sleepMode;
- (void)userDisengagedCurrentMode;
- (id)stateName;

@end
