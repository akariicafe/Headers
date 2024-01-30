@class APProxySessionConfigurationProvider, APNSURLSessionDemultiplexerManager, APProxyURLCredentialService;

@interface APProxyProtocolProperties : NSObject

@property (retain, nonatomic) APProxySessionConfigurationProvider *proxySessionConfigurationProvider;
@property (retain, nonatomic) APNSURLSessionDemultiplexerManager *sessionDemultiplexerManager;
@property (retain, nonatomic) APProxyURLCredentialService *proxyURLCredentialService;

- (void).cxx_destruct;

@end
