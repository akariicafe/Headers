@class NSString, IDSInvitationManager, NSObject;
@protocol OS_dispatch_queue, HDIDSInvitationManagerDelegate;

@interface HDIDSInvitationManager : NSObject <IDSInvitationManagerDelegate> {
    Class _messageClass;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_IDSDelegateQueue;
    NSString *_schema;
}

@property (retain, nonatomic) IDSInvitationManager *invitationManager;
@property (weak, nonatomic) id<HDIDSInvitationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServiceIdentifier:(id)a0 messageClass:(Class)a1 schema:(id)a2;
- (void)manager:(id)a0 senderDidCancelInvitation:(id)a1;
- (void)declineInvitationWithUUID:(id)a0 serverAcknowledgedBlock:(id /* block */)a1;
- (void)acceptInvitationWithUUID:(id)a0 codableObject:(id)a1 serverAcknowledgedBlock:(id /* block */)a2;
- (void)rescindInvitationWithUUID:(id)a0 serverAcknowledgedBlock:(id /* block */)a1;
- (void)manager:(id)a0 receiverDidDeclineInvitation:(id)a1;
- (void)manager:(id)a0 incomingInvitation:(id)a1;
- (void).cxx_destruct;
- (void)sendInvitationToIdentifier:(id)a0 expirationDate:(id)a1 codableObject:(id)a2 serverAcknowledgedBlock:(id /* block */)a3;
- (void)manager:(id)a0 receiverDidAcceptInvitation:(id)a1;

@end
