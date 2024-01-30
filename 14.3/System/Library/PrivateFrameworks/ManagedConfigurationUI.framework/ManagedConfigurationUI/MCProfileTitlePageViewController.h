@class MCInstallProfileQuestionViewController, MCActivityViewController, MCProfileTitlePageMetaDataSectionController, MCProfileTitlePageView, NSString, MCProfileTitlePageViewModel, MCProfileTitlePageMetaDataSectionAnimationController;

@interface MCProfileTitlePageViewController : MCSectionBasedTableViewController <UIScrollViewDelegate, MCProfileTitlePageViewModelDelegate, MCUISignInViewControllerDelegate, MCProfileQuestionsControllerDelegate, DevicePINControllerDelegate, MCUIDismissalAwareViewController>

@property (retain, nonatomic) MCProfileTitlePageViewModel *viewModel;
@property (retain, nonatomic) MCProfileTitlePageView *profileTitlePageView;
@property (nonatomic) double metaDataSectionHeight;
@property (nonatomic) BOOL hasUpdatedBottomInset;
@property (retain, nonatomic) MCProfileTitlePageMetaDataSectionController *metaDataSectionController;
@property (retain, nonatomic) MCProfileTitlePageMetaDataSectionAnimationController *animationController;
@property (retain, nonatomic) MCInstallProfileQuestionViewController *questionsController;
@property (retain, nonatomic) MCActivityViewController *activityViewController;
@property (copy, nonatomic) id /* block */ passcodeCompletionHandler;
@property (copy, nonatomic) id /* block */ authenticationCompletionHandler;
@property (copy, nonatomic) id /* block */ authenticationPreparationHandler;
@property (copy, nonatomic) id /* block */ userInputCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)loadView;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)didAcceptEnteredPIN:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)cancelButtonTapped:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didCancelEnteringPIN;
- (void)infoButtonTapped:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)signInViewController:(id)a0 didAuthenticateWithResults:(id)a1 error:(id)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)viewDidLoad;
- (id)defaultView;
- (void)installButtonTapped:(id)a0;
- (void)signInViewController:(id)a0 willAuthenticateWithCompletionHandler:(id /* block */)a1;
- (void)signInViewControllerDidCancelAuthentication:(id)a0;
- (void)promptForPasscodeWithCompletionHandler:(id /* block */)a0;
- (void)installationFinishedSuccessfully:(BOOL)a0 shouldDismiss:(BOOL)a1 shouldRedirect:(BOOL)a2 errorToDisplay:(id)a3;
- (void)promptForUserInput:(id)a0 completionHandler:(id /* block */)a1;
- (void)presentAuthenticationViewControllerWithContext:(id)a0 authenticationPreparationHandler:(id /* block */)a1 authenticationCompletionHandler:(id /* block */)a2;
- (void)presentSpinnerViewController;
- (void)informQuestionViewControllerOfPreflightResult:(id)a0 profileConnection:(id)a1;
- (id)_sectionControllersWithProfile:(id)a0;
- (void)_updateMetaDataSectionHeight;
- (void)_updateBottomInsetToEnableCompleteScrollAnimation;
- (void)_resetNavigationBarStyleForViewController:(id)a0;
- (void)_showAlertForInstallError:(id)a0;
- (void)setCurrentQuestionsController:(id)a0;
- (void)questionsController:(id)a0 didFinishWithResponses:(id)a1;
- (BOOL)questionsControllerIsDisplayedInSheet:(id)a0;
- (void)viewControllerHasBeenDismissed;

@end
