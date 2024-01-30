@class NSString, AKDevice;

@interface AAUIProxiedTermsRemoteUI : AAUIGenericTermsRemoteUI {
    AKDevice *_proxiedDevice;
    NSString *_appProvidedContext;
}

- (void).cxx_destruct;
- (id)sessionConfigurationForLoader:(id)a0;
- (void)_addHeadersToRequest:(id)a0;
- (void)_sendAcceptedTermsInfo:(id)a0;
- (void)_agreeToTermsWithURLString:(id)a0 preferPassword:(BOOL)a1 completion:(id /* block */)a2;
- (id)_authContextForRenewCredentials;
- (id)initWithAuthResults:(id)a0;
- (id)initWithAuthResults:(id)a0 proxiedDevice:(id)a1 appProvidedContext:(id)a2;

@end
