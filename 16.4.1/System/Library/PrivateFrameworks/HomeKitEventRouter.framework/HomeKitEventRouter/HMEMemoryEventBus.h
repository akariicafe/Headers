@class NSString, HMETopicRouter, NSObject;
@protocol OS_os_log, HMELastEventStoreReadHandle, HMEMemoryEventBusDelegate, HMELastEventStoreWriteHandle, OS_dispatch_queue, HMEMemoryEventBusDataSource;

@interface HMEMemoryEventBus : NSObject <HMELastEventStoreWriter, HMETopicRouterDelegate, HMESynchronousSubscriptionProviding, HMEEventForwarder, HMESubscriptionProviding, HMEEventConsumer> {
    NSObject<OS_os_log> *_logger;
}

@property (readonly) HMETopicRouter *topicRouter;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id<HMELastEventStoreReadHandle> eventStoreReadHandle;
@property (readonly) id<HMELastEventStoreWriteHandle> eventStoreWriteHandle;
@property (weak) id<HMEMemoryEventBusDelegate> delegate;
@property (weak) id<HMEMemoryEventBusDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)changeRegistrationsSyncForConsumer:(id)a0 topicFilterAdditions:(id)a1 topicFilterRemovals:(id)a2 completion:(id /* block */)a3;
- (void)changeRegistrationsForConsumer:(id)a0 topicFilterAdditions:(id)a1 topicFilterRemovals:(id)a2 completion:(id /* block */)a3;
- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (void)registerConsumer:(id)a0 topicFilters:(id)a1 completion:(id /* block */)a2;
- (id)upstreamTopicsForTopic:(id)a0;
- (void)unregisterConsumerSync:(id)a0 completion:(id /* block */)a1;
- (void)didChangeRegistrationsWithTopicFilterAdditions:(id)a0 removals:(id)a1;
- (void)unregisterConsumer:(id)a0 completion:(id /* block */)a1;
- (void)unregisterConsumer:(id)a0 topicFilters:(id)a1 completion:(id /* block */)a2;
- (id)synchronousSubscriptionProvider;
- (void)forwardEvent:(id)a0 topic:(id)a1 completion:(id /* block */)a2;
- (id)initWithQueue:(id)a0 storeReadHandle:(id)a1 storeWriteHandle:(id)a2 logCategory:(const char *)a3;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
