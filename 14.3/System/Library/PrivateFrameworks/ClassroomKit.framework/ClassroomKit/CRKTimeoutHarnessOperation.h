@class NSTimer, CATOperation, CATOperationQueue;

@interface CRKTimeoutHarnessOperation : CATOperation

@property (readonly, nonatomic) CATOperationQueue *operationQueue;
@property (readonly, nonatomic) CATOperation *operation;
@property (readonly, nonatomic) double timeout;
@property (retain, nonatomic) NSTimer *timeoutTimer;

- (void)cancel;
- (void).cxx_destruct;
- (void)main;
- (BOOL)isAsynchronous;
- (void)dependentOperationDidFinish:(id)a0;
- (void)timeoutDidFire:(id)a0;
- (id)initWithOperationQueue:(id)a0 operation:(id)a1 timout:(double)a2;

@end
