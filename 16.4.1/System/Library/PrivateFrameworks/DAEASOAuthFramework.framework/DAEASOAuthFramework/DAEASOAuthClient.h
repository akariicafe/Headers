@interface DAEASOAuthClient : NSObject

+ (id)clientRedirect;
+ (id)scopeForUpgradingFromBasicCreds;
+ (id)_defaultScopeWithDomainForOAuthType:(unsigned long long)a0;
+ (id)_defaultScopeWithoutDomainForOAuthType:(unsigned long long)a0 forToken:(BOOL)a1;
+ (id)clientIDForOAuthType:(unsigned long long)a0;
+ (id)clientRedirectForOAuthType:(unsigned long long)a0;
+ (id)defaultScopeForOAuthType:(unsigned long long)a0 withResourceIdentifier:(id)a1;
+ (id)defaultScopeForOAuthType:(unsigned long long)a0 withResourceIdentifier:(id)a1 forToken:(BOOL)a2;

@end
