@interface HDSPSleepWidgetNotOnboardedState : HDSPSleepWidgetStateMachineState

- (BOOL)reloadsWidgetOnTimeChange;
- (BOOL)widgetStateHasTimeComponent;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0;
- (void)sleepModeDidChange:(long long)a0 isUserRequested:(BOOL)a1;
- (id)stateName;
- (void)sleepScheduleModelDidChange:(id)a0;
- (BOOL)reloadsWidgetOnModelChange;
- (long long)widgetState;

@end
