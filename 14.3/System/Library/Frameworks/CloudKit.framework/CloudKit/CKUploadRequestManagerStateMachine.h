@class CUStateEvent, CUStateMachine;

@interface CKUploadRequestManagerStateMachine : NSObject

@property (retain, nonatomic) CUStateMachine *stateMachine;
@property (retain, nonatomic) CUStateEvent *eventCausingTransition;
@property (copy, nonatomic) id /* block */ internalActionHandler;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (copy, nonatomic) id /* block */ enterStateHandler;
@property (copy, nonatomic) id /* block */ exitStateHandler;

+ (id)nameFromFunction:(long long)a0;
+ (id)nameFromResponseAction:(long long)a0;
+ (id)nameFromStateEvent:(long long)a0;
+ (id)nameFromState:(long long)a0;

- (void).cxx_destruct;
- (void)dispatchEvent:(long long)a0;
- (id)createStateMachine;
- (BOOL)canPerformFunction:(long long)a0;
- (id)initWithActionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)dispatchEvent:(long long)a0 userInfo:(id)a1;
- (id /* block */)eventHandlerForState:(id)a0 withEnterBlock:(id /* block */)a1 exitBlock:(id /* block */)a2 eventBlock:(id /* block */)a3;
- (void)transitionToState:(id)a0 withEvent:(id)a1;
- (void)start;

@end
