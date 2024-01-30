@class NSString, HMETopicRouter, NSObject;
@protocol OS_os_log, HMELastEventStoreReadHandle, HMELastEventStoreWriteHandle, OS_dispatch_queue, HMERouterClientDelegate;

@interface HMERouterClient : NSObject <HMECachedEventSource, HMELastEventStoreWriter, HMETopicRouterDelegate, HMESynchronousSubscriptionProviding, HMESubscriptionProviding> {
    NSObject<OS_os_log> *_logger;
}

@property (readonly) id<HMELastEventStoreReadHandle> eventStoreReadHandle;
@property (readonly) id<HMELastEventStoreWriteHandle> eventStoreWriteHandle;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) HMETopicRouter *topicRouter;
@property (weak) id<HMERouterClientDelegate> privateDelegate;
@property (readonly, nonatomic) BOOL isCachedEventSourceCurrentProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isActiveForSaving;
- (void)processReceivedCachedEvents:(id)a0;
- (id)forwardingTopicsForTopics:(id)a0;
- (unsigned long long)willWriteToStore;
- (void)changeRegistrationsSyncForConsumer:(id)a0 topicFilterAdditions:(id)a1 topicFilterRemovals:(id)a2 completion:(id /* block */)a3;
- (void)finishedWritingToStore:(unsigned long long)a0;
- (void)processReceivedEvents:(id)a0;
- (id)dumpStateDescription;
- (id)initWithQueue:(id)a0 storeReadHandle:(id)a1 storeWriteHandle:(id)a2 logger:(id)a3;
- (BOOL)handleChangeRegistrationsWithTopicFilterAdditions:(id)a0 removals:(id)a1;
- (id)initWithQueue:(id)a0 storeReadHandle:(id)a1 logger:(id)a2;
- (void)changeRegistrationsForConsumer:(id)a0 topicFilterAdditions:(id)a1 topicFilterRemovals:(id)a2 completion:(id /* block */)a3;
- (void)registerConsumer:(id)a0 topicFilters:(id)a1 completion:(id /* block */)a2;
- (id)upstreamTopicsForTopic:(id)a0;
- (void)unregisterConsumerSync:(id)a0 completion:(id /* block */)a1;
- (void)didChangeRegistrationsWithTopicFilterAdditions:(id)a0 removals:(id)a1;
- (void)unregisterConsumer:(id)a0 completion:(id /* block */)a1;
- (void)unregisterConsumer:(id)a0 topicFilters:(id)a1 completion:(id /* block */)a2;
- (id)synchronousSubscriptionProvider;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
