@interface DAEASOAuthClient : NSObject

+ (id)clientRedirect;
+ (id)clientIDForOAuthType:(unsigned long long)a0;
+ (id)_defaultScopeWithoutDomainForOAuthType:(unsigned long long)a0;
+ (id)_defaultScopeWithDomainForOAuthType:(unsigned long long)a0;
+ (id)defaultScopeForOAuthType:(unsigned long long)a0 withResourceIdentifier:(id)a1;
+ (id)clientRedirectForOAuthType:(unsigned long long)a0;
+ (id)scopeForUpgradingFromBasicCreds;

@end
