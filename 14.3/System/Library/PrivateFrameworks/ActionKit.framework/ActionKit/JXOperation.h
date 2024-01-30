@class NSObject;
@protocol OS_dispatch_queue;

@interface JXOperation : NSOperation

@property BOOL isExecuting;
@property BOOL isFinished;
@property (retain) NSObject<OS_dispatch_queue> *stateQueue;

- (void)cancel;
- (void)finish;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)start;
- (BOOL)isConcurrent;
- (void)willFinish;
- (void)startAndWaitUntilFinished;

@end
