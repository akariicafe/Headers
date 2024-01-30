@interface IMFaceTimeUtilities : NSObject

+ (BOOL)activeTUConversationHasActivitySession:(id)a0;
+ (BOOL)isScreenShareActivityForTUConversation:(id)a0;
+ (void)leaveTUConversation;
+ (void)joinExistingConversationForTUCoversation:(id)a0 videoEnabled:(BOOL)a1;
+ (BOOL)conversationIsVideoCall:(id)a0;
+ (void)initiateTUConversationForParticipants:(id)a0 senderAddress:(id)a1 videoEnabled:(BOOL)a2 groupID:(id)a3 displayName:(id)a4;
+ (id)activitySessionForTUConversation:(id)a0;
+ (id)activityMetadataForTUConversation:(id)a0;
+ (id)remoteParticipantHandleSharingScreenForTUConversation:(id)a0;
+ (void)initiateTUDialRequestForSingleParticipant:(id)a0 videoEnabled:(BOOL)a1;
+ (id)currentCallForTUConversation:(id)a0;

@end
