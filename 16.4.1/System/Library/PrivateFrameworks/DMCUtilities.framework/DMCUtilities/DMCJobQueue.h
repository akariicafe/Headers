@class NSString, DMCHangDetectionQueue, NSObject;
@protocol OS_dispatch_queue;

@interface DMCJobQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *jobQueue;
@property (retain, nonatomic) NSString *queueID;
@property unsigned int nextJobSequenceNumber;
@property (copy, nonatomic) id /* block */ executionQueueAbortCompletionBlock;
@property (retain, nonatomic) DMCHangDetectionQueue *executionQueue;

- (void)queueBlock:(id /* block */)a0;
- (id)initWithExecutionQueue:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)fromFunction:(const char *)a0 enqueueJob:(id /* block */)a1;
- (void)jobDidFinishFromFunction:(const char *)a0 jobBlockDescription:(id)a1;
- (void)waitForEnqueuedJobsToCompleteCompletionBlock:(id /* block */)a0;

@end
