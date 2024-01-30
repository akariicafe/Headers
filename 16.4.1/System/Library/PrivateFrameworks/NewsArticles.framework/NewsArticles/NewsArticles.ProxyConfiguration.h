@class NSString;

@interface NewsArticles.ProxyConfiguration : NSObject <SXProxyConfiguration> {
    void /* unknown type, empty encoding */ embedProxyConfiguration;
}

@property (nonatomic, readonly) BOOL usePrivateRelay;
@property (nonatomic, readonly) NSString *proxyAutoConfigScript;
@property (nonatomic, readonly) NSString *proxyHost;

- (id)init;
- (void).cxx_destruct;

@end
