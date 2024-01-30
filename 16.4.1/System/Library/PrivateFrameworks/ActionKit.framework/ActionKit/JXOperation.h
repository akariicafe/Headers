@class NSObject;
@protocol OS_dispatch_queue;

@interface JXOperation : NSOperation

@property BOOL isExecuting;
@property BOOL isFinished;
@property (retain) NSObject<OS_dispatch_queue> *stateQueue;

- (void)finish;
- (BOOL)isConcurrent;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (void)willFinish;
- (void)startAndWaitUntilFinished;

@end
