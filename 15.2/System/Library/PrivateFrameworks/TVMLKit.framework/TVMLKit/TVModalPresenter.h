@class NSArray, NSString, NSHashTable, _UIProgressiveBlurPresentationAnimator, _TVPlaybackFadeAnimator;

@interface TVModalPresenter : NSObject <UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate> {
    NSHashTable *__presentationControllers;
    _UIProgressiveBlurPresentationAnimator *_presentingAnimator;
    _UIProgressiveBlurPresentationAnimator *_dismissingAnimator;
    _TVPlaybackFadeAnimator *_playbackAnimator;
}

@property (readonly, nonatomic) NSHashTable *_presentationControllers;
@property (readonly, copy, nonatomic) NSArray *presentedViewControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_viewControllerForResponder:(id)a0;

- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dismissViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)presentViewController:(id)a0 fromViewController:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)presentViewController:(id)a0 forResponder:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)dismissViewControllerWithResponder:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissAllViewControllersWithAnimation:(BOOL)a0 completion:(id /* block */)a1;

@end
