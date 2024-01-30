@class NSString;

@interface HDSPSleepWidgetStateMachineState : HKSPPersistentStateMachineState <HDSPSleepWidgetStateMachineEventHandler>

@property (readonly, nonatomic) long long widgetState;
@property (readonly, nonatomic) BOOL schedulesWidgetStateChange;
@property (readonly, nonatomic) BOOL reloadsWidgetOnModelChange;
@property (readonly, nonatomic) BOOL reloadsWidgetOnTimeChange;
@property (readonly, nonatomic) BOOL widgetStateHasTimeComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)greetingExpiredEventDue;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)updateState;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)upcomingChangeEventDue;
- (void)significantTimeChangeOccurred;
- (void)bedtimeExpiredEventDue;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0;
- (void)sleepModeDidChange:(long long)a0 isUserRequested:(BOOL)a1;
- (id)stateName;
- (void)sleepScheduleModelDidChange:(id)a0;
- (id)_determineNextState;

@end
