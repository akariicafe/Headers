@interface HDSPWakeUpResultsNotificationWaitingForRetryState : HDSPWakeUpResultsNotificationStateMachineState

- (id)stateName;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)expirationDate;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)retryAttemptEventDue;

@end
