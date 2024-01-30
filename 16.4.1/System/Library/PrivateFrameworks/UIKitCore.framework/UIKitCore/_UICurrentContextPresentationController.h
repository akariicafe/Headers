@interface _UICurrentContextPresentationController : UIPresentationController

- (long long)presentationStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (void)transitionDidFinish:(BOOL)a0;
- (BOOL)_mayChildGrabPresentedViewControllerView;
- (struct { long long x0; long long x1; })__sizeClassPair;
- (id)_firstCurrentContextChildInWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameOfPresentedViewControllerViewInSuperview;
- (BOOL)shouldRemovePresentersView;

@end
