@class BDSServiceProxy, NSString;

@interface BDSJaliscoDAAPClient : NSObject <BDSJaliscoDAAPClientService>

@property (class, readonly, nonatomic) BDSJaliscoDAAPClient *sharedClient;

@property (retain, nonatomic) BDSServiceProxy *serviceProxy;
@property (nonatomic) BOOL familyUpdateInProgress;
@property (nonatomic) BOOL storeAuthenticationRequired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)deleteItemsWithStoreIDs:(id)a0 completion:(id /* block */)a1;
- (void)hideItemsWithStoreIDs:(id)a0 completion:(id /* block */)a1;
- (void)resetPurchasedTokenForStoreIDs:(id)a0 completion:(id /* block */)a1;
- (void)resetStaleJaliscoDatabaseWithCompletion:(id /* block */)a0;
- (void)setItemHidden:(BOOL)a0 forStoreID:(id)a1 completion:(id /* block */)a2;
- (void)updateFamilyPolitely:(BOOL)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (void)updateFamilyPolitely:(BOOL)a0 reason:(long long)a1 completionWithError:(id /* block */)a2;
- (void)updatePolitely:(BOOL)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (void)updatePolitely:(BOOL)a0 reason:(long long)a1 completionWithError:(id /* block */)a2;
- (void)updatePolitelyAfterSignIn:(BOOL)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (void)updatePolitelyAfterSignOut:(BOOL)a0 reason:(long long)a1 completion:(id /* block */)a2;

@end
