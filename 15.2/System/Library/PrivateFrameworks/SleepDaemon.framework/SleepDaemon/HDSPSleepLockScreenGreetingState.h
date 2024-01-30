@interface HDSPSleepLockScreenGreetingState : HDSPSleepLockScreenStateMachineState

- (void)dismissAlertForGoodMorning;
- (void)updateState;
- (id)stateName;
- (long long)sleepLockScreenState;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;

@end
