@class UIViewController;

@interface SearchUITapCommand : SearchUICommand

@property (retain, nonatomic) UIViewController *viewController;

- (id)resultEngagementFeedback;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)cardSectionEngagementFeedback;
- (void)showViewController:(id)a0;
- (id)setupViewController;
- (BOOL)prefersModalPresentation;
- (void)performCommandWithCompletion:(id /* block */)a0;
- (void)sendAllFeedback;
- (BOOL)presentViewController:(id)a0 completion:(id /* block */)a1;
- (void)openApplication:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldDeselectPreviousSelection;
- (void)sendCommandFeedback;
- (void)requestAuthIfNecessaryAndPresentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)downloadDemotedAppIfNecessaryForBundleIdentifier:(id)a0 showExplanationAlert:(BOOL)a1;
- (BOOL)presentsViewController;
- (void)openUserActivity:(id)a0 withApplicationBundleIdentifier:(id)a1 completion:(id /* block */)a2;

@end
