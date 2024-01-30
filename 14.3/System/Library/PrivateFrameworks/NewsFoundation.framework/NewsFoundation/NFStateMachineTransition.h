@class NFStateMachineEvent, NFStateMachineState, NFStateMachine;
@protocol NFStateMachineContextType;

@interface NFStateMachineTransition : NSObject

@property (retain, nonatomic) NFStateMachine *stateMachine;
@property (retain, nonatomic) NFStateMachineState *fromState;
@property (retain, nonatomic) NFStateMachineState *toState;
@property (retain, nonatomic) NFStateMachineEvent *event;
@property (retain, nonatomic) id<NFStateMachineContextType> context;

- (void).cxx_destruct;
- (id)initWithStateMachine:(id)a0 event:(id)a1 fromState:(id)a2 toState:(id)a3 context:(id)a4;
- (id)description;

@end
