@interface HDSPSleepWidgetWaitingState : HDSPSleepWidgetStateMachineState

- (void)upcomingChangeEventDue;
- (BOOL)schedulesWidgetStateChange;
- (id)stateName;
- (long long)widgetState;

@end
