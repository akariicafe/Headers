@interface HDSPSleepWidgetNotOnboardedState : HDSPSleepWidgetStateMachineState

- (id)stateName;
- (void)sleepScheduleModelDidChange:(id)a0;
- (long long)widgetState;
- (void)sleepModeDidChange:(long long)a0 isUserRequested:(BOOL)a1;
- (BOOL)reloadsWidgetOnTimeChange;
- (BOOL)widgetStateHasTimeComponent;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0;
- (BOOL)reloadsWidgetOnModelChange;

@end
