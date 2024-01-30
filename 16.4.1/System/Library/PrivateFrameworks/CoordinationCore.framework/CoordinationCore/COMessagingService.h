@class _COMessagingServiceMeter, NSMutableDictionary, NSString;

@interface COMessagingService : COService <COMessagingAddOnDelegate, COMessageChannelServiceInterface>

@property (retain, nonatomic) NSMutableDictionary *connectedClients;
@property (readonly, nonatomic) _COMessagingServiceMeter *meter;
@property (retain, nonatomic) NSMutableDictionary *requestHandlers;
@property (retain, nonatomic) NSMutableDictionary *outstandingActivateCompletionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceWithDelegate:(id)a0;

- (void)_clientLost:(id)a0;
- (BOOL)_applicableToCluster:(id)a0;
- (void)_addOnRemoved:(id)a0;
- (void)sendRequestWithPayload:(id)a0 payloadType:(id)a1 requestType:(long long)a2 requestID:(unsigned int)a3 members:(id)a4 activityToken:(id)a5;
- (void)sessionEndedForSubTopic:(id)a0;
- (id)initWithListenerProvider:(id)a0 addOnProvider:(id)a1 delegate:(id)a2;
- (void)activateMessageChannelForTopic:(id)a0 cluster:(id)a1 handlers:(id)a2 withCompletion:(id /* block */)a3;
- (void)sessionStartedForSubTopic:(id)a0 withMember:(id)a1 produced:(BOOL)a2;
- (BOOL)_canRequestCreationOfCluster:(id)a0;
- (void)_addOnAdded:(id)a0;
- (void)addOn:(id)a0 receivedRequest:(id)a1 callback:(id /* block */)a2;
- (void)_completeActivationForClient:(id)a0;
- (void).cxx_destruct;
- (void)_configureServiceInterfacesOnConnection:(id)a0;

@end
