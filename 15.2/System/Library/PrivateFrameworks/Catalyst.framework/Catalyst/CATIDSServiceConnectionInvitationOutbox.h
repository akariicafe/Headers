@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, CATNetworkPowerPrimitives, CATIDSServiceConnectionInvitationOutboxDelegate;

@interface CATIDSServiceConnectionInvitationOutbox : NSObject {
    id<CATNetworkPowerPrimitives> mNetworkPowerPrimitives;
    NSObject<OS_dispatch_queue> *mWorkQueue;
    NSMutableDictionary *mInFlightInvitationRequestsByInvitationID;
    NSMutableArray *mInvitationRequestQueue;
    BOOL mIsActive;
}

@property (weak, nonatomic) id<CATIDSServiceConnectionInvitationOutboxDelegate> delegate;

- (void).cxx_destruct;
- (void)suspend;
- (void)resume;
- (void)dealloc;
- (id)initWithNetworkPowerPrimitives:(id)a0 workQueue:(id)a1;
- (void)beginInvitationWithIdentifier:(id)a0 appleID:(id)a1 userInfo:(id)a2;
- (void)cancelInvitationWithIdentifier:(id)a0;
- (void)cancelAllInvitations;
- (void)receiveAcceptForInvitation:(id)a0 connectionIdentifier:(id)a1 senderAddress:(id)a2 messagingVersion:(unsigned long long)a3;
- (void)receiveRejectForInvitation:(id)a0 connectionIdentifier:(id)a1 senderAddress:(id)a2 error:(id)a3;
- (void)cancelAllPowerAssertions;
- (void)serviceInvitationQueue;

@end
