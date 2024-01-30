@class CCVegaWorker, NSMutableDictionary, NSObject;
@protocol CCVegaWorkerClientDelegate;

@interface CCVegaWorkerClient : NSObject {
    NSMutableDictionary *_expressionFunctions;
}

@property (retain) CCVegaWorker *worker;
@property (weak) NSObject<CCVegaWorkerClientDelegate> *delegate;
@property BOOL isValid;

- (void).cxx_destruct;
- (void)clientDidExecuteTimerCallback;
- (void)clientEnter;
- (void)clientExit;
- (id)evaluateExpressionFunction:(id)a0;
- (id)initWithWorker:(id)a0 delegate:(id)a1;
- (void)registerExpressionFunction:(id /* block */)a0 withName:(id)a1;
- (void)runBlockAsync:(id /* block */)a0;
- (void)runBlockSync:(id /* block */)a0;
- (void)waitForWorker;

@end
