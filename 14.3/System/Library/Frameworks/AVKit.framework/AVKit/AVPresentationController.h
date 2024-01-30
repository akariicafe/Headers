@class AVObservationController, UIWindow, AVPresentationContext;

@interface AVPresentationController : UIPresentationController

@property (readonly, nonatomic) AVObservationController *observationController;
@property (weak, nonatomic) UIWindow *presentationWindowForDisablingAutorotation;
@property (readonly, nonatomic) AVPresentationContext *context;

- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (BOOL)shouldPresentInFullscreen;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)containerViewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_ensureOrientation:(long long)a0 enablingMixedOrientations:(BOOL)a1;
- (void)_prepareDismissingTransitionContext;
- (void)_observeSceneDidBecomeActiveForRestoringRotatability;
- (BOOL)shouldRemovePresentersView;

@end
