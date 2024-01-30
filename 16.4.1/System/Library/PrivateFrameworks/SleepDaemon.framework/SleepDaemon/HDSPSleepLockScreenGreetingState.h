@interface HDSPSleepLockScreenGreetingState : HDSPSleepLockScreenStateMachineState

- (id)stateName;
- (void)dismissAlertForGoodMorning;
- (long long)sleepLockScreenState;
- (id)nextStateWithContext:(id *)a0;

@end
