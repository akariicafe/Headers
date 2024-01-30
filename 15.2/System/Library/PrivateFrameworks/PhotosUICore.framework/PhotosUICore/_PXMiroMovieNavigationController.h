@class NSString, UIViewController;

@interface _PXMiroMovieNavigationController : UINavigationController <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) UIViewController *miroMoviePresentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)initWithRootViewController:(id)a0;
- (void)dismiss:(id)a0;
- (void).cxx_destruct;
- (id)_transitionForPresentedOrDismissedViewController:(id)a0;

@end
