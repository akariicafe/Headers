@interface HDSPSleepWidgetWindDownState : HDSPSleepWidgetStateMachineState

- (BOOL)widgetStateHasTimeComponent;
- (id)stateName;
- (long long)widgetState;

@end
