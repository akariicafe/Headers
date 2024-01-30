@class UIStatusBarWindow, CKBrowserFullscreenRevealDimmingView, UIView, UIStatusBar;

@interface CKBrowserFullscreenRevealPresentationController : UIPresentationController

@property (retain, nonatomic) CKBrowserFullscreenRevealDimmingView *dimmingView;
@property (nonatomic, getter=isPresenting) BOOL presenting;
@property (nonatomic, getter=isDismissing) BOOL dismissing;
@property (retain, nonatomic) UIStatusBar *statusBar;
@property (retain, nonatomic) UIStatusBarWindow *statusBarWindow;
@property (nonatomic) unsigned long long statusBarResizeMask;
@property (retain, nonatomic) UIView *presentingSnapshotView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } presentingSnapshotFrame;
@property (copy, nonatomic) id /* block */ dismissHandler;

- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dimmingViewTapped:(id)a0;
- (void)_willChangeStatusBarFrame:(id)a0;
- (void)_prepareViewHierarchyForPresentation;
- (void)_configureViewsForPresentedState;
- (void)_configureViewsForDismissedState;
- (id)_viewsToApplyTransform;
- (id)_viewsToApplyCornerRadius;
- (void).cxx_destruct;
- (BOOL)shouldRemovePresentersView;
- (void)dealloc;
- (BOOL)_shouldGrabPresentersView;
- (void)_cleanupPresentation;

@end
