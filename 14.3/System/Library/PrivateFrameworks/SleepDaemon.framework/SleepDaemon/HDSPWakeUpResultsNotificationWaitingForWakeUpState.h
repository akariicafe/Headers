@interface HDSPWakeUpResultsNotificationWaitingForWakeUpState : HDSPWakeUpResultsNotificationStateMachineState

- (void)wakeUpDidOccur;
- (id)stateName;
- (void)_transitionToDelayingForTrackingState;

@end
