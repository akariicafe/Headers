@class NSString;
@protocol _ASCredentialProviderExtensionConfigurationViewControllerDelegate;

@interface _ASCredentialProviderExtensionConfigurationViewController : _ASExtensionViewController <_ASCredentialProviderExtensionHostContextDelegate>

@property (weak, nonatomic) id<_ASCredentialProviderExtensionConfigurationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_finishWithSuccess:(BOOL)a0 completion:(id /* block */)a1;
- (void)_requestDidFailWithError:(id)a0 completion:(id /* block */)a1;
- (void)beginConfiguringExtension;
- (void)prepareToCompleteExtensionConfigurationRequestWithHost:(id)a0 completion:(id /* block */)a1;

@end
