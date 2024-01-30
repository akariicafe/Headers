@interface HDSPWakeUpResultsNotificationNotifiedState : HDSPWakeUpResultsNotificationStateMachineState

- (id)stateName;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)expirationDate;
- (void)didPostResultsNotification;

@end
