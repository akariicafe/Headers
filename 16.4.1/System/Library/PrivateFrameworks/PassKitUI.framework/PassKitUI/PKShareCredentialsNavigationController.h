@class NSString, PKShareableCredentialExplanationViewController, PKAddShareablePassConfiguration;

@interface PKShareCredentialsNavigationController : PKNavigationController <PKPaymentSetupViewControllerDelegate, PKPaymentSelectPassesViewControllerDelegate, PKServiceAddSecureElementPassViewControllerProtocol> {
    PKShareableCredentialExplanationViewController *_explanationVC;
    PKAddShareablePassConfiguration *_configuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)loadView;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (void)_presentProvisioningViewControllerAnimated:(BOOL)a0;
- (id)_sortAndFilterPassesToDelete:(id)a0;
- (void)didFinishWithPasses:(id)a0 error:(id)a1;
- (void)selectPassesViewController:(id)a0 didSelectPasses:(id)a1 completion:(id /* block */)a2;
- (void)selectPassesViewControllerDidTapBackButton:(id)a0;
- (void)setConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void)viewController:(id)a0 didFinishWithPasses:(id)a1 error:(id)a2;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;

@end
