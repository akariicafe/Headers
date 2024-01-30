@interface HDSPSleepWidgetBedtimeInProgressState : HDSPSleepWidgetStateMachineState

- (id)stateName;
- (long long)widgetState;
- (void)sleepModeDidChange:(long long)a0 isUserRequested:(BOOL)a1;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0;

@end
