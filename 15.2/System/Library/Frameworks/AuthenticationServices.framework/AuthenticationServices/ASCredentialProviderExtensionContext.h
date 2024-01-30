@class NSString;

@interface ASCredentialProviderExtensionContext : NSExtensionContext <_ASCredentialProviderExtensionContextProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)cancelRequestWithError:(id)a0;
- (void)provideCredentialWithoutUserInteractionForIdentity:(id)a0;
- (void)prepareInterfaceForExtensionConfiguration;
- (void)prepareCredentialListForServiceIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)prepareInterfaceToProvideCredentialForIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)completeRequestWithSelectedCredential:(id)a0 completionHandler:(id /* block */)a1;
- (void)completeExtensionConfigurationRequest;

@end
