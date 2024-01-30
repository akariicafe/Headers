@interface HDSPWakeUpResultsNotificationNeedsProtectedDataState : HDSPWakeUpResultsNotificationStateMachineState

- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)_transitionToQueryingState;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)protectedHealthDataDidBecomeAvailable;
- (id)stateName;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;

@end
