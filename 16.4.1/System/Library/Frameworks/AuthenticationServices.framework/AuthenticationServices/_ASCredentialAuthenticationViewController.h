@class NSString, ASPasswordCredentialIdentity;
@protocol _ASCredentialAuthenticationViewControllerDelegate;

@interface _ASCredentialAuthenticationViewController : _ASExtensionViewController <_ASCredentialProviderExtensionHostContextDelegate> {
    ASPasswordCredentialIdentity *_credentialIdentity;
}

@property (weak, nonatomic) id<_ASCredentialAuthenticationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithExtension:(id)a0 credentialIdentity:(id)a1;
- (void)_finishWithCredential:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_nonUIRequestDidRequireUserInteraction;
- (void)_requestDidFailWithError:(id)a0 completion:(id /* block */)a1;
- (void)prepareToCompleteRequestWithHostContext:(id)a0 credential:(id)a1 completion:(id /* block */)a2;

@end
