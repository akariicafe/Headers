@class NSMutableDictionary, PFSerialQueue;

@interface PFDispatchQueueDebugExtension : PFDispatchQueueStatisticsExtension {
    NSMutableDictionary *_allBlockInfoByCallSite;
    unsigned long long _count;
    PFSerialQueue *_serializer;
}

- (id)init;
- (void).cxx_destruct;
- (id)queue:(id)a0 receivedDispatchAfter:(id /* block */)a1;
- (id)recordBlockInfo:(id)a0;
- (Class)blockInfoClass;
- (void)showQueueUsageByExecutionTime;
- (id)_queueUsageByExecutionTimeDescription;
- (id)_queueUsageByEnqueueSiteDescription;
- (void)showQueueUsageByEnqueueSite;
- (id)queue:(id)a0 receivedDispatchGroup:(id)a1 async:(id /* block */)a2;
- (id)queue:(id)a0 receivedDispatchBarrierAsync:(id /* block */)a1;
- (id)description;
- (void)installOnQueue:(id)a0;
- (id)queue:(id)a0 receivedDispatchAsync:(id /* block */)a1;
- (id)queue:(id)a0 receivedDispatchGroup:(id)a1 notify:(id /* block */)a2;
- (id)queue:(id)a0 receivedDispatchSync:(id /* block */)a1;
- (id)queue:(id)a0 receivedDispatchBarrierSync:(id /* block */)a1;

@end
