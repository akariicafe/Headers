@interface NETransparentProxyManager : NEVPNManager

+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)a0;

- (id)init;
- (BOOL)isProtocolTypeValid:(long long)a0;
- (void)additionalSetup;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)a0;

@end
