@interface HDSPSleepWidgetWaitingState : HDSPSleepWidgetStateMachineState

- (id)stateName;
- (long long)widgetState;
- (id)expirationDate;
- (void)stateDidExpireWithContext:(id)a0;
- (BOOL)schedulesExpiration;

@end
