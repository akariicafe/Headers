@interface PKIssuerProvisioningExtensionAuthorizationViewController : UINavigationController {
    id /* block */ _completionHandler;
}

- (void).cxx_destruct;
- (void)_cancel;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithExtension:(id)a0 completionHandler:(id /* block */)a1;
- (void)_failWithApplicationName:(id)a0;
- (void)_invokeCompletionWithAuthorized:(BOOL)a0;

@end
