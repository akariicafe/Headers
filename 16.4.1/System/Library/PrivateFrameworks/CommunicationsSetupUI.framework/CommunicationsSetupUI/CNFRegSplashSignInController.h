@class NSString, CNFRegSigninLearnMoreView, AKTapToSignInViewController;

@interface CNFRegSplashSignInController : CNFRegSignInController <AKTapToSignInViewControllerDelegate> {
    CNFRegSigninLearnMoreView *_signInView;
    AKTapToSignInViewController *_akSignInVC;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)_handleTimeout;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)tapToSignInViewController:(id)a0 didAuthenticateWithResults:(id)a1 error:(id)a2;
- (id)_controllerToPresentOn;
- (id)_existingLearnMoreViewForSection:(long long)a0;
- (id)_existingLearnMoreViewForSpecifier:(id)a0;
- (id)specifierList;

@end
