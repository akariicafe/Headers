@class CCVegaWorker, NSMutableDictionary, NSObject;
@protocol CCVegaWorkerClientDelegate;

@interface CCVegaWorkerClient : NSObject {
    NSMutableDictionary *_expressionFunctions;
}

@property (retain) CCVegaWorker *worker;
@property (weak) NSObject<CCVegaWorkerClientDelegate> *delegate;
@property BOOL isValid;

- (void).cxx_destruct;
- (void)registerExpressionFunction:(id /* block */)a0 withName:(id)a1;
- (id)evaluateExpressionFunction:(id)a0;
- (void)clientEnter;
- (void)clientDidExecuteTimerCallback;
- (void)clientExit;
- (void)waitForWorker;
- (id)initWithWorker:(id)a0 delegate:(id)a1;
- (void)runBlockAsync:(id /* block */)a0;
- (void)runBlockSync:(id /* block */)a0;

@end
