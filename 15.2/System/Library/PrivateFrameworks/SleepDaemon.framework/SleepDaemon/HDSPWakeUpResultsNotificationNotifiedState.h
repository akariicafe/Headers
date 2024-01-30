@interface HDSPWakeUpResultsNotificationNotifiedState : HDSPWakeUpResultsNotificationStateMachineState

- (void)didPostResultsNotification;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)stateName;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;

@end
