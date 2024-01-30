@class NSMutableDictionary, NSObject;
@protocol CATAssertionProviding, CATTimerSource, CATIDSServiceConnectionInvitationInboxDelegate, OS_dispatch_queue;

@interface CATIDSServiceConnectionInvitationInbox : NSObject {
    id<CATTimerSource> mTimerSource;
    id<CATAssertionProviding> mAssertionProvider;
    NSObject<OS_dispatch_queue> *mWorkQueue;
    double mAcknowledgeTimeout;
    NSMutableDictionary *mInvitationsByInvitationID;
    NSMutableDictionary *mAcknowledgeTimersByInvitationID;
}

@property (weak, nonatomic) id<CATIDSServiceConnectionInvitationInboxDelegate> delegate;

+ (id)acknowledgeTimerIdentifier;

- (void)dealloc;
- (void).cxx_destruct;
- (void)receiveAcknowledgeForInvitationIdentifier:(id)a0 connectionIdentifier:(id)a1;
- (void)acknowledgeTimerFiredWithInvitationIdentifier:(id)a0;
- (id)initWithTimerSource:(id)a0 assertionProvider:(id)a1 workQueue:(id)a2 acknowledgeTimeout:(double)a3;
- (void)receiveInvitationWithIdentifier:(id)a0 senderAppleID:(id)a1 senderAddress:(id)a2 messagingVersion:(unsigned long long)a3 userInfo:(id)a4;

@end
