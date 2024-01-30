@interface HDSPWakeUpResultsNotificationQueryingState : HDSPWakeUpResultsNotificationStateMachineState {
    BOOL _shouldRetryImmediatelyOnFailure;
}

- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)queryDidFailWithError:(id)a0;
- (void)queryDidComplete;
- (id)stateName;
- (void)protectedHealthDataDidBecomeAvailable;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)_executeQuery;
- (void)_retryQueryIfNeededOrTransitionToNeedsProtectedDataState;
- (void)_transitionToRetryState;
- (void)_transitionToWaitingForWakeUpState;
- (void)_transitionToNotifiedState;

@end
