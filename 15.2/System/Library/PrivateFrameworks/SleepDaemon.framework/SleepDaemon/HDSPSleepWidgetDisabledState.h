@interface HDSPSleepWidgetDisabledState : HDSPSleepWidgetStateMachineState

- (BOOL)reloadsWidgetOnTimeChange;
- (BOOL)widgetStateHasTimeComponent;
- (id)stateName;
- (BOOL)reloadsWidgetOnModelChange;
- (long long)widgetState;

@end
