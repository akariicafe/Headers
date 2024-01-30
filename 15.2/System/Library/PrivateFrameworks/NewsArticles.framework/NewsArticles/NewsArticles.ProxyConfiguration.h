@class NSString;

@interface NewsArticles.ProxyConfiguration : NSObject <SXProxyConfiguration> {
    void /* unknown type, empty encoding */ embedProxyConfiguration;
}

@property (nonatomic, readonly) NSString *proxyAutoConfigScript;
@property (nonatomic, readonly) NSString *proxyHost;

- (void).cxx_destruct;
- (id)init;

@end
