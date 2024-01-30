@interface HDSPSleepWidgetBedtimeInProgressState : HDSPSleepWidgetStateMachineState

- (void)sleepScheduleStateDidChange:(unsigned long long)a0;
- (void)sleepModeDidChange:(long long)a0 isUserRequested:(BOOL)a1;
- (id)stateName;
- (long long)widgetState;

@end
