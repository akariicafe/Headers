@interface PrivacyProxyClient : NSObject

+ (void)getPrivateAccessTokensEnabled:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getForceFallback:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setPrivateAccessTokensEnabled:(BOOL)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getStatus:(id)a0 completionHandler:(id /* block */)a1;
+ (void)overridePreferredResolver:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getPreferredResolver:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setEnabled:(BOOL)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getServiceStatus:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getServiceStatusTimeline:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setFreeUserTierUntilTomorrow:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setTrafficState:(unsigned long long)a0 proxyTraffic:(unsigned long long)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)getTrafficState:(id)a0 completionandler:(id /* block */)a1;
+ (void)reportCellularNetworkStatus:(BOOL)a0 networkName:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)reportWiFiNetworkStatus:(BOOL)a0 networkName:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)getPrivacyProxyAccountType:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setUserTier:(unsigned long long)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getGeohashSharingPreference:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getUserTier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getOverriddeIngressProxy:(id)a0 completionHandler:(id /* block */)a1;
+ (void)overrideIngressProxy:(id)a0 fallbackProxy:(id)a1 key:(id)a2 queue:(id)a3 completionHandler:(id /* block */)a4;
+ (void)getUserTierExtended:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getPreferredProxy:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setGeohashSharingPreference:(BOOL)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)setForceFallback:(BOOL)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)overridePreferredProxy:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getEffectiveUserTier:(id)a0 completionHandler:(id /* block */)a1;

@end
