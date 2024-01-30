@interface _UICurrentContextPresentationController : UIPresentationController

- (BOOL)shouldPresentInFullscreen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameOfPresentedViewControllerViewInSuperview;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (long long)presentationStyle;
- (void)transitionDidFinish:(BOOL)a0;
- (struct { long long x0; long long x1; })__sizeClassPair;
- (BOOL)shouldRemovePresentersView;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (id)_firstCurrentContextChildInWindow;
- (BOOL)_mayChildGrabPresentedViewControllerView;

@end
