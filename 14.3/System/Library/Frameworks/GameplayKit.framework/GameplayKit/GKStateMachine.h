@class GKState, NSDictionary;

@interface GKStateMachine : NSObject {
    NSDictionary *_states;
}

@property (readonly, nonatomic) GKState *currentState;

+ (id)stateMachineWithStates:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)enterState:(Class)a0;
- (void)updateWithDeltaTime:(double)a0;
- (id)initWithStates:(id)a0;
- (id)stateForClass:(Class)a0;
- (BOOL)canEnterState:(Class)a0;
- (void)forceEnterState:(Class)a0;
- (id)_instanceData;
- (id)_dotStringInstanceData;

@end
