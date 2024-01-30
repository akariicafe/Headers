@interface PrivacyProxyClient : NSObject

+ (void)reportCellularNetworkStatus:(BOOL)a0 networkName:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)getUserTier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getGeohashSharingPreference:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getServiceStatus:(id)a0 completionHandler:(id /* block */)a1;
+ (void)setEnabled:(BOOL)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)reportWiFiNetworkStatus:(BOOL)a0 networkName:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)setUserTier:(unsigned long long)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getPrivacyProxyAccountType:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getServiceStatusTimeline:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getStatus:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getEffectiveUserTier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getTrafficState:(id)a0 completionandler:(id /* block */)a1;
+ (id)getServerConnection;
+ (void)setTrafficState:(unsigned long long)a0 proxyTraffic:(unsigned long long)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)setGeohashSharingPreference:(BOOL)a0 queue:(id)a1 completionHandler:(id /* block */)a2;

@end
