@interface HDSPChargingReminderMonitoringState : HDSPChargingReminderStateMachineState

- (id)stateName;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)expirationDate;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (BOOL)schedulesExpiration;
- (void)batteryLevelChanged:(float)a0;

@end
