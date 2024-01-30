@class UINavigationController, NSString, _TVPlaybackFadeAnimator, _UIProgressiveBlurPresentationAnimator, UIViewController;

@interface _TVModalPresenter : NSObject <UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate> {
    _UIProgressiveBlurPresentationAnimator *_presentingAnimator;
    _UIProgressiveBlurPresentationAnimator *_dismissingAnimator;
    BOOL _dismissing;
    _TVPlaybackFadeAnimator *_playbackAnimator;
}

@property (readonly, nonatomic) UIViewController *presentedViewController;
@property (readonly, nonatomic) UINavigationController *modalRootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)presenter;

- (BOOL)_isDismissing;
- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (void)dealloc;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)_hidden;
- (void)_forceOrientationBackToSupportedOrientation;
- (void)hideAllAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_configureModalController:(id)a0 withFromController:(id)a1 andConfiguration:(id)a2;
- (void)_dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_willRotateNotification:(id)a0;
- (void)hideController:(id)a0 animated:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)showController:(id)a0 fromController:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)showController:(id)a0 fromController:(id)a1 withConfiguration:(id)a2 andCompletionBlock:(id /* block */)a3;
- (void)showController:(id)a0 fromController:(id)a1 withConfiguration:(id)a2 animated:(BOOL)a3 andCompletionBlock:(id /* block */)a4;

@end
