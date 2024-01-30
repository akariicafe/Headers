@class NSString, AAFXPCSession;

@interface AAInheritanceController : NSObject <AAFXPCSessionDelegate, AAInheritanceDaemonProtocol>

@property (retain, nonatomic) AAFXPCSession *remoteService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)configureRemoteInterface:(id)a0;
- (void)fetchBenefactorsWithCompletion:(id /* block */)a0;
- (void)fetchInvitationsWithCompletion:(id /* block */)a0;
- (void)setupBeneficiaryManifest:(id)a0 contactInfo:(id)a1 setupAuthToken:(id)a2 completion:(id /* block */)a3;
- (void)fetchAllHealthInfoWithCompletion:(id /* block */)a0;
- (void)fetchBeneficiariesWithCompletion:(id /* block */)a0;
- (void)fetchInvitationWithBeneficiaryID:(id)a0 completion:(id /* block */)a1;
- (void)fetchManifestOptionsForContact:(id)a0 completion:(id /* block */)a1;
- (void)fetchSuggestedBeneficiariesWithCompletion:(id /* block */)a0;
- (void)isRecipient:(id)a0 capableOf:(id)a1 completion:(id /* block */)a2;
- (void)presentInheritanceInvitationUIWithBeneficiaryID:(id)a0 completion:(id /* block */)a1;
- (void)removeAccessCodeWithRecordIdentifier:(id)a0 contactInfo:(id)a1 completion:(id /* block */)a2;
- (void)removeBenefactor:(id)a0 completion:(id /* block */)a1;
- (void)removeBeneficiary:(id)a0 manifest:(id)a1 completion:(id /* block */)a2;
- (void)removeInvitation:(id)a0 completion:(id /* block */)a1;
- (void)respondToInvitation:(id)a0 accepted:(BOOL)a1 completion:(id /* block */)a2;
- (void)sendInvitationToContact:(id)a0 completion:(id /* block */)a1;
- (void)setupBeneficiaryAliasWithAccessKey:(id)a0 password:(id)a1 firstName:(id)a2 lastName:(id)a3 authToken:(id)a4 completion:(id /* block */)a5;
- (void)updateAccessCodeWithRecordIdentifier:(id)a0 contactInfo:(id)a1 completion:(id /* block */)a2;
- (void)updateBeneficiaryManifest:(id)a0 contactInfo:(id)a1 completion:(id /* block */)a2;

@end
