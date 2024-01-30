@class NSObject;
@protocol OS_dispatch_queue;

@interface JXOperation : NSOperation

@property BOOL isExecuting;
@property BOOL isFinished;
@property (retain) NSObject<OS_dispatch_queue> *stateQueue;

- (void)finish;
- (BOOL)isConcurrent;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)willFinish;
- (void)startAndWaitUntilFinished;

@end
