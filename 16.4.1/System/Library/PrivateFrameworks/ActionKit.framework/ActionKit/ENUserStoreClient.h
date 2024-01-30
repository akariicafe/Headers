@class EDAMUserStoreClient, NSString;

@interface ENUserStoreClient : ENStoreClient

@property (retain, nonatomic) EDAMUserStoreClient *client;
@property (retain, nonatomic) NSString *authenticationToken;

+ (id)userStoreClientWithUrl:(id)a0 authenticationToken:(id)a1;

- (void).cxx_destruct;
- (void)fetchPremiumInfoWithCompletion:(id /* block */)a0;
- (id)authenticateToBusiness;
- (void)authenticateToBusinessWithCompletion:(id /* block */)a0;
- (void)authenticateToBusinessWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (void)checkVersionWithClientName:(id)a0 edamVersionMajor:(short)a1 edamVersionMinor:(short)a2 completion:(id /* block */)a3;
- (void)checkVersionWithClientName:(id)a0 edamVersionMajor:(short)a1 edamVersionMinor:(short)a2 success:(id /* block */)a3 failure:(id /* block */)a4;
- (void)fetchBootstrapInfoWithLocale:(id)a0 completion:(id /* block */)a1;
- (void)fetchNoteStoreURLWithCompletion:(id /* block */)a0;
- (void)fetchPublicUserInfoWithUsername:(id)a0 completion:(id /* block */)a1;
- (void)fetchUserWithCompletion:(id /* block */)a0;
- (void)getBootstrapInfoWithLocale:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (void)getNoteStoreUrlWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (void)getPremiumInfoWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (void)getPublicUserInfoWithUsername:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (void)getUserWithSuccess:(id /* block */)a0 failure:(id /* block */)a1;
- (id)initWithUserStoreUrl:(id)a0 authenticationToken:(id)a1;
- (void)revokeLongSessionWithAuthenticationToken:(id)a0 completion:(id /* block */)a1;
- (void)revokeLongSessionWithAuthenticationToken:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;

@end
