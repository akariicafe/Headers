@class NSString;

@interface ASCredentialProviderExtensionContext : NSExtensionContext <_ASCredentialProviderExtensionContextProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)cancelRequestWithError:(id)a0;
- (void)completeAssertionRequestWithSelectedPasskeyCredential:(id)a0 completionHandler:(id /* block */)a1;
- (void)completeExtensionConfigurationRequest;
- (void)completeRegistrationRequestWithSelectedPasskeyCredential:(id)a0 completionHandler:(id /* block */)a1;
- (void)completeRequestWithSelectedCredential:(id)a0 completionHandler:(id /* block */)a1;
- (void)prepareCredentialListForServiceIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)prepareCredentialListForServiceIdentifiers:(id)a0 requestParameters:(id)a1 completionHandler:(id /* block */)a2;
- (void)prepareInterfaceForExtensionConfiguration;
- (void)prepareInterfaceForPasskeyRegistration:(id)a0 completionHandler:(id /* block */)a1;
- (void)prepareInterfaceToProvideCredentialForIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)prepareInterfaceToProvideCredentialForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)provideCredentialWithoutUserInteractionForIdentity:(id)a0;
- (void)provideCredentialWithoutUserInteractionForRequest:(id)a0;

@end
