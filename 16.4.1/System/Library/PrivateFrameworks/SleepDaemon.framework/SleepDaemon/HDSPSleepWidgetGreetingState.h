@interface HDSPSleepWidgetGreetingState : HDSPSleepWidgetStateMachineState

- (id)stateName;
- (long long)widgetState;
- (BOOL)reloadsWidgetOnTimeChange;
- (void)stateDidExpireWithContext:(id)a0;
- (double)expirationDuration;
- (BOOL)reloadsWidgetOnModelChange;
- (BOOL)schedulesExpiration;

@end
