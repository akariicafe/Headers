@interface HDSPSleepLockScreenBedtimeState : HDSPSleepLockScreenStateMachineState

- (BOOL)schedulesLockScreenStateChange;
- (void)bedtimeExpiredEventDue;
- (id)stateName;
- (long long)sleepLockScreenState;

@end
