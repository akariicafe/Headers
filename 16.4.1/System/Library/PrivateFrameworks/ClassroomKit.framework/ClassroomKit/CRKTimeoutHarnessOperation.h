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

- (void)run;
- (void)main;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (void)dependentOperationDidFinish:(id)a0;
- (id)initWithOperationQueue:(id)a0 operation:(id)a1 timout:(double)a2;
- (id)initWithTimerPrimitives:(id)a0 operationQueue:(id)a1 operation:(id)a2 timerIdentifier:(id)a3 timeout:(double)a4;
- (void)timeoutDidFire;

@end
