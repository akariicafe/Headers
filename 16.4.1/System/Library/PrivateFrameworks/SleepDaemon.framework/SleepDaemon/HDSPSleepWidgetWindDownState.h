@interface HDSPSleepWidgetWindDownState : HDSPSleepWidgetStateMachineState

- (id)stateName;
- (long long)widgetState;
- (BOOL)widgetStateHasTimeComponent;

@end
