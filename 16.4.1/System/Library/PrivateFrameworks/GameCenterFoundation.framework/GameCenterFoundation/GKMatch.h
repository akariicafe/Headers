@class NSData, NSString, NSArray, NSMutableDictionary, GKConnection, GKThreadsafeDictionary, NSMutableSet, NSMutableArray, NSDictionary, NSObject, GKSession;
@protocol GKMatchDelegatePrivate, OS_dispatch_queue, GKMatchDelegate;

@interface GKMatch : NSObject <GKSessionDelegate, GKSessionPrivateDelegate>

@property (retain, nonatomic) GKSession *session;
@property (retain, nonatomic) GKConnection *connection;
@property (retain, nonatomic) NSMutableDictionary *guestConnections;
@property (retain, nonatomic) NSMutableDictionary *guestSessions;
@property (retain, nonatomic) NSMutableDictionary *playerEventQueues;
@property (retain, nonatomic) NSMutableSet *connectedPlayerIDs;
@property (retain, nonatomic) GKThreadsafeDictionary *playersByIdentifier;
@property (retain, nonatomic) NSMutableArray *reinvitedPlayers;
@property (retain, nonatomic) NSData *selfBlob;
@property (nonatomic) unsigned char version;
@property (weak, nonatomic) id<GKMatchDelegatePrivate> inviteDelegate;
@property (nonatomic) unsigned int packetSequenceNumber;
@property (retain, nonatomic) NSMutableDictionary *playerPushTokens;
@property (retain, nonatomic) NSMutableArray *opponentIDs;
@property (retain, nonatomic) NSString *rematchID;
@property (nonatomic) long long rematchCount;
@property (retain, nonatomic) NSDictionary *networkStatistics;
@property (retain, nonatomic) NSMutableDictionary *hostScores;
@property (nonatomic) BOOL needHostScore;
@property (nonatomic) BOOL hostScoreForQuery;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateChangeQueue;
@property (copy, nonatomic) id /* block */ chooseHostCompletion;
@property (nonatomic) BOOL fastStartStateActive;
@property (nonatomic) BOOL initiallyStarted;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (retain, nonatomic) GKThreadsafeDictionary *playersByJoinType;
@property (nonatomic) BOOL recentlyBecameActive;
@property (readonly, nonatomic) NSArray *players;
@property (weak, nonatomic) id<GKMatchDelegate> delegate;
@property (readonly, nonatomic) unsigned long long expectedPlayerCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disconnect;
- (void)applicationDidEnterBackground:(id)a0;
- (void)session:(id)a0 didFailWithError:(id)a1;
- (void)dealloc;
- (void)session:(id)a0 peer:(id)a1 didChangeState:(int)a2;
- (void)relayPushNotification:(id)a0;
- (id)init;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (BOOL)connected:(id)a0;
- (void)clearSession;
- (id)guestPlayers;
- (void)putMultiplayerGroup;
- (BOOL)sendInviteData:(id)a0 error:(id *)a1;
- (id)dataFromBase64String:(id)a0;
- (id)playerFromPeer:(id)a0;
- (void)updateRematchID;
- (id)peerFromPlayer:(id)a0;
- (id)stringForGKPeerConnectionState:(int)a0;
- (void)updateRelayConnectionForPlayer:(id)a0;
- (void)_delegate:(id)a0 didReceiveData:(id)a1 forRecipient:(id)a2 fromPlayer:(id)a3;
- (void)acceptRelayResponse:(id)a0 player:(id)a1;
- (void)addHostScore:(int)a0 forPlayer:(id)a1;
- (void)addPlayerToGroup:(id)a0;
- (void)addPlayers:(id)a0;
- (id)allIDs;
- (void)applicationWillTerminateNotification:(id)a0;
- (void)calculateHostScore;
- (void)chooseBestHostPlayerWithCompletionHandler:(id /* block */)a0;
- (void)chooseBestHostingPlayerWithCompletionHandler:(id /* block */)a0;
- (void)conditionallyReinvitePlayer:(id)a0 sessionToken:(id)a1;
- (void)conditionallyRelaunchPlayer:(id)a0;
- (void)connectToGuestPlayer:(id)a0 withHostPlayer:(id)a1;
- (void)connectToNearbyPlayer:(id)a0 withConnectionData:(id)a1;
- (void)connectToPlayers:(id)a0 withPeerDictionaries:(id)a1 version:(unsigned char)a2 sessionToken:(id)a3 cdxTicket:(id)a4;
- (id)connectedPlayers;
- (void)deferStateCallbackForPlayer:(id)a0 state:(long long)a1;
- (void)disconnectGuestSessions;
- (void)getLocalConnectionDataWithCompletionHandler:(id /* block */)a0;
- (BOOL)haveAllHostScores;
- (void)initRelayConnectionForPlayer:(id)a0;
- (void)initRelayInfoFromCallback:(id)a0 forPlayer:(id)a1;
- (void)initRelayInfoFromPush:(id)a0 forPlayer:(id)a1;
- (void)initRelayInfoFromServerResponse:(id)a0 forPlayer:(id)a1;
- (void)initRelayResponse:(id)a0 player:(id)a1;
- (void)inviteeComboMatched:(long long)a0;
- (void)localPlayerDidChange:(id)a0;
- (id)nearbyConnectionData;
- (id)packet:(unsigned char)a0 data:(id)a1;
- (id)playerForSession:(id)a0;
- (id)playerIDs;
- (void)preLoadInviter:(id)a0 sessionToken:(id)a1;
- (void)preemptRelay:(id)a0;
- (void)queueData:(id)a0 withEventQueueForPlayer:(id)a1 forRecipient:(id)a2;
- (void)receiveData:(id)a0 fromPeer:(id)a1 inSession:(id)a2 context:(void *)a3;
- (void)receivedChooseHostData:(id)a0 fromPlayer:(id)a1;
- (void)receivedPlayerSyncData:(id)a0;
- (void)reinviteeAcceptedNotification:(id)a0;
- (void)reinviteeDeclinedNotification:(id)a0;
- (void)relayPush:(id)a0;
- (void)rematchWithCompletionHandler:(id /* block */)a0;
- (void)requestRelayInitForPlayer:(id)a0;
- (void)requestRelayUpdateForPlayer:(id)a0;
- (BOOL)selectHostIfRequestedAndAllScored;
- (void)sendConnectingStateCallbackToDelegate:(id)a0 forPlayers:(id)a1;
- (void)sendData:(id)a0 forRecipient:(id)a1 fromPlayer:(id)a2;
- (BOOL)sendData:(id)a0 toPlayers:(id)a1 dataMode:(long long)a2 error:(id *)a3;
- (BOOL)sendData:(id)a0 toPlayers:(id)a1 withDataMode:(long long)a2 error:(id *)a3;
- (BOOL)sendDataToAllPlayers:(id)a0 withDataMode:(long long)a1 error:(id *)a2;
- (void)sendHostScoreAsQuery:(BOOL)a0;
- (void)sendQueuedPacketsForPlayer:(id)a0;
- (void)sendQueuedStatesAndPackets;
- (void)sendStateCallbackForPlayer:(id)a0 state:(long long)a1;
- (void)sendStateCallbackToDelegate:(id)a0 forPlayer:(id)a1 state:(long long)a2;
- (void)sendVersionData:(unsigned char)a0;
- (void)sendVersionData:(unsigned char)a0 toPeer:(id)a1;
- (void)session:(id)a0 connectionWithPeerFailed:(id)a1 withError:(id)a2;
- (void)session:(id)a0 initiateRelay:(id)a1 forPeer:(id)a2;
- (void)session:(id)a0 networkStatisticsChanged:(id)a1;
- (void)session:(id)a0 updateRelay:(id)a1 forPeer:(id)a2;
- (void)sharePlayDataReceivedNotification:(id)a0;
- (void)sharePlayReceiveData:(id)a0 fromPlayerID:(id)a1;
- (void)sharePlaySendData:(id)a0 withDataMode:(long long)a1 toPlayers:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)shouldStartRelay:(id)a0;
- (id)stringForGKPlayerConnectionState:(long long)a0;
- (void)syncPlayers:(id)a0 forJoinType:(int)a1 toInvitees:(id)a2;
- (void)updateJoinedPlayer:(id)a0 joinType:(int)a1;
- (void)updateRelayInfo:(id)a0 forPlayer:(id)a1;
- (void)updateRelayInfoFromCallback:(id)a0 forPlayer:(id)a1;
- (void)updateStateForPlayer:(id)a0 state:(long long)a1;
- (id)voiceChatWithName:(id)a0;
- (void)withEventQueueForPlayer:(id)a0 create:(id /* block */)a1 perform:(id /* block */)a2;
- (void)withEventQueueForPlayer:(id)a0 createIfNeeded:(BOOL)a1 perform:(id /* block */)a2;
- (void)withEventQueueForPlayer:(id)a0 perform:(id /* block */)a1;

@end
