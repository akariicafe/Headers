@class NSString, HKSPStateMachine;

@interface HKSPStateMachineState : NSObject <HKSPStateMachineEventHandler, NSCopying>

@property (weak, nonatomic) HKSPStateMachine *stateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)updateState;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stateName;
- (id)succinctDescriptionBuilder;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)willExitWithNextState:(id)a0 context:(id)a1;
- (id)equalsBuilderWithObject:(id)a0;
- (id)initWithStateMachine:(id)a0;

@end
