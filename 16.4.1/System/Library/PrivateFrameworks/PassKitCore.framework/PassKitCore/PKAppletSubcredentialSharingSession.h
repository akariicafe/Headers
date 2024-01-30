@class DAKeySharingSession;

@interface PKAppletSubcredentialSharingSession : PKDASession

@property (retain, nonatomic) DAKeySharingSession *session;

+ (id)createPendingSessionWithDelegate:(id)a0;
+ (id)createSessionWithDelegate:(id)a0;

- (void)createInviteForShare:(id)a0 forCredential:(id)a1 authorization:(id)a2 completion:(id /* block */)a3;
- (BOOL)startSession;
- (void)accountAttestionRequestForCredential:(id)a0 withCompletion:(id /* block */)a1;
- (void)sendSharingInvitationWithRequest:(id)a0 auth:(id)a1 completion:(id /* block */)a2;
- (void)requestSharingInvitation:(id)a0 from:(id)a1 completion:(id /* block */)a2;
- (void)setTransportChannelIdentifier:(id)a0 forCredential:(id)a1 forCredentialShare:(id)a2 completion:(id /* block */)a3;
- (void)setAccountAttestation:(id)a0 forCredential:(id)a1 withCompletion:(id /* block */)a2;
- (void)sendSharingInvitation:(id)a0 forInvitationRequest:(id)a1 completion:(id /* block */)a2;
- (void)retryActivationCodeForCredentialIdentifier:(id)a0 activationCode:(id)a1 completion:(id /* block */)a2;
- (void)acceptShareForSharingInvitation:(id)a0 transportChannelIdentifier:(id)a1 activationCode:(id)a2 completion:(id /* block */)a3;
- (void)acceptSharingInvitation:(id)a0 completion:(id /* block */)a1;
- (BOOL)cancelSharingInvitationWithIdentifier:(id)a0;
- (void)getPretrackRequestForKeyWithIdentifier:(id)a0 withCompletion:(id /* block */)a1;

@end
