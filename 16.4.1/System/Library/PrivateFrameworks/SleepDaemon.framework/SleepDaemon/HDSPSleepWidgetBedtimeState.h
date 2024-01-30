@interface HDSPSleepWidgetBedtimeState : HDSPSleepWidgetStateMachineState

- (id)stateName;
- (long long)widgetState;
- (void)stateDidExpireWithContext:(id)a0;
- (double)expirationDuration;
- (BOOL)schedulesExpiration;

@end
