@class NSString, HKSPStateMachine;

@interface HKSPStateMachineState : NSObject <HKSPStateMachineEventHandler, NSCopying>

@property (weak, nonatomic) HKSPStateMachine *stateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateState;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)willExitWithNextState:(id)a0 context:(id)a1;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (id)initWithStateMachine:(id)a0;
- (id)equalsBuilderWithObject:(id)a0;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)stateName;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;

@end
