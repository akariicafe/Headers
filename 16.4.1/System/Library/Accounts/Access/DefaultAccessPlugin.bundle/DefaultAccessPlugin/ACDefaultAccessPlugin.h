@class NSString;

@interface ACDefaultAccessPlugin : NSObject <ACDAccountAccessPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_supportedAccountTypeIdentifiers;
+ (BOOL)supportsAccountTypeWithIdentifier:(id)a0;
+ (BOOL)_accessAlertSupportedByAccountType:(id)a0;
+ (id)_fullAccessEntitlementForAccountType:(id)a0;
+ (id)_defaultAccessEntitlementForAccountType:(id)a0;
+ (BOOL)_accessAlertFormerlySupportedByAccountType:(id)a0;

- (void)revokeAccessToAccountsOfType:(id)a0 forClient:(id)a1 store:(id)a2 completion:(id /* block */)a3;
- (void)revokeAllAccessToAccountsOfType:(id)a0 store:(id)a1 withCompletion:(id /* block */)a2;
- (void)_presentAccessAlertforClient:(id)a0 onAccountType:(id)a1 withHandler:(id /* block */)a2;
- (void)authorizeAccessToAccountsOfType:(id)a0 forClient:(id)a1 store:(id)a2 completion:(id /* block */)a3;
- (BOOL)_shouldGrantClient:(id)a0 unrestrictedAccessToAccountType:(id)a1;
- (BOOL)_shouldGrantClient:(id)a0 defaultAccessToAccountType:(id)a1;
- (void)handleAccessRequestToAccountsOfType:(id)a0 forClient:(id)a1 withOptions:(id)a2 store:(id)a3 allowUserInteraction:(BOOL)a4 completion:(id /* block */)a5;

@end
