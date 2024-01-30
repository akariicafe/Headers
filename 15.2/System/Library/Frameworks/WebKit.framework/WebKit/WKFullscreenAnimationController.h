@class NSString, UIViewController;
@protocol UIViewControllerContextTransitioning;

@interface WKFullscreenAnimationController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialMaskViewBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _finalMaskViewBounds;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _initialAnimatingViewTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _finalAnimatingViewTransform;
    struct CGPoint { double x; double y; } _initialMaskViewCenter;
    struct CGPoint { double x; double y; } _finalMaskViewCenter;
    struct RetainPtr<UIView> { void *m_ptr; } _maskView;
    struct RetainPtr<UIView> { void *m_ptr; } _animatingView;
    struct RetainPtr<id<UIViewControllerContextTransitioning>> { void *m_ptr; } _context;
    double _initialBackgroundAlpha;
    double _finalBackgroundAlpha;
}

@property (retain, nonatomic) UIViewController *viewController;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } finalFrame;
@property (nonatomic, getter=isAnimatingIn) BOOL animatingIn;
@property (readonly, nonatomic) id<UIViewControllerContextTransitioning> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;

- (void)startInteractiveTransition:(id)a0;
- (void)end:(BOOL)a0;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)updateWithProgress:(double)a0;
- (void).cxx_destruct;
- (void)_createViewsForTransitionContext:(id)a0;
- (void)configureInitialAndFinalStatesForTransition:(id)a0;
- (void)updateWithProgress:(double)a0 scale:(double)a1 translation:(struct CGSize { double x0; double x1; })a2 anchor:(struct CGPoint { double x0; double x1; })a3;
- (void)updateWithProgress:(double)a0 translation:(struct CGSize { double x0; double x1; })a1 anchor:(struct CGPoint { double x0; double x1; })a2;
- (void)dealloc;
- (void)animationEnded:(BOOL)a0;
- (id).cxx_construct;

@end
