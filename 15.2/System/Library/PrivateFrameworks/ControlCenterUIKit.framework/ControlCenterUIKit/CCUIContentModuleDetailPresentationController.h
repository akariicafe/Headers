@class NSString, UIViewController;

@interface CCUIContentModuleDetailPresentationController : UIPresentationController <UIGestureRecognizerDelegate> {
    UIViewController *_anchoringViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (BOOL)shouldPresentInFullscreen;
- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (double)_preferredExpandedContentWidthForViewController:(id)a0;
- (double)_preferredExpandedContentHeightForViewController:(id)a0;
- (void)_handleBackgroundTap:(id)a0;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 anchoringViewController:(id)a2;

@end
