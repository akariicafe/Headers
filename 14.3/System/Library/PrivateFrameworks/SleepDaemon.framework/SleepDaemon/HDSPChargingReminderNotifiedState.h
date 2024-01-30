@interface HDSPChargingReminderNotifiedState : HDSPChargingReminderStateMachineState

- (void)updateState;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)determineExpirationDateForCurrentDate:(id)a0;
- (id)stateName;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;

@end
