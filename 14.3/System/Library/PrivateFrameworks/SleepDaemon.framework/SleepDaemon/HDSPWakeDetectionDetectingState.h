@interface HDSPWakeDetectionDetectingState : HDSPWakeDetectionStateMachineState

- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)stateName;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)wakeDetectionEventDue;
- (void)wakeupEventDetected:(id)a0;
- (void)earlyWakeUpWasNotifiedRemotely;
- (BOOL)schedulesWakeDetection;

@end
