@class UIViewController, UIView;

@interface _UIViewControllerOneToOneTransitionContext : _UIViewControllerTransitionContext {
    BOOL _isToViewSet;
    BOOL _isFromViewSet;
    UIView *_toView;
    UIView *_fromView;
}

@property (retain, nonatomic, setter=_setFromViewController:) UIViewController *fromViewController;
@property (retain, nonatomic, setter=_setToViewController:) UIViewController *toViewController;
@property (retain, nonatomic, getter=_fromView, setter=_setFromView:) UIView *fromView;
@property (retain, nonatomic, getter=_toView, setter=_setToView:) UIView *toView;
@property (nonatomic, setter=_setFromStartFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromStartFrame;
@property (nonatomic, setter=_setFromEndFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromEndFrame;
@property (nonatomic, setter=_setToEndFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } toEndFrame;
@property (nonatomic, setter=_setToStartFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } toStartFrame;
@property (nonatomic, setter=_setIsDeferred:) BOOL _isDeferred;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForViewController:(id)a0;
- (id)viewControllerForKey:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForViewController:(id)a0;
- (id)viewForKey:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
