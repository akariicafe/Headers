@interface HDSPSleepWidgetBedtimeState : HDSPSleepWidgetStateMachineState

- (BOOL)schedulesWidgetStateChange;
- (void)bedtimeExpiredEventDue;
- (id)stateName;
- (long long)widgetState;

@end
