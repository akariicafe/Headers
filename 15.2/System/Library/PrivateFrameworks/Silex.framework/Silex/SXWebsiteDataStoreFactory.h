@class SXProxyConfiguration, NSString;

@interface SXWebsiteDataStoreFactory : NSObject <SXWebsiteDataStoreFactory>

@property (readonly, nonatomic) SXProxyConfiguration *proxyConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProxyConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)createWebsiteDataStore;

@end
