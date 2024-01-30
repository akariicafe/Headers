@class GKStateMachine;

@interface GKState : NSObject {
    GKStateMachine *_stateMachine;
}

@property (readonly, weak, nonatomic) GKStateMachine *stateMachine;

+ (id)state;

- (void).cxx_destruct;
- (id)init;
- (void)didEnterWithPreviousState:(id)a0;
- (void)willExitWithNextState:(id)a0;
- (void)updateWithDeltaTime:(double)a0;
- (BOOL)isValidNextState:(Class)a0;
- (void)_setStateMachine:(id)a0;

@end
