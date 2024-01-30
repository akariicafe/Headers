@interface HDSPWakeUpResultsNotificationNeedsProtectedDataState : HDSPWakeUpResultsNotificationStateMachineState

- (id)stateName;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)expirationDate;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)_transitionToQueryingState;
- (void)protectedHealthDataDidBecomeAvailable;

@end
