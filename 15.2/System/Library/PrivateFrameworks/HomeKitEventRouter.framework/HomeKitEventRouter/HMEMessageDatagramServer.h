@class NSMutableArray, NSObject;
@protocol HMETimer, OS_os_log, HMEMessageDatagramServerDataSource, HMEMessageDatagramServerDelegate;

@interface HMEMessageDatagramServer : HMERouterServer {
    NSObject<OS_os_log> *_logger;
}

@property (readonly, nonatomic) NSMutableArray *connectionInfoItems;
@property (retain) id<HMETimer> connectionExpiryTimer;
@property (retain) id<HMETimer> connectionDebounceTimer;
@property (weak) id<HMEMessageDatagramServerDelegate> delegate;
@property (weak) id<HMEMessageDatagramServerDataSource> dataSource;

- (void)disconnectConnection:(id)a0;
- (id)initWithQueue:(id)a0 provider:(id)a1 registrationEventRouter:(id)a2;
- (void)changeRegistrationsForConnection:(id)a0 topicFilterAdditions:(id)a1 topicFilterRemovals:(id)a2 completion:(id /* block */)a3;
- (id)initWithQueue:(id)a0 provider:(id)a1 registrationEventRouter:(id)a2 storeReadHandle:(id)a3 logCategory:(const char *)a4;
- (void)handleEvent:(id)a0 topic:(id)a1;
- (void).cxx_destruct;
- (void)handleCachedEvent:(id)a0 topic:(id)a1;
- (void)reset;
- (void)keepAliveConnection:(id)a0 completion:(id /* block */)a1;
- (void)connectWithConnection:(id)a0 connectEvent:(id)a1 unregisterEvent:(id)a2 topicFilterAdditions:(id)a3 completion:(id /* block */)a4;
- (void)resetExistingEvents;

@end
