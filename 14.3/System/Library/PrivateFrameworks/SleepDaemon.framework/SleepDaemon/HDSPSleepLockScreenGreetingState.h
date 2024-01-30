@interface HDSPSleepLockScreenGreetingState : HDSPSleepLockScreenStateMachineState

- (void)dismissAlertForGoodMorning;
- (long long)sleepLockScreenState;
- (void)updateState;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)stateName;

@end
