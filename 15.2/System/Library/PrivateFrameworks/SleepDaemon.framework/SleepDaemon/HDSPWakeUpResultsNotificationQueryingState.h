@interface HDSPWakeUpResultsNotificationQueryingState : HDSPWakeUpResultsNotificationStateMachineState {
    BOOL _shouldRetryImmediatelyOnFailure;
}

- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)_retryQueryIfNeededOrTransitionToNeedsProtectedDataState;
- (void)protectedHealthDataDidBecomeAvailable;
- (void)queryDidFailWithError:(id)a0;
- (void)_transitionToWaitingForWakeUpState;
- (id)initWithCoder:(id)a0;
- (id)stateName;
- (void)_executeQuery;
- (void)queryDidComplete;
- (void)_transitionToRetryState;
- (void)_transitionToNotifiedState;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;

@end
