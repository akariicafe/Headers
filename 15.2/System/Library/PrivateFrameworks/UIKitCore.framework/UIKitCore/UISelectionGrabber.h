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

+ (id)_grabberDot;
+ (Class)layerClass;

- (id)fillColor;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)updateDot;
- (void)didMoveToSuperview;
- (BOOL)isScaling;
- (BOOL)isPointedUp;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isPointedDown;
- (BOOL)isPointedLeft;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isPointedRight;
- (void)mustFlattenForAlert:(id)a0;
- (void)canExpandAfterAlert:(id)a0;
- (void)saveDeactivationReason:(id)a0;
- (void)mustFlattenForResignActive:(id)a0;
- (void)mustFlattenForSheet:(id)a0;
- (void)canExpandAfterBecomeActive:(id)a0;
- (void)mustFlattenForNavigationTransition:(id)a0;
- (void)canExpandAfterNavigationTransition:(id)a0;
- (void)canExpandAfterSheet:(id)a0;
- (id)bezierPathFromCustomPath:(id)a0;
- (BOOL)dotIsVisibleInDocument:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)scroller:(id)a0 fullyContainSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_dotView;
- (void)animateGrabberInWithCompletion:(id /* block */)a0;
- (void)redrawDotForScale:(double)a0;
- (BOOL)clipDot:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)animateGrabberOutWithCompletion:(id /* block */)a0;
- (void)updatePathForBoundsChangeIfNecessary;
- (void)transitionDot:(long long)a0 completion:(id /* block */)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isVertical;
- (BOOL)isScrolling;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isRotating;
- (BOOL)inputViewIsChanging;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)autoscrolled;
- (void)willMoveToWindow:(id)a0;
- (void)removeFromSuperview;
- (void)dealloc;

@end
