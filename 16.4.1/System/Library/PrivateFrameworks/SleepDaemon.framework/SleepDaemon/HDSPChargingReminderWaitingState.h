@interface HDSPChargingReminderWaitingState : HDSPChargingReminderStateMachineState

- (id)stateName;
- (id)expirationDate;
- (void)stateDidExpireWithContext:(id)a0;
- (BOOL)schedulesExpiration;

@end
