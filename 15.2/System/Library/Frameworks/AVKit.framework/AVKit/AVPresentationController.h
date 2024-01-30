@class AVObservationController, UIWindow, AVPresentationContext;

@interface AVPresentationController : UIPresentationController

@property (readonly, nonatomic) AVObservationController *observationController;
@property (weak, nonatomic) UIWindow *presentationWindowForDisablingAutorotation;
@property (readonly, nonatomic) AVPresentationContext *context;

- (BOOL)shouldPresentInFullscreen;
- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)shouldRemovePresentersView;
- (void)dealloc;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 withConfiguration:(id)a2;
- (void)_ensureOrientation:(long long)a0 enablingMixedOrientations:(BOOL)a1;
- (void)_prepareDismissingTransitionContext;
- (void)_observeSceneDidBecomeActiveForRestoringRotatability;

@end
