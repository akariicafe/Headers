@class EDAMUserStoreClient, NSString;

@interface ENUserStoreClient : ENStoreClient

@property (retain, nonatomic) EDAMUserStoreClient *client;
@property (retain, nonatomic) NSString *authenticationToken;

+ (id)userStoreClientWithUrl:(id)a0 authenticationToken:(id)a1;

- (void).cxx_destruct;
- (id)initWithUserStoreUrl:(id)a0 authenticationToken:(id)a1;
- (id)authenticateToBusiness;
- (void)checkVersionWithClientName:(id)a0 edamVersionMajor:(short)a1 edamVersionMinor:(short)a2 completion:(id /* block */)a3;
- (void)fetchBootstrapInfoWithLocale:(id)a0 completion:(id /* block */)a1;
- (void)fetchUserWithCompletion:(id /* block */)a0;
- (void)fetchPublicUserInfoWithUsername:(id)a0 completion:(id /* block */)a1;
- (void)fetchPremiumInfoWithCompletion:(id /* block */)a0;
- (void)fetchNoteStoreURLWithCompletion:(id /* block */)a0;
- (void)authenticateToBusinessWithCompletion:(id /* block */)a0;
- (void)revokeLongSessionWithAuthenticationToken:(id)a0 completion:(id /* block */)a1;
- (void)checkVersionWithClientName:(id)a0 edamVersionMajor:(short)a1 edamVersionMinor:(short)a2 success:(id /* block */)a3 failure:(id /* block */)a4;
- (void)getBootstrapInfoWithLocale:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (void)getUserWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (void)getPublicUserInfoWithUsername:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (void)getPremiumInfoWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (void)getNoteStoreUrlWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (void)authenticateToBusinessWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (void)revokeLongSessionWithAuthenticationToken:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;

@end
