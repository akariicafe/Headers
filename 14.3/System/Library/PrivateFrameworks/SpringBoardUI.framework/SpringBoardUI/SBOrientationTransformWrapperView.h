@class NSArray, _SBOrientationTransformedContentView, NSMutableArray;

@interface SBOrientationTransformWrapperView : UIView {
    _SBOrientationTransformedContentView *_transformedView;
    NSMutableArray *_hitTestViews;
}

@property (nonatomic) long long contentOrientation;
@property (nonatomic) long long containerOrientation;
@property (nonatomic, getter=isCounterTransformView) BOOL counterTransformView;
@property (readonly, nonatomic) NSArray *contentViews;

- (void)bringContentSubviewToFront:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })convertTransformFromContentInterfaceOrientationToContainerInterfaceOrientation:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (struct CGPoint { double x0; double x1; })convertPointFromContentInterfaceOrientationToContainerInterfaceOrientation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromContainerInterfaceOrientationToContentInterfaceOrientation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeGestureRecognizerFromTransformedView:(id)a0;
- (void)_updateGeometry;
- (void)addGestureRecognizerToTransformedView:(id)a0;
- (struct CGSize { double x0; double x1; })_referenceContainerSize;
- (struct CGPoint { double x0; double x1; })convertPointFromContainerInterfaceOrientationToContentInterfaceOrientation:(struct CGPoint { double x0; double x1; })a0;
- (void)addContentView:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })convertTransformFromContainerInterfaceOrientationToContentInterfaceOrientation:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)addHitTestView:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromContentInterfaceOrientationToContainerInterfaceOrientation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)description;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
