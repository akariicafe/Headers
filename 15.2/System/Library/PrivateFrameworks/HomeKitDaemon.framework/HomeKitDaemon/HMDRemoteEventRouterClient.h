@class NSUUID, HMFMessageDispatcher, NSString, HMEMessageDatagramClient, NSObject, NSNotificationCenter;
@protocol HMDRemoteEventRouterClientDataSource, OS_os_log, OS_dispatch_queue, HMMLogEventSubmitting;

@interface HMDRemoteEventRouterClient : NSObject <HMFMessageReceiver, HMEMessageDatagramClientDataSource, HMEMessageDatagramClientDelegate, HMFLogging> {
    NSObject<OS_os_log> *_logger;
}

@property (readonly, copy) NSUUID *identifier;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) id<HMDRemoteEventRouterClientDataSource> dataSource;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly, copy) NSString *requestMessageName;
@property (readonly, copy) NSString *updateMessageName;
@property (readonly) HMEMessageDatagramClient *eventRouterClient;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (retain, nonatomic) NSUUID *primaryResidentIdentifier;
@property (nonatomic) BOOL isPrimaryResident;
@property (nonatomic) BOOL isConnected;
@property (nonatomic) BOOL isNetworkAvailable;
@property (readonly, weak) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)_isEnabled;
- (id)dumpStateDescription;
- (id)logIdentifier;
- (void)sendChangeRegistrationsMessageWithAddedFilters:(id)a0 removedFilters:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)clientDidDisconnect:(id)a0;
- (id)eventRouter;
- (void)networkAvailabilityDidChange:(BOOL)a0;
- (void)configureIsPrimaryResident:(BOOL)a0 networkAvailable:(BOOL)a1 additionalPolicies:(id)a2;
- (id)initWithMessageTargetUUID:(id)a0 queue:(id)a1 dataSource:(id)a2 messageDispatcher:(id)a3 notificationCenter:(id)a4 requestMessageName:(id)a5 updateMessageName:(id)a6 storeReadHandle:(id)a7 storeWriteHandle:(id)a8;
- (void)client:(id)a0 sendKeepAliveWithCompletion:(id /* block */)a1;
- (void)client:(id)a0 sendConnectWithAddedFilters:(id)a1 completion:(id /* block */)a2;
- (void)client:(id)a0 sendChangeRegistrationsWithAddedFilters:(id)a1 removedFilters:(id)a2 completion:(id /* block */)a3;
- (void)client:(id)a0 sendDisconnectWithCompletion:(id /* block */)a1;
- (void)clientDidConnect:(id)a0 serverIdentifier:(id)a1;
- (BOOL)clientIsEnabled:(id)a0;
- (BOOL)client:(id)a0 isConnectionTerminatingError:(id)a1;
- (id)initWithMessageTargetUUID:(id)a0 queue:(id)a1 dataSource:(id)a2 messageDispatcher:(id)a3 notificationCenter:(id)a4 requestMessageName:(id)a5 updateMessageName:(id)a6 logCategory:(const char *)a7 logEventSubmitter:(id)a8 eventRouterClientFactory:(id /* block */)a9;
- (void)_registerForMessages:(id)a0;
- (void)_handleUpdatedPrimaryResidentNotification:(id)a0;
- (void)_handleUpdateMessage:(id)a0;
- (void)_handleUpdatedEventsRequest:(id)a0 originalMessage:(id)a1;
- (BOOL)_serverSupportsFragmentMessage:(id)a0;
- (id)_underlyingMessageDataFromFragmentMessageData:(id)a0 error:(id *)a1;
- (void)sendMessageWithPayloadMessage:(id)a0 messageType:(long long)a1 completion:(id /* block */)a2;

@end
