@interface HDSPSleepWidgetGreetingState : HDSPSleepWidgetStateMachineState

- (void)greetingExpiredEventDue;
- (BOOL)reloadsWidgetOnTimeChange;
- (BOOL)schedulesWidgetStateChange;
- (id)stateName;
- (BOOL)reloadsWidgetOnModelChange;
- (long long)widgetState;

@end
