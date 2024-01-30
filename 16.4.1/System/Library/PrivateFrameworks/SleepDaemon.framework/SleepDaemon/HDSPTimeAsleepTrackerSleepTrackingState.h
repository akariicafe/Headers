@interface HDSPTimeAsleepTrackerSleepTrackingState : HDSPTimeAsleepTrackerStateMachineState

+ (unsigned long long)defaultEndReason;
+ (unsigned long long)defaultStartReason;

- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (BOOL)isSleepTrackingState;
- (void)sleepSessionEndRequestedInternally;

@end
