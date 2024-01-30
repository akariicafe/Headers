@interface HDSPChargingReminderMonitoringState : HDSPChargingReminderStateMachineState

- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)stateName;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)batteryLevelChanged:(float)a0;

@end
