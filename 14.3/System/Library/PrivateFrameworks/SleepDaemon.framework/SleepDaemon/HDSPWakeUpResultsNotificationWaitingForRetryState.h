@interface HDSPWakeUpResultsNotificationWaitingForRetryState : HDSPWakeUpResultsNotificationStateMachineState

- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)retryAttemptEventDue;
- (id)stateName;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;

@end
