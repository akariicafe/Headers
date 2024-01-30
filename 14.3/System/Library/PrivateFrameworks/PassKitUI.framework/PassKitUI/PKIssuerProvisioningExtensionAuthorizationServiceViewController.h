@interface PKIssuerProvisioningExtensionAuthorizationServiceViewController : UIViewController {
    BOOL _finished;
}

+ (id)_remoteViewControllerInterface;

- (void)loadView;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)viewWillLayoutSubviews;

@end
