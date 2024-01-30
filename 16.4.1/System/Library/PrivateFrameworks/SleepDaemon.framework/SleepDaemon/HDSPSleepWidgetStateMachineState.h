@class HDSPSleepWidgetStateMachine, NSString;

@interface HDSPSleepWidgetStateMachineState : HKSPPersistentStateMachineState <HDSPSleepWidgetStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPSleepWidgetStateMachine *stateMachine;
@property (readonly, nonatomic) long long widgetState;
@property (readonly, nonatomic) BOOL reloadsWidgetOnModelChange;
@property (readonly, nonatomic) BOOL reloadsWidgetOnTimeChange;
@property (readonly, nonatomic) BOOL widgetStateHasTimeComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stateName;
- (void)sleepScheduleModelDidChange:(id)a0;
- (void)significantTimeChangeOccurred;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)sleepModeDidChange:(long long)a0 isUserRequested:(BOOL)a1;
- (id)nextStateWithContext:(id *)a0;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0;
- (BOOL)shouldGoIntoUpcomingState;

@end
