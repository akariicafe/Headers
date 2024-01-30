@class _UIBackdropView;

@interface SUICFullScreenBlurPresentationController : UIPresentationController {
    _UIBackdropView *_fullScreenBlurView;
}

@property (nonatomic) unsigned long long blurStyle;

- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 blurStyle:(unsigned long long)a2;
- (void)_stageViewsForFadeIn;

@end
