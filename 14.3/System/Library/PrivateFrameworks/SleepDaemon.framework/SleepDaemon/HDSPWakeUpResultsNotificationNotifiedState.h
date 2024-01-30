@interface HDSPWakeUpResultsNotificationNotifiedState : HDSPWakeUpResultsNotificationStateMachineState

- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)didPostResultsNotification;
- (id)stateName;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;

@end
