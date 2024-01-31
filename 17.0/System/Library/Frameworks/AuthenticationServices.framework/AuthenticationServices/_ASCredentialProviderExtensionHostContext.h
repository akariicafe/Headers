@class NSString;
@protocol _ASCredentialProviderExtensionHostContextDelegate;

@interface _ASCredentialProviderExtensionHostContext : NSExtensionContext <_ASCredentialProviderExtensionHostContextProtocol, _ASExtensionHostContext>

@property (weak, nonatomic) id<_ASCredentialProviderExtensionHostContextDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (void)prepareToCancelRequestWithError:(id)a0 completion:(id /* block */)a1;
- (void)prepareToCompleteAssertionRequestWithSelectedPasskeyCredential:(id)a0 completion:(id /* block */)a1;
- (void)prepareToCompleteExtensionConfigurationRequestWithCompletion:(id /* block */)a0;
- (void)prepareToCompleteRegistrationRequestWithSelectedPasskeyCredential:(id)a0 completion:(id /* block */)a1;
- (void)prepareToCompleteRequestWithSelectedCredential:(id)a0 completion:(id /* block */)a1;

@end
