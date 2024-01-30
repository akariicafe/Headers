@class NSMapTable, NSString, HMETopicRouter, NSObject;
@protocol OS_dispatch_queue, OS_os_log, HMELastEventStoreReadHandle, HMEEventForwarder, HMESubscriptionProviding;

@interface HMERouterServer : NSObject <HMEEventConsumer, HMETopicRouterDelegate, HMELastEventStoreWriter> {
    NSObject<OS_os_log> *_logger;
}

@property (readonly) NSMapTable *unregisterEvents;
@property (readonly) id<HMESubscriptionProviding> subscriptionProvider;
@property (readonly) id<HMEEventForwarder> localEventForwarder;
@property (readonly) id<HMELastEventStoreReadHandle> eventStoreReadHandle;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) HMETopicRouter *topicRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (id)dumpStateDescription;
- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (id)initWithQueue:(id)a0 provider:(id)a1 registrationEventRouter:(id)a2;
- (void)handleEvent:(id)a0 topic:(id)a1;
- (void).cxx_destruct;
- (void)handleCachedEvent:(id)a0 topic:(id)a1;
- (void)didChangeRegistrationsWithTopicFilterAdditions:(id)a0 removals:(id)a1;
- (id)initWithQueue:(id)a0 provider:(id)a1 registrationEventRouter:(id)a2 storeReadHandle:(id)a3 logger:(id)a4;
- (void)didConnectConnection:(id)a0 connectEvent:(id)a1 unregisterEvent:(id)a2;
- (void)didRemoveConnection:(id)a0;
- (id)cachedEventsForTopics:(id)a0;

@end
