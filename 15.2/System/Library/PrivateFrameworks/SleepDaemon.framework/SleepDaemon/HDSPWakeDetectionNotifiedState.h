@interface HDSPWakeDetectionNotifiedState : HDSPWakeDetectionStateMachineState

- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)determineExpirationDateForCurrentDate:(id)a0;
- (id)determineNextState;
- (id)stateName;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;

@end
