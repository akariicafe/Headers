@class UIViewController;

@interface SearchUITapCommand : SearchUICommand

@property (retain, nonatomic) UIViewController *viewController;

- (BOOL)shouldDeselectPreviousSelection;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)sendAllFeedback;
- (BOOL)downloadDemotedAppIfNecessaryForBundleIdentifier:(id)a0;
- (void)performCommandWithCompletion:(id /* block */)a0;
- (void)showViewController:(id)a0;
- (BOOL)prefersModalPresentation;
- (id)setupViewController;
- (id)resultEngagementFeedback;
- (id)cardSectionEngagementFeedback;
- (BOOL)presentsViewController;
- (void)requestAuthIfNecessaryAndPresentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)presentViewController:(id)a0 completion:(id /* block */)a1;

@end
