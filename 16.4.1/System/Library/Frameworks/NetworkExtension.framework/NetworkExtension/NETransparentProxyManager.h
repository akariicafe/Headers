@interface NETransparentProxyManager : NEVPNManager

@property (readonly, nonatomic, getter=isFromMDM) BOOL isFromMDM;

+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)a0;
+ (void)loadEverythingFromPreferencesWithCompletionHandler:(id /* block */)a0;

- (id)init;
- (void)additionalSetup;
- (BOOL)isProtocolTypeValid:(long long)a0;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)a0;

@end
