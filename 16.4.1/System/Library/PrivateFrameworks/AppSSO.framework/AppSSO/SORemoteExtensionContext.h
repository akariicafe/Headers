@class SOExtensionViewService, NSString, NSMapTable, SOExtensionServiceConnection;
@protocol POExtensionRegistrationProtocol, ASAuthorizationProviderExtensionAuthorizationRequestHandler;

@interface SORemoteExtensionContext : NSExtensionContext <SORemoteExtensionContextProtocol, SOExtensionContext> {
    SOExtensionServiceConnection *_extensionServiceConnection;
    id<ASAuthorizationProviderExtensionAuthorizationRequestHandler, POExtensionRegistrationProtocol> _extensionAuthorizationRequestHandler;
    id /* block */ _finishAuthorizationCompletion;
    NSMapTable *_requests;
}

@property (weak) SOExtensionViewService *viewService;
@property (readonly, nonatomic) id<ASAuthorizationProviderExtensionAuthorizationRequestHandler> extensionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (BOOL)canOpenURL:(id)a0;
- (void)registrationDidComplete;
- (void)canPerformRegistrationCompletion:(id /* block */)a0;
- (void)beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)beginUserRegistrationUsingUserName:(id)a0 authenticationMethod:(int)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)beginDeviceRegistrationUsingOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelAuthorization:(id)a0 completion:(id /* block */)a1;
- (void)beginAuthorizationWithServiceXPCEndpoint:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)finishAuthorization:(id)a0 completion:(id /* block */)a1;
- (id)hostContextWithError:(id *)a0;
- (void)_disableAppSSOInCFNetwork;
- (id)authorizationRequestHandlerWithRequestParameters:(id)a0 error:(id *)a1;
- (void)completeFinishAuthorization:(id)a0 error:(id)a1;
- (id)extensionAuthorizationRequestHandlerWithError:(id *)a0;
- (id)findRequestForIdentifier:(id)a0;
- (void)removeRequestForIdentifier:(id)a0;
- (void)saveRequest:(id)a0 forIdentifier:(id)a1;
- (id)synchronousHostContextWithError:(id *)a0;

@end
