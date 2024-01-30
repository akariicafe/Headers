@interface HDSPWakeUpResultsNotificationNeedsProtectedDataState : HDSPWakeUpResultsNotificationStateMachineState

- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)stateName;
- (void)protectedHealthDataDidBecomeAvailable;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)_transitionToQueryingState;

@end
