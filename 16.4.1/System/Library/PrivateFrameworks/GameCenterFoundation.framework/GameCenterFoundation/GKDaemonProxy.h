@class NSString, NSDictionary, NSXPCConnection, NSObject, NSHashTable;
@protocol GKDaemonProxyDataUpdateDelegate, OS_dispatch_semaphore, OS_dispatch_queue, GKDaemonProxyNetworkActivityIndicatorDelegate;

@interface GKDaemonProxy : GKServiceProxy <NSXPCConnectionDelegate, GKClientProtocol>

@property (class, readonly, nonatomic) GKDaemonProxy *daemonProxy;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *invocationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *authenticationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *concurrentRequestSemaphore;
@property (retain, nonatomic) NSDictionary *interfaceLookup;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int hostPID;
@property (retain, nonatomic) NSHashTable *dataUpdateDelegates;
@property (weak, nonatomic) id<GKDaemonProxyDataUpdateDelegate> dataUpdateDelegate;
@property (weak, nonatomic) id<GKDaemonProxyNetworkActivityIndicatorDelegate> networkActivityIndicatorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)daemonProxy;
+ (id)proxyForPlayer:(id)a0;
+ (id)proxyForLocalPlayer;
+ (id)proxiesForPlayer;
+ (oneway void)messagesDidReceiveGameCenterURL:(id)a0;
+ (void)removeProxyForPlayer:(id)a0;
+ (oneway void)getActiveFriendRequestCount:(id /* block */)a0;
+ (oneway void)messagesDidReceiveGameCenterURL:(id)a0 senderHandle:(id)a1 contactID:(id)a2;

- (oneway void)setTestGame:(id)a0;
- (BOOL)hasAuthenticatedAccount;
- (oneway void)endNetworkActivity;
- (void)removeDataUpdateDelegate:(id)a0;
- (oneway void)didDisconnectFromParticipantWithID:(id)a0;
- (oneway void)fetchTurnBasedData;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (oneway void)didConnectToParticipantWithID:(id)a0;
- (void)loadRemoteImageDataForClientForURL:(id)a0 reply:(id /* block */)a1;
- (oneway void)getAccountNameWithHandler:(id /* block */)a0;
- (oneway void)setCurrentGame:(id)a0 serverEnvironment:(long long)a1 reply:(id /* block */)a2;
- (oneway void)session:(id)a0 removedPlayer:(id)a1;
- (oneway void)friendRequestSelected:(id)a0;
- (id)authenticatedPlayerInfo;
- (oneway void)session:(id)a0 addedPlayer:(id)a1;
- (id)accountName;
- (oneway void)respondedToNearbyInvite:(id)a0;
- (void)dispatchCompletedChallenge:(id)a0;
- (id)authenticatedPlayerID;
- (oneway void)completedOptimisticAuthenticationWithResponse:(id)a0 error:(id)a1;
- (oneway void)setBadgeCount:(unsigned long long)a0 forType:(unsigned long long)a1;
- (id)authenticatedCredential;
- (oneway void)nearbyDataReceivedForPlayerID:(id)a0 deviceID:(id)a1 data:(id)a2;
- (void)resetServiceLookup;
- (oneway void)session:(id)a0 didReceiveData:(id)a1 fromPlayer:(id)a2;
- (oneway void)declineInviteWithNotification:(id)a0;
- (id)getGamedFiredUp;
- (oneway void)authenticatedPlayersDidChange:(id)a0 reply:(id /* block */)a1;
- (oneway void)challengeReceived:(id)a0;
- (void)addDataUpdateDelegate:(id)a0;
- (oneway void)requestSandboxExtension:(id /* block */)a0;
- (oneway void)acceptInviteWithNotification:(id)a0;
- (void)resetLoginCancelCount;
- (oneway void)beginNetworkActivity;
- (oneway void)cancelGameInvite:(id)a0;
- (oneway void)challengeCompleted:(id)a0;
- (oneway void)nearbyPlayerLostForPlayerID:(id)a0 deviceID:(id)a1;
- (void)addInterface:(id)a0 toLookup:(id)a1;
- (id)userInfoForPlayerID:(id)a0 deviceID:(id)a1 data:(id)a2 discoveryInfo:(id)a3;
- (oneway void)didReceiveData:(id)a0 reliably:(BOOL)a1 forRecipients:(id)a2 fromSender:(id)a3;
- (oneway void)acceptMultiplayerGameInvite;
- (oneway void)relayPushNotification:(id)a0;
- (oneway void)getAuthenticatedPlayerIDWithHandler:(id /* block */)a0;
- (id)init;
- (oneway void)session:(id)a0 player:(id)a1 didSaveData:(id)a2;
- (oneway void)session:(id)a0 didReceiveMessage:(id)a1 withData:(id)a2 fromPlayer:(id)a3;
- (void)_resetServiceLookup;
- (oneway void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (oneway void)cancelInviteWithNotification:(id)a0;
- (oneway void)nearbyPlayerFoundForPlayerID:(id)a0 deviceID:(id)a1 discoveryInfo:(id)a2;
- (oneway void)setLogBits:(int)a0;
- (oneway void)achievementSelected:(id)a0;
- (oneway void)receivedChallengeSelected:(id)a0;
- (id)authenticatedLocalPlayersWithStatus:(unsigned long long)a0;
- (oneway void)completedChallengeSelected:(id)a0;
- (oneway void)resetNetworkActivity;
- (void)buildInterfaceLookup;
- (void).cxx_destruct;
- (oneway void)session:(id)a0 player:(id)a1 didChangeConnectionState:(long long)a2;
- (oneway void)scoreSelected:(id)a0;
- (id)localizedMessageFromDictionary:(id)a0 forBundleID:(id)a1;
- (id)replyQueueForRequestSelector:(SEL)a0;
- (oneway void)setPreferencesValues:(id)a0;

@end
