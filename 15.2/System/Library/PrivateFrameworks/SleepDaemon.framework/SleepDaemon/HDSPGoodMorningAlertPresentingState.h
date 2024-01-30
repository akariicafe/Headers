@interface HDSPGoodMorningAlertPresentingState : HDSPGoodMorningAlertStateMachineState

- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)determineExpirationDateForCurrentDate:(id)a0;
- (void)goodMorningAlertTimedOut;
- (void)sleepScheduleStateChangedToBedtime;
- (id)determineNextState;
- (id)stateName;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;

@end
