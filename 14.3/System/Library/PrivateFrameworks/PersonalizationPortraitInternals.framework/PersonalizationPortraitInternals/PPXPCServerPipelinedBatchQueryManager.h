@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface PPXPCServerPipelinedBatchQueryManager : NSObject {
    long long _pipelineDepth;
    unsigned long long _pipelinedCallTimeoutNsec;
    NSObject<OS_dispatch_semaphore> *_concurrentRequestSem;
    NSMutableDictionary *_queryReplyThrottleSemaphores;
    _Atomic BOOL _isInterrupted;
}

- (void)runConcurrentlyWithRequestThrottle:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_unblockQueryReplyThrottleSemaphore:(id)a0;
- (id)initWithPipelineDepth:(long long)a0 pipelinedCallTimeoutNsec:(unsigned long long)a1 maxConcurrentRequestsPerConnection:(unsigned long long)a2;
- (void)unblockPendingQueries;
- (void)sendBatchedResultForQueryWithName:(id)a0 queryId:(unsigned long long)a1 batchGenerator:(id /* block */)a2 sendError:(id /* block */)a3 sendBatch:(id /* block */)a4;

@end
