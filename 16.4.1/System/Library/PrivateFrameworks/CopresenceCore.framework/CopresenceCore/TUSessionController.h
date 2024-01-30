@class NSString, CPIDSHelper, IDSMessenger, NSMutableDictionary, NSObject, TUConversationManager;
@protocol CPCoreSessionControllerDelegate, OS_dispatch_queue;

@interface TUSessionController : NSObject <TUConversationManagerDelegate, CPIDSMessageHandler, CPCoreSessionControlling> {
    NSObject<OS_dispatch_queue> *_queue;
    CPIDSHelper *_idsHelper;
    IDSMessenger *_messenger;
    NSMutableDictionary *_groupParticipants;
}

@property (retain, nonatomic) TUConversationManager *conversationManager;
@property (nonatomic) NSString *localAccountName;
@property (readonly, nonatomic) NSString *idsGroupSessionUUID;
@property (weak, nonatomic) id<CPCoreSessionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_tearDown;
- (void)didReceiveMessage:(id)a0;
- (void)conversationManager:(id)a0 stateChangedForConversation:(id)a1;
- (id)activeSession;
- (void)serverDisconnectedForConversationManager:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)conversationManager:(id)a0 addedActiveConversation:(id)a1;
- (void)conversationsChangedForConversationManager:(id)a0;
- (BOOL)hasActiveSession;
- (void)setAudioEnabled:(BOOL)a0 forParticipant:(id)a1;
- (void)_incomingAppLaunchBroadcast:(id)a0;
- (void)_incomingAppSharingRequest:(id)a0;
- (void)_processConversation:(id)a0;
- (void)acceptInvite:(id)a0;
- (void)broadcastAppLaunch:(id)a0;
- (id)broadcastParamFor:(id)a0;
- (void)declineInvite:(id)a0;
- (id)getConnectedParticipantsWithReply;
- (void)inviteParticipants:(id)a0;
- (void)isAudioEnabledForParticipant:(id)a0 completion:(id /* block */)a1;
- (id)listReceivedInvitations;
- (id)listReceivedSessionInvitations;
- (id)listSentInvitationsForCurrentSession;
- (void)sendAppSharingRequest:(id)a0;
- (void)startIDSSession:(id)a0 userContext:(id)a1 completion:(id /* block */)a2;
- (void)stopIDSSession;
- (void)stopListeningForInvites;
- (id)unicastParamFor:(id)a0 clientID:(unsigned long long)a1 idsMode:(long long)a2;

@end
