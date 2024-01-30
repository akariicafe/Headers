@class UITextRangeView, UISelectionGrabberDot;

@interface UISelectionGrabber : UIView {
    double m_screenScale;
    UISelectionGrabberDot *m_dotView;
    int _applicationDeactivationReason;
}

@property (readonly, nonatomic) UITextRangeView *hostView;
@property (nonatomic) BOOL isDotted;
@property (nonatomic) BOOL activeFlattened;
@property (nonatomic) BOOL alertFlattened;
@property (nonatomic) BOOL navigationTransitionFlattened;
@property (nonatomic) BOOL animating;
@property (nonatomic) long long orientation;

+ (id)_grabberDot;

- (BOOL)isVertical;
- (void)mustFlattenForAlert:(id)a0;
- (void)canExpandAfterAlert:(id)a0;
- (void)saveDeactivationReason:(id)a0;
- (void)mustFlattenForResignActive:(id)a0;
- (void)canExpandAfterBecomeActive:(id)a0;
- (void)mustFlattenForNavigationTransition:(id)a0;
- (void)canExpandAfterNavigationTransition:(id)a0;
- (BOOL)inputViewIsChanging;
- (BOOL)dotIsVisibleInDocument:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)scroller:(id)a0 fullyContainSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)animateGrabberInWithCompletion:(id /* block */)a0;
- (void)animateGrabberOutWithCompletion:(id /* block */)a0;
- (void)redrawDotForScale:(double)a0;
- (void)transitionDot:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)removeFromSuperview;
- (BOOL)isScrolling;
- (void)setHidden:(BOOL)a0;
- (id)_dotView;
- (BOOL)clipDot:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isRotating;
- (void)didMoveToSuperview;
- (void)updateDot;
- (BOOL)isScaling;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)autoscrolled;
- (BOOL)isPointedUp;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isPointedDown;
- (BOOL)isPointedLeft;
- (BOOL)isPointedRight;

@end
