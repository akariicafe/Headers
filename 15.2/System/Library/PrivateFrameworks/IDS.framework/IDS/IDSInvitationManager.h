@class NSSet, NSString, NSMutableDictionary, NSObject, IDSService;
@protocol OS_dispatch_queue, IDSInvitationManagerDelegate;

@interface IDSInvitationManager : NSObject <IDSServiceDelegateInvitation, IDSDaemonListenerProtocol> {
    NSMutableDictionary *_serverAcknowledgedBlockMap;
    NSMutableDictionary *_serverAcknowledgedBlockWithInvitationMap;
    NSMutableDictionary *_pendingInvitations;
    NSMutableDictionary *_receivedInvitations;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BOOL _invitationsLoadedFromDisk;
}

@property (readonly, nonatomic) IDSService *internal;
@property (weak, nonatomic) id<IDSInvitationManagerDelegate> delegate;
@property (readonly, copy, nonatomic) NSSet *pendingInvitations;
@property (readonly, copy, nonatomic) NSSet *receivedInvitations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)validateStrictDecodingForSentInvitation:(id)a0;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)service:(id)a0 account:(id)a1 incomingInvitation:(id)a2 withContext:(id)a3;
- (id)initWithServiceIdentifier:(id)a0;
- (void)declineInvitation:(id)a0 serverAcknowledgedBlock:(id /* block */)a1;
- (void)cancelInvitation:(id)a0 serverAcknowledgedBlock:(id /* block */)a1;
- (void)service:(id)a0 account:(id)a1 incomingInvitationUpdate:(id)a2 withContext:(id)a3;
- (void).cxx_destruct;
- (void)acceptInvitation:(id)a0 withContext:(id)a1 serverAcknowledgedBlock:(id /* block */)a2;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (void)removePendingInvitation:(id)a0;
- (void)setupInvitationsForService:(id)a0;
- (void)removeReceivedInvitation:(id)a0;
- (BOOL)validateReceivedInvitation:(id)a0;
- (void)sendInvitationToDestination:(id)a0 expirationDate:(id)a1 context:(id)a2 serverAcknowledgedBlock:(id /* block */)a3;

@end
