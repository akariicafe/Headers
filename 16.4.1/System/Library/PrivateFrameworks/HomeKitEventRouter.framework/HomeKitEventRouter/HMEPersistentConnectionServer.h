@class NSObject;
@protocol HMEPersistentConnectionServerDataSource, OS_os_log, HMEPersistentConnectionServerDelegate;

@interface HMEPersistentConnectionServer : HMERouterServer {
    NSObject<OS_os_log> *_logger;
}

@property (weak) id<HMEPersistentConnectionServerDelegate> delegate;
@property (weak) id<HMEPersistentConnectionServerDataSource> dataSource;

- (void)changeRegistrationsForConnection:(id)a0 topicFilterAdditions:(id)a1 topicFilterRemovals:(id)a2 completion:(id /* block */)a3;
- (id)upstreamTopicsForTopic:(id)a0;
- (void)handleCachedEvent:(id)a0 topic:(id)a1;
- (id)initWithQueue:(id)a0 provider:(id)a1 registrationEventRouter:(id)a2 storeReadHandle:(id)a3 logCategory:(const char *)a4;
- (void)connectWithConnection:(id)a0 connectEvent:(id)a1 unregisterEvent:(id)a2 completion:(id /* block */)a3;
- (void)didInvalidateConnection:(id)a0;
- (void)disconnectConnection:(id)a0;
- (id)initWithQueue:(id)a0 provider:(id)a1 registrationEventRouter:(id)a2;
- (id)expandedTopicsForTopics:(id)a0;
- (void)handleEvent:(id)a0 topic:(id)a1;
- (void).cxx_destruct;

@end
