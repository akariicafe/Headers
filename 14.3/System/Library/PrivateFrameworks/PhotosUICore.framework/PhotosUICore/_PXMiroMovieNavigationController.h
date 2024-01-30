@class NSString, UIViewController;

@interface _PXMiroMovieNavigationController : UINavigationController <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) UIViewController *miroMoviePresentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)dismiss:(id)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (id)initWithRootViewController:(id)a0;
- (id)_transitionForPresentedOrDismissedViewController:(id)a0;

@end
