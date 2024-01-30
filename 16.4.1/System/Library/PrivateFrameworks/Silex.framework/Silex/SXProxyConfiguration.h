@class NSString;

@interface SXProxyConfiguration : NSObject <SXProxyConfiguration>

@property (readonly, copy, nonatomic) NSString *proxyHost;
@property (readonly, copy, nonatomic) NSString *proxyAutoConfigScript;
@property (readonly, nonatomic) BOOL usePrivateRelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)direct;

- (id)initWithHost:(id)a0;
- (void).cxx_destruct;
- (id)initWithProxyAutoConfigScript:(id)a0;

@end
