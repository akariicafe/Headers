@interface HDSPTimeAsleepTrackerSleepTrackingState : HDSPTimeAsleepTrackerStateMachineState

+ (unsigned long long)defaultStartReason;
+ (unsigned long long)defaultEndReason;

- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)sleepSessionEndRequestedInternally;
- (BOOL)isSleepTrackingState;

@end
