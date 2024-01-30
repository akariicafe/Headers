@interface PKIssuerProvisioningExtensionAuthorizationViewController : UINavigationController {
    id /* block */ _completionHandler;
}

- (void)_cancel;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_failWithApplicationName:(id)a0;
- (void)_invokeCompletionWithAuthorized:(BOOL)a0;
- (id)initWithExtension:(id)a0 completionHandler:(id /* block */)a1;

@end
