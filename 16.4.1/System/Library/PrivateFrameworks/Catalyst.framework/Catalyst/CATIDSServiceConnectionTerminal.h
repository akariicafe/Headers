@class CATIDSServiceConnectionInvitationInbox, NSString, CATIDSServiceConnectionConfiguration, CATIDSServiceConnectionInvitationOutbox, NSHashTable, NSObject;
@protocol CATTimerSource, CATIDSPrimitives, CATIDSSubscription, CATIDSServiceConnectionTerminalDelegate, OS_dispatch_queue;

@interface CATIDSServiceConnectionTerminal : NSObject <CATIDSServiceConnectionInvitationInboxDelegate, CATIDSServiceConnectionInvitationOutboxDelegate, CATIDSMessageBroadcaster> {
    id<CATIDSPrimitives> mIDSPrimitives;
    id<CATTimerSource> mTimerSource;
    NSObject<OS_dispatch_queue> *mWorkQueue;
    NSObject<OS_dispatch_queue> *mDelegateQueue;
    NSString *mSourceAppleID;
    CATIDSServiceConnectionConfiguration *mConnectionConfiguration;
    CATIDSServiceConnectionInvitationInbox *mInvitationInbox;
    CATIDSServiceConnectionInvitationOutbox *mInvitationOutbox;
    NSHashTable *mBroadcastHandlers;
    id<CATIDSSubscription> mMessageSubscription;
    BOOL mIsActive;
}

@property (weak, nonatomic) id<CATIDSServiceConnectionTerminalDelegate> delegate;

- (void)suspend;
- (id)description;
- (void).cxx_destruct;
- (void)resume;
- (void)cancelInvitationWithIdentifier:(id)a0;
- (void)addBroadcastHandler:(id)a0;
- (void)cancelAllInvitations;
- (void)connectionInvitatioInbox:(id)a0 timeoutOutForInvitation:(id)a1 connectionIdentifier:(id)a2 senderAppleID:(id)a3 userInfo:(id)a4;
- (void)connectionInvitationInbox:(id)a0 foundConection:(id)a1 senderAppleID:(id)a2 senderAddress:(id)a3 assertion:(id)a4 messagingVersion:(unsigned long long)a5 userInfo:(id)a6;
- (void)connectionInvitationInbox:(id)a0 rejectedInvitation:(id)a1 connectionIdentifier:(id)a2 appleID:(id)a3 address:(id)a4 error:(id)a5;
- (void)connectionInvitationInbox:(id)a0 shouldConnectToAppleID:(id)a1 connectionIdentifier:(id)a2 userInfo:(id)a3 responseHandler:(id /* block */)a4;
- (void)connectionInvitationInbox:(id)a0 wantsToAcceptInvitation:(id)a1 connectionIdentifier:(id)a2 destinationAddress:(id)a3;
- (void)connectionInvitationOutbox:(id)a0 foundConnection:(id)a1 destinationAppleID:(id)a2 destinationAddress:(id)a3 assertion:(id)a4 messagingVersion:(unsigned long long)a5 userInfo:(id)a6;
- (void)connectionInvitationOutbox:(id)a0 receivedARejectionFrom:(id)a1 connectionIdentifier:(id)a2 userInfo:(id)a3 error:(id)a4;
- (void)connectionInvitationOutbox:(id)a0 wantsToAcknowledgeInvitation:(id)a1 connectionIdentifier:(id)a2 destinationAddress:(id)a3;
- (void)connectionInvitationOutbox:(id)a0 wantsToSendInvitation:(id)a1 destinationAppleID:(id)a2 userInfo:(id)a3;
- (id)initWithIDSPrimitives:(id)a0 assertionProvider:(id)a1 sourceAppleID:(id)a2;
- (id)initWithIDSPrimitives:(id)a0 assertionProvider:(id)a1 sourceAppleID:(id)a2 connectionConfiguration:(id)a3;
- (id)initWithIDSPrimitives:(id)a0 assertionProvider:(id)a1 timerSource:(id)a2 workQueue:(id)a3 delegateQueue:(id)a4 sourceAppleID:(id)a5 connectionConfiguration:(id)a6;
- (id)initWithIDSPrimitives:(id)a0 networkPowerPrimitives:(id)a1 sourceAppleID:(id)a2;
- (id)inviteAppleIDToConnect:(id)a0 userInfo:(id)a1;
- (void)processMessage:(id)a0 senderAppleID:(id)a1 senderAddress:(id)a2;
- (void)sendContent:(id)a0 toAddress:(id)a1 forInvitation:(id)a2;

@end
