@interface HDSPWakeDetectionDetectingState : HDSPWakeDetectionStateMachineState

- (void)earlyWakeUpWasNotifiedRemotely;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (BOOL)schedulesWakeDetection;
- (void)wakeupEventDetected:(id)a0;
- (void)wakeDetectionEventDue;
- (id)stateName;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;

@end
