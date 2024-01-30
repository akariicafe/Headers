@class UIViewController;

@interface SearchUIGenericViewControllerTapCommand : SearchUITapCommand

@property (retain) UIViewController *viewController;
@property BOOL prefersModalPresentation;

- (void).cxx_destruct;
- (id)setupViewController;
- (void)sendAllFeedback;
- (id)initWithEnvironment:(id)a0 viewController:(id)a1 preferModalPresentation:(BOOL)a2;

@end
