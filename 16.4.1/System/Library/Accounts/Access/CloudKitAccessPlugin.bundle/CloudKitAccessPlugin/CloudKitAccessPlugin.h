@class NSString, ACAccountStore;

@interface CloudKitAccessPlugin : NSObject <ACDAccountAccessPlugin> {
    ACAccountStore *_store;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsAccountTypeWithIdentifier:(id)a0;

- (void)revokeAccessToAccountsOfType:(id)a0 forClient:(id)a1 store:(id)a2 completion:(id /* block */)a3;
- (void)revokeAllAccessToAccountsOfType:(id)a0 store:(id)a1 withCompletion:(id /* block */)a2;
- (void)authorizeAccessToAccountsOfType:(id)a0 forClient:(id)a1 store:(id)a2 completion:(id /* block */)a3;
- (void)handleAccessRequestToAccountsOfType:(id)a0 forClient:(id)a1 withOptions:(id)a2 store:(id)a3 allowUserInteraction:(BOOL)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (id)_ckAccountInStore:(id)a0;
- (BOOL)_haveAccountsOfType:(id)a0 withStore:(id)a1;

@end
