@class NSString;
@protocol SXProxyConfiguration, SXProxyAuthenticationCredentialFactory;

@interface SXProxyAuthenticationHandler : NSObject <SXProxyAuthenticationHandler>

@property (readonly, nonatomic) id<SXProxyAuthenticationCredentialFactory> credentialFactory;
@property (readonly, nonatomic) id<SXProxyConfiguration> proxyConfiguration;
@property (readonly, nonatomic) unsigned long long retryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleAuthenticationChallenge:(id)a0 completion:(id /* block */)a1;
- (id)initWithCredentialFactory:(id)a0 proxyConfiguration:(id)a1 retryCount:(unsigned long long)a2;

@end
