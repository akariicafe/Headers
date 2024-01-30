@class UISelectionGrabberCustomPath, CAShapeLayer, UISelectionGrabberDot, UITextRangeView;

@interface UISelectionGrabber : UIView {
    double m_screenScale;
    UISelectionGrabberDot *m_dotView;
    int _applicationDeactivationReason;
}

@property (readonly, nonatomic) CAShapeLayer *shapeLayer;
@property (readonly, nonatomic) UITextRangeView *hostView;
@property (nonatomic) BOOL isDotted;
@property (nonatomic) BOOL activeFlattened;
@property (nonatomic) BOOL alertFlattened;
@property (nonatomic) BOOL sheetFlattened;
@property (nonatomic) BOOL navigationTransitionFlattened;
@property (nonatomic) BOOL animating;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) UISelectionGrabberCustomPath *customPath;

+ (Class)layerClass;
+ (id)_grabberDot;

- (BOOL)isVertical;
- (void)_dynamicUserInterfaceTraitDidChange;
- (BOOL)isScrolling;
- (id)fillColor;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToWindow:(id)a0;
- (BOOL)autoscrolled;
- (void)dealloc;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)inputViewIsChanging;
- (BOOL)isRotating;
- (void).cxx_destruct;
- (void)animateGrabberInWithCompletion:(id /* block */)a0;
- (double)_defaultDotWidth;
- (id)_dotView;
- (void)animateGrabberOutWithCompletion:(id /* block */)a0;
- (id)bezierPathFromCustomPath:(id)a0;
- (void)canExpandAfterAlert:(id)a0;
- (void)canExpandAfterBecomeActive:(id)a0;
- (void)canExpandAfterNavigationTransition:(id)a0;
- (void)canExpandAfterSheet:(id)a0;
- (BOOL)clipDot:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)dotIsVisibleInDocument:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isPointedDown;
- (BOOL)isPointedLeft;
- (BOOL)isPointedRight;
- (BOOL)isPointedUp;
- (BOOL)isScaling;
- (void)mustFlattenForAlert:(id)a0;
- (void)mustFlattenForNavigationTransition:(id)a0;
- (void)mustFlattenForResignActive:(id)a0;
- (void)mustFlattenForSheet:(id)a0;
- (void)redrawDotForScale:(double)a0;
- (void)saveDeactivationReason:(id)a0;
- (BOOL)scroller:(id)a0 fullyContainSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)transitionDot:(long long)a0 completion:(id /* block */)a1;
- (void)updateDot;
- (void)updatePathForBoundsChangeIfNecessary;

@end
