@class NSString, CATOperation;
@protocol CRKTimerPrimitives, CRKOperationQueue, CRKCancelable;

@interface CRKTimeoutHarnessOperation : CATOperation

@property (readonly, nonatomic) id<CRKTimerPrimitives> timerPrimitives;
@property (readonly, nonatomic) id<CRKOperationQueue> operationQueue;
@property (readonly, nonatomic) CATOperation *operation;
@property (readonly, copy, nonatomic) NSString *timerIdentifier;
@property (readonly, nonatomic) double timeout;
@property (retain, nonatomic) id<CRKCancelable> timeoutTimer;

+ (id)timeoutTimerIdentifier;

- (BOOL)isAsynchronous;
- (void)run;
- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithTimerPrimitives:(id)a0 operationQueue:(id)a1 operation:(id)a2 timerIdentifier:(id)a3 timeout:(double)a4;
- (void)dependentOperationDidFinish:(id)a0;
- (void)timeoutDidFire;
- (id)initWithOperationQueue:(id)a0 operation:(id)a1 timout:(double)a2;

@end
