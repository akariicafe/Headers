@class NSString, CNFRegSigninLearnMoreView, AKTapToSignInViewController;

@interface CNFRegSplashSignInController : CNFRegSignInController <AKTapToSignInViewControllerDelegate> {
    CNFRegSigninLearnMoreView *_signInView;
    AKTapToSignInViewController *_akSignInVC;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)tapToSignInViewController:(id)a0 didAuthenticateWithResults:(id)a1 error:(id)a2;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)_handleTimeout;
- (void)dealloc;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)specifierList;
- (id)_existingLearnMoreViewForSpecifier:(id)a0;
- (id)_existingLearnMoreViewForSection:(long long)a0;
- (id)_controllerToPresentOn;

@end
