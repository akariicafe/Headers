@class DAKeySharingSession;

@interface PKAppletSubcredentialSharingSession : PKDASession

@property (retain, nonatomic) DAKeySharingSession *session;

+ (id)createSessionWithDelegate:(id)a0;

- (void)requestSharingInvitation:(id)a0 from:(id)a1 completion:(id /* block */)a2;
- (void)acceptSharingInvitation:(id)a0 completion:(id /* block */)a1;
- (void)sendSharingInvitation:(id)a0 forInvitationRequest:(id)a1 withSharedCredential:(id)a2 completion:(id /* block */)a3;
- (void)sendSharingInvitationWithRequest:(id)a0 auth:(id)a1 completion:(id /* block */)a2;
- (void)setAccountAttestation:(id)a0 forCredential:(id)a1 withCompletion:(id /* block */)a2;
- (void)accountAttestionRequestForCredential:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)cancelSharingInvitationWithIdentifier:(id)a0;

@end
