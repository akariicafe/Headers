@interface HDSPWakeUpResultsNotificationWaitingForWakeUpState : HDSPWakeUpResultsNotificationStateMachineState

- (id)stateName;
- (void)wakeUpDidOccur;
- (void)_transitionToDelayingForTrackingState;

@end
