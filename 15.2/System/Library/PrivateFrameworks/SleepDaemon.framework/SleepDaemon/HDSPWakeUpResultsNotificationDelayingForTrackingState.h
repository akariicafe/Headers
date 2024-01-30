@interface HDSPWakeUpResultsNotificationDelayingForTrackingState : HDSPWakeUpResultsNotificationStateMachineState

- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)trackingDelayEventDue;
- (id)stateName;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;

@end
