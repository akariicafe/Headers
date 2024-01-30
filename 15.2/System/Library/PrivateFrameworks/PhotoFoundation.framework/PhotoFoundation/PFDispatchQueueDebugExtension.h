@class NSMutableDictionary, PFSerialQueue;

@interface PFDispatchQueueDebugExtension : PFDispatchQueueStatisticsExtension {
    NSMutableDictionary *_allBlockInfoByCallSite;
    unsigned long long _count;
    PFSerialQueue *_serializer;
}

- (id)queue:(id)a0 receivedDispatchAsync:(id /* block */)a1;
- (id)queue:(id)a0 receivedDispatchBarrierSync:(id /* block */)a1;
- (id)queue:(id)a0 receivedDispatchBarrierAsync:(id /* block */)a1;
- (id)description;
- (void)installOnQueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)queue:(id)a0 receivedDispatchSync:(id /* block */)a1;
- (id)queue:(id)a0 receivedDispatchGroup:(id)a1 async:(id /* block */)a2;
- (id)queue:(id)a0 receivedDispatchGroup:(id)a1 notify:(id /* block */)a2;
- (id)recordBlockInfo:(id)a0;
- (Class)blockInfoClass;
- (id)_queueUsageByExecutionTimeDescription;
- (void)showQueueUsageByExecutionTime;
- (id)_queueUsageByEnqueueSiteDescription;
- (void)showQueueUsageByEnqueueSite;
- (id)queue:(id)a0 receivedDispatchAfter:(id /* block */)a1;

@end
