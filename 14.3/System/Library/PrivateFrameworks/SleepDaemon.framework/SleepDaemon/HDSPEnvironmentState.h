@class HDSPEnvironmentStateMachine, NSString;

@interface HDSPEnvironmentState : HKSPStateMachineState <HDSPEnvironmentStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPEnvironmentStateMachine *stateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)systemDidBecomeReady;
- (void)dataMigrationDidComplete;

@end
