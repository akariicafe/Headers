@class CKDClientProxy, CKDClientContext;

@interface CKDProxySetupOperation : NSOperation

@property (weak, nonatomic) CKDClientProxy *proxy;
@property (weak, nonatomic) CKDClientContext *context;
@property (nonatomic) BOOL isExecuting;
@property (nonatomic) BOOL isFinished;

+ (id)operationWithProxy:(id)a0 context:(id)a1;

- (void)_setIsExecuting:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isAsynchronous;
- (void)_setIsFinished:(BOOL)a0;
- (void)start;
- (id)initWithProxy:(id)a0 context:(id)a1;
- (void)_markFinished;

@end
