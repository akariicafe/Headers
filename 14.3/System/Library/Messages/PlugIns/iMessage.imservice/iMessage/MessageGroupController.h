@class NSMutableDictionary;

@interface MessageGroupController : NSObject

@property (readonly, nonatomic) NSMutableDictionary *groupPhotoRequestsFromStorage;
@property (readonly, nonatomic) NSMutableDictionary *mostRecentGroupPhotoRequestDates;

+ (id)sharedInstance;
+ (id)chatForGroupMessagePayload:(id)a0 fromIdentifier:(id)a1 toIdentifier:(id)a2;
+ (id)memberDisplayIDsFromParticipants:(id)a0 toIdentifier:(id)a1;
+ (void)addMembers:(id)a0 toHandleInfo:(id)a1;
+ (id)newGroupMessagePayloadForChat:(id)a0 fromID:(id)a1;

- (id)init;
- (void)dealloc;
- (double)_messageRetryTimeout;
- (BOOL)_shouldAdjustTimestampOfResentMessages;
- (id)findChatWithMessageData:(id)a0 account:(id)a1 session:(id)a2 toIdentifier:(id)a3 fromIdentifier:(id)a4 timestamp:(id)a5;
- (void)receiveMessageData:(id)a0 account:(id)a1 session:(id)a2 toIdentifier:(id)a3 fromIdentifier:(id)a4 incomingEngroup:(id)a5 service:(id)a6 timestamp:(id)a7 fromStorage:(BOOL)a8 completionBlock:(id /* block */)a9;
- (void)handler:(id)a0 account:(id)a1 groupMessagePayload:(id)a2 toIdentifier:(id)a3 fromIdentifier:(id)a4 idsService:(id)a5 fromToken:(id)a6 timeStamp:(id)a7 storageContext:(id)a8;
- (BOOL)shouldCompressGroupPayload:(id)a0;
- (void)engroupForChat:(id)a0 service:(id)a1 completionBlock:(id /* block */)a2;
- (void)addParticipants:(id)a0 toChat:(id)a1 fromID:(id)a2 fromAccount:(id)a3 session:(id)a4 service:(id)a5 groupPhoto:(id)a6 completionBlock:(id /* block */)a7;
- (void)setGroupPhoto:(id)a0 forChat:(id)a1 fromID:(id)a2 fromAccount:(id)a3 session:(id)a4;
- (void)removeParticipants:(id)a0 toChat:(id)a1 fromID:(id)a2 fromAccount:(id)a3 session:(id)a4 service:(id)a5 completionBlock:(id /* block */)a6;
- (void)leaveChat:(id)a0 fromID:(id)a1 fromAccount:(id)a2 session:(id)a3 service:(id)a4 completionBlock:(id /* block */)a5;
- (void)requestGroupPhotoIfNecessary:(id)a0 incomingGroupPhotoCreationDate:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 messageIsFromStorage:(BOOL)a4 session:(id)a5;
- (void)setName:(id)a0 fromName:(id)a1 forChat:(id)a2 fromID:(id)a3 fromAccount:(id)a4 session:(id)a5 completionBlock:(id /* block */)a6;
- (id)IDSServerBagiMessageSharedInstance;
- (id)lockDownManager;
- (id)engramControllerSharedInstance;
- (void)requestGroupPhotosForMessagesFromStorage;
- (BOOL)_serverAllowsMessageSend;
- (long long)currentMessageSendServerVersion;
- (BOOL)_hasValidSendParametersForMessage:(id)a0 toChat:(id)a1 fromID:(id)a2 fromAccount:(id)a3;
- (id)_newSendContextForMessage:(id)a0 withChat:(id)a1;
- (void)_addOriginalTimestampIfNecessary:(id)a0 context:(id)a1;
- (void)_addGroupPhotoRefreshDate:(id)a0 context:(id)a1;
- (BOOL)_shouldSendEngramOnChat:(id)a0;
- (BOOL)_canSendMessagesWithEngram;
- (BOOL)_shouldDropMessageGroupID:(id)a0 participants:(id)a1 fromIdentifier:(id)a2 toIdentifier:(id)a3;
- (void)receiveGroupUpdate:(id)a0 chat:(id)a1 service:(id)a2;
- (double)_groupPhotoRequestRateLimit;
- (void)_populateP2PDictionary:(id)a0 chat:(id)a1 fromID:(id)a2;
- (BOOL)_shouldRequestGroupPhoto:(id)a0 incomingGroupPhotoCreationDate:(id)a1;
- (void)_requestGroupPhotoUpdate:(id)a0 fromIdentifier:(id)a1 toIdentifier:(id)a2 session:(id)a3;
- (BOOL)_checkForParticipantLeaveOnENGroup:(id)a0 groupMessagePayload:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 service:(id)a4;
- (void)_checkAndPerformLegacyAddRemove:(id)a0 participantsToAdd:(id)a1 participantsToRemove:(id)a2 service:(id)a3 fromIdentifier:(id)a4;
- (void)handleAddToNewGroup:(id)a0 groupID:(id)a1 groupPhotoTransferDict:(id)a2 identifier:(id)a3 session:(id)a4 toIdentifier:(id)a5 toName:(id)a6 toParticipants:(id)a7;
- (id)_findChatFromIdentifier:(id)a0 toIdentifier:(id)a1 displayName:(id)a2 participants:(id)a3 groupID:(id)a4;
- (void)_handleGroupVisualIdentityRequest:(id)a0 fromParticipants:(id)a1 groupID:(id)a2 identifier:(id)a3 session:(id)a4 toIdentifier:(id)a5 fromToken:(id)a6;
- (void)_sendGroupPhoto:(id)a0 toIdentifier:(id)a1 fromIdentifier:(id)a2 toToken:(id)a3 session:(id)a4;
- (BOOL)shouldDropDueToGroupSize:(id)a0;
- (BOOL)_participantsContainBizID:(id)a0;
- (void)sendMessage:(id)a0 toChat:(id)a1 fromID:(id)a2 fromAccount:(id)a3 session:(id)a4 service:(id)a5 completionBlock:(id /* block */)a6;
- (void)receiveMessageData:(id)a0 session:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 timestamp:(id)a4 fromStorage:(BOOL)a5 completionBlock:(id /* block */)a6;

@end
