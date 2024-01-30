@interface HDSPWakeUpResultsNotificationDelayingForTrackingState : HDSPWakeUpResultsNotificationStateMachineState

- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)stateName;
- (void)trackingDelayEventDue;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;

@end
