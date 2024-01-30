@interface HDSPWakeUpResultsNotificationQueryingState : HDSPWakeUpResultsNotificationStateMachineState {
    BOOL _shouldRetryImmediatelyOnFailure;
}

- (id)stateName;
- (void)_retryQueryIfNeededOrTransitionToNeedsProtectedDataState;
- (void)queryDidComplete;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)expirationDate;
- (id)initWithCoder:(id)a0;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)_transitionToWaitingForWakeUpState;
- (void)_transitionToNotifiedState;
- (void)_executeQuery;
- (void)_transitionToRetryState;
- (void)protectedHealthDataDidBecomeAvailable;
- (BOOL)schedulesExpiration;
- (void)queryDidFailWithError:(id)a0;

@end
