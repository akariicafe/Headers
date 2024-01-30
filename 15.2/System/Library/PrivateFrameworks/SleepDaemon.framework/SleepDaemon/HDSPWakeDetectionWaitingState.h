@interface HDSPWakeDetectionWaitingState : HDSPWakeDetectionStateMachineState

- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (BOOL)schedulesWakeDetection;
- (void)wakeDetectionEventDue;
- (id)stateName;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;

@end
