@class NSString, HDSPGoodMorningAlertStateMachine;

@interface HDSPGoodMorningAlertStateMachineState : HKSPPersistentStateMachineState <HDSPGoodMorningAlertStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPGoodMorningAlertStateMachine *stateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
