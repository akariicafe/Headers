@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol CATAssertionProviding, OS_dispatch_queue, CATIDSServiceConnectionInvitationOutboxDelegate;

@interface CATIDSServiceConnectionInvitationOutbox : NSObject {
    id<CATAssertionProviding> mAssertionProvider;
    NSObject<OS_dispatch_queue> *mWorkQueue;
    NSMutableDictionary *mInFlightInvitationRequestsByInvitationID;
    NSMutableArray *mInvitationRequestQueue;
    BOOL mIsActive;
}

@property (weak, nonatomic) id<CATIDSServiceConnectionInvitationOutboxDelegate> delegate;

- (void)suspend;
- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (void)cancelInvitationWithIdentifier:(id)a0;
- (void)beginInvitationWithIdentifier:(id)a0 appleID:(id)a1 userInfo:(id)a2;
- (void)cancelAllInvitations;
- (void)cancelAllPowerAssertions;
- (id)initWithAssertionProvider:(id)a0 workQueue:(id)a1;
- (void)receiveAcceptForInvitation:(id)a0 connectionIdentifier:(id)a1 senderAddress:(id)a2 messagingVersion:(unsigned long long)a3;
- (void)receiveRejectForInvitation:(id)a0 connectionIdentifier:(id)a1 senderAddress:(id)a2 error:(id)a3;
- (void)serviceInvitationQueue;

@end
