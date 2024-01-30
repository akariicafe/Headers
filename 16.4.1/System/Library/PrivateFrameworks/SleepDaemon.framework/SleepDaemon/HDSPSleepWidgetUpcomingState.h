@interface HDSPSleepWidgetUpcomingState : HDSPSleepWidgetStateMachineState

- (id)stateName;
- (long long)widgetState;
- (BOOL)schedulesExpiration;

@end
