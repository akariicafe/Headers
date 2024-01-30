@interface HDSPGoodMorningAlertPresentingState : HDSPGoodMorningAlertStateMachineState

- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)determineExpirationDateForCurrentDate:(id)a0;
- (void)sleepScheduleStateChangedToBedtime;
- (id)stateName;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)determineNextState;

@end
