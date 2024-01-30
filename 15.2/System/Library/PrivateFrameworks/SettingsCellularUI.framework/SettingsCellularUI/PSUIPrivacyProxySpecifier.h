@class PSUICoreTelephonyDataCache, CTXPCServiceSubscriptionContext;

@interface PSUIPrivacyProxySpecifier : PSSpecifier

@property (retain, nonatomic) PSUICoreTelephonyDataCache *dataCache;
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *context;

- (id)groupSpecifier;
- (void).cxx_destruct;
- (void)setPrivacyProxyEnabled:(id)a0;
- (id)isPrivacyProxyEnabled;
- (id)initWithDataCache:(id)a0 context:(id)a1;

@end
