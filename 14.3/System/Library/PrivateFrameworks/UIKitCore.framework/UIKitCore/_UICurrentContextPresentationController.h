@interface _UICurrentContextPresentationController : UIPresentationController

- (BOOL)_shouldRespectDefinesPresentationContext;
- (long long)presentationStyle;
- (BOOL)shouldPresentInFullscreen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)transitionDidFinish:(BOOL)a0;
- (struct { long long x0; long long x1; })__sizeClassPair;
- (BOOL)_mayChildGrabPresentedViewControllerView;
- (BOOL)shouldRemovePresentersView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameOfPresentedViewControllerViewInSuperview;
- (id)_firstCurrentContextChildInWindow;

@end
