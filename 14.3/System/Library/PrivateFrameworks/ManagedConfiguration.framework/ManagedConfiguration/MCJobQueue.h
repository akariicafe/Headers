@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, MCJobQueueObserver;

@interface MCJobQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *jobQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *jobGroup;
@property (retain, nonatomic) NSString *queueID;
@property unsigned int nextJobSequenceNumber;
@property (copy, nonatomic) id /* block */ executionQueueAbortCompletionBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue;
@property (weak, nonatomic) id<MCJobQueueObserver> observer;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)fromFunction:(const char *)a0 enqueueJob:(id /* block */)a1;
- (void)jobDidFinishFromFunction:(const char *)a0;
- (void)waitForEnqueuedJobsToCompleteCompletionBlock:(id /* block */)a0;
- (void)abortEnqueuedJobsCompletionBlock:(id /* block */)a0;

@end
