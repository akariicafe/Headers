@class SOExtensionViewService, NSString, ASAuthorizationProviderExtensionAuthorizationRequest, SOExtensionServiceConnection;
@protocol ASAuthorizationProviderExtensionAuthorizationRequestHandler;

@interface SORemoteExtensionContext : NSExtensionContext <SORemoteExtensionContextProtocol, SOExtensionContext> {
    SOExtensionServiceConnection *_extensionServiceConnection;
    id<ASAuthorizationProviderExtensionAuthorizationRequestHandler> _extensionAuthorizationRequestHandler;
    id /* block */ _finishAuthorizationCompletion;
}

@property (weak) SOExtensionViewService *viewService;
@property (readonly, nonatomic) id<ASAuthorizationProviderExtensionAuthorizationRequestHandler> extensionViewController;
@property (readonly, nonatomic) ASAuthorizationProviderExtensionAuthorizationRequest *extensionAuthorizationRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)finishAuthorizationWithCompletion:(id /* block */)a0;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canOpenURL:(id)a0;
- (void).cxx_destruct;
- (void)beginAuthorizationWithServiceXPCEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)cancelAuthorizationWithCompletion:(id /* block */)a0;
- (id)hostContextWithError:(id *)a0;
- (id)extensionAuthorizationRequestHandlerWithError:(id *)a0;
- (id)authorizationRequestHandlerWithRequestParameters:(id)a0 error:(id *)a1;
- (void)_disableAppSSOInCFNetwork;
- (id)synchronousHostContextWithError:(id *)a0;
- (void)completeFinishAuthorizationWithError:(id)a0;

@end
