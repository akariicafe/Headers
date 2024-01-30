@class NSError, VSIdentityProvider, NSArray;

@interface VSIdentityProviderUserAccountUpdateOperation : VSAsyncOperation

@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) VSIdentityProvider *provider;
@property (readonly, nonatomic) NSArray *userAccounts;

- (void)executionDidBegin;
- (void).cxx_destruct;
- (id)_allowedBundleIDs;
- (id)_userAccountsForJSUserAccounts;
- (id)initWithIdentityProvider:(id)a0 userAccounts:(id)a1;

@end
