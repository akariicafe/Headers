@class NSUUID, NSString, NSMutableDictionary, HMFMessageDispatcher, NSDictionary, NSObject, NSMutableArray, HMEMessageDatagramServer, NSNotificationCenter, HMDEventRouterTimerProvider;
@protocol HMDRemoteEventRouterServerDataSource, OS_os_log, OS_dispatch_queue, HMMLogEventSubmitting;

@interface HMDRemoteEventRouterServer : NSObject <HMFMessageReceiver, HMEMessageDatagramServerDataSource, HMEMessageDatagramServerDelegate, HMFLogging, HMDRemoteEventAccessControlEnforcer> {
    NSObject<OS_os_log> *_logger;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *routerRequestMessageName;
@property (readonly, copy) NSString *routerUpdateMessageName;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDEventRouterTimerProvider *timerProvider;
@property (readonly) HMEMessageDatagramServer *connectionServer;
@property (readonly) NSMutableArray *currentConnections;
@property (nonatomic) BOOL isPrimaryResident;
@property (readonly, weak) id<HMDRemoteEventRouterServerDataSource> dataSource;
@property (readonly) NSMutableDictionary *accessControls;
@property (readonly, weak) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, copy) NSDictionary *currentAccessControls;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)dumpStateDescription;
- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)shouldAllowEvent:(id)a0 topic:(id)a1 connection:(id)a2;
- (void)configureIsPrimaryResident:(BOOL)a0 additionalPolicies:(id)a1;
- (id)initWithUUID:(id)a0 queue:(id)a1 messageDispatcher:(id)a2 dataSource:(id)a3 notificationCenter:(id)a4 requestMessageName:(id)a5 updateMessageName:(id)a6 subscriptionProvider:(id)a7 registrationEventRouter:(id)a8 storeReadHandle:(id)a9;
- (void)_registerForMessages:(id)a0;
- (void)_handleUpdatedPrimaryResidentNotification:(id)a0;
- (id)_underlyingMessageDataFromFragmentMessageData:(id)a0 error:(id *)a1;
- (void)setAccessControlsForTopics:(id)a0;
- (void)server:(id)a0 sendEvents:(id)a1 connection:(id)a2 completion:(id /* block */)a3;
- (void)server:(id)a0 connectionDidExpire:(id)a1;
- (double)server:(id)a0 timeoutIntervalForConnection:(id)a1;
- (BOOL)server:(id)a0 isConnectionTerminatingError:(id)a1;
- (id)serverTimerProvider:(id)a0;
- (BOOL)serverShouldProcessEvents:(id)a0;
- (id)initWithUUID:(id)a0 queue:(id)a1 messageDispatcher:(id)a2 dataSource:(id)a3 notificationCenter:(id)a4 requestMessageName:(id)a5 updateMessageName:(id)a6 logCategory:(const char *)a7 logEventSubmitter:(id)a8 connectionServerFactory:(id /* block */)a9;
- (void)respondToMessage:(id)a0 underlyingResponseData:(id)a1 connection:(id)a2 label:(id)a3;
- (void)_handleRequestMessage:(id)a0;
- (void)_handleProtoRequest:(id)a0 originalMessage:(id)a1;
- (void)_handleConnectRequest:(id)a0 originalMessage:(id)a1;
- (void)_handleDisconnectRequest:(id)a0 originalMessage:(id)a1;
- (void)_handleChangeRegistrationsRequest:(id)a0 originalMessage:(id)a1;
- (void)_handleKeepAliveRequest:(id)a0 originalMessage:(id)a1;
- (void)sendMessageWithPayloadMessage:(id)a0 destination:(id)a1 messageType:(long long)a2 completion:(id /* block */)a3;

@end
