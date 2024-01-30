@interface HDSPSleepWidgetDisabledState : HDSPSleepWidgetStateMachineState

- (id)stateName;
- (long long)widgetState;
- (BOOL)reloadsWidgetOnTimeChange;
- (BOOL)widgetStateHasTimeComponent;
- (BOOL)reloadsWidgetOnModelChange;

@end
