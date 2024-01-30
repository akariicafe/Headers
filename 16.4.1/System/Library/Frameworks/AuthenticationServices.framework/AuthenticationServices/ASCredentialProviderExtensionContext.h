@class NSString;

@interface ASCredentialProviderExtensionContext : NSExtensionContext <_ASCredentialProviderExtensionContextProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)cancelRequestWithError:(id)a0;
- (void)completeExtensionConfigurationRequest;
- (void)completeRequestWithSelectedCredential:(id)a0 completionHandler:(id /* block */)a1;
- (void)prepareCredentialListForServiceIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)prepareInterfaceForExtensionConfiguration;
- (void)prepareInterfaceToProvideCredentialForIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)provideCredentialWithoutUserInteractionForIdentity:(id)a0;

@end
