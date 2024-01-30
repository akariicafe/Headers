@class NSString;

@interface NewsArticles.ProxyConfiguration : NSObject <SXProxyConfiguration>

@property (nonatomic, readonly) NSString *proxyAutoConfigScript;

- (id)init;

@end
