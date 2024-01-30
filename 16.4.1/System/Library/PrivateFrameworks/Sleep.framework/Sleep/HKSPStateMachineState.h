@class NSString, HKSPStateMachine;

@interface HKSPStateMachineState : NSObject <HKSPStateMachineEventHandler, NSCopying>

@property (weak, nonatomic) HKSPStateMachine *stateMachine;
@property (readonly, nonatomic) BOOL isCurrentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stateName;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)nextStateWithContext:(id *)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)updateState;
- (void).cxx_destruct;
- (id)stateIdentifier;
- (id)initWithStateMachine:(id)a0;
- (BOOL)_willExitWithNextState:(id)a0 context:(id)a1;
- (void)_didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)_didExitWithNextState:(id)a0 context:(id)a1;
- (BOOL)_willEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)equalsBuilderWithObject:(id)a0;
- (void)updateStateWithContext:(id)a0;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)willExitWithNextState:(id)a0 context:(id)a1;

@end
