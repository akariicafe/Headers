@interface HDSPWakeDetectionNotifiedState : HDSPWakeDetectionStateMachineState

- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)stateName;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)determineNextState;

@end
