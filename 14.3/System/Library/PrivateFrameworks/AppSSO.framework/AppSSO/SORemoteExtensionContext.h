@class SOExtensionViewService, NSString, ASAuthorizationProviderExtensionAuthorizationRequest, SOExtensionServiceConnection;
@protocol ASAuthorizationProviderExtensionAuthorizationRequestHandler;

@interface SORemoteExtensionContext : NSExtensionContext <SORemoteExtensionContextProtocol, SOExtensionContext> {
    SOExtensionServiceConnection *_extensionServiceConnection;
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

- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canOpenURL:(id)a0;
- (void).cxx_destruct;
- (id)hostContextWithError:(id *)a0;
- (void)_disableAppSSOInCFNetwork;
- (void)cancelAuthorizationWithCompletion:(id /* block */)a0;
- (void)beginAuthorizationWithServiceXPCEndpoint:(id)a0 completion:(id /* block */)a1;
- (id)synchronousHostContextWithError:(id *)a0;
- (void)beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;

@end
