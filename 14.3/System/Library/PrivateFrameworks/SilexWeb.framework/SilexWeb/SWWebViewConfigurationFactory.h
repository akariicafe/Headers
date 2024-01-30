@class NSString, WKProcessPool, WKWebsiteDataStore;

@interface SWWebViewConfigurationFactory : NSObject <SWWebViewConfigurationFactory>

@property (readonly, nonatomic) WKProcessPool *processPool;
@property (readonly, nonatomic) WKWebsiteDataStore *websiteDataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createWebViewConfigurationWithUserContentController:(id)a0 mediaSettings:(id)a1;
- (id)initWithProcessPool:(id)a0 websiteDataStore:(id)a1;

@end
