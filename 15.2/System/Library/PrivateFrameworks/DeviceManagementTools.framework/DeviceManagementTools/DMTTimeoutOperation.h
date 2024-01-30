@class NSTimer, CATOperation;

@interface DMTTimeoutOperation : CATOperation

@property (readonly, nonatomic) CATOperation *observedOperation;
@property (readonly, nonatomic) double timeoutInterval;
@property (readonly, nonatomic) BOOL cancelsOnTimeout;
@property (retain, nonatomic) NSTimer *timeoutTimer;

- (void)timerDidFire:(id)a0;
- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (void)createTimer;
- (void)beginWaitingForOperation;
- (void)innerOperationDidFinish:(id)a0;
- (id)initWithOperation:(id)a0 timeout:(double)a1 cancelsOnTimeout:(BOOL)a2;

@end
