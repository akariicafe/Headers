@class HMDHomeManager, NSString, NSObject, IDSInvitationManager;
@protocol OS_dispatch_queue;

@interface HMDIDSInvitationManager : NSObject <IDSInvitationManagerDelegate>

@property (retain, nonatomic) IDSInvitationManager *idsInvitationManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) HMDHomeManager *homeManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)manager:(id)a0 senderDidCancelInvitation:(id)a1;
- (void)manager:(id)a0 receiverDidDeclineInvitation:(id)a1;
- (void)manager:(id)a0 incomingInvitation:(id)a1;
- (void).cxx_destruct;
- (void)manager:(id)a0 receiverDidAcceptInvitation:(id)a1;
- (void)cancelInvitationWithIDSIdentifier:(id)a0 homeInvitationID:(id)a1 completionBlock:(id /* block */)a2;
- (void)sendInvitationToDestination:(id)a0 expirationDate:(id)a1 dictionary:(id)a2 homeInvitationID:(id)a3 completionBlock:(id /* block */)a4;
- (id)initWithHomeManager:(id)a0 queue:(id)a1;
- (id)_sentInvitationWithUniqueID:(id)a0;
- (id)_receivedInvitationWithUniqueID:(id)a0;
- (void)declineInvitationWithIDSIdentifier:(id)a0 homeInvitationID:(id)a1 completionBlock:(id /* block */)a2;
- (void)acceptInvitationWithIDSIdentifier:(id)a0 homeInvitationID:(id)a1 dictionary:(id)a2 completionBlock:(id /* block */)a3;

@end
