@class SXProxyConfiguration, NSString;

@interface SXWebsiteDataStoreFactory : NSObject <SXWebsiteDataStoreFactory>

@property (readonly, nonatomic) SXProxyConfiguration *proxyConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProxyConfiguration:(id)a0;
- (id)createWebsiteDataStore;

@end
