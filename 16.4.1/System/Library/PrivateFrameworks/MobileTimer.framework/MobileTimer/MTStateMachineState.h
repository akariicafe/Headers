@class NSString, MTStateMachine;

@interface MTStateMachineState : NSObject <MTStateMachineEventHandler>

@property (weak, nonatomic) MTStateMachine *stateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didEnterWithPreviousState:(id)a0;
- (void)didExitWithNextState:(id)a0;
- (id)initWithStateMachine:(id)a0;
- (void)willEnterWithPreviousState:(id)a0;
- (void)willExitWithNextState:(id)a0;

@end
