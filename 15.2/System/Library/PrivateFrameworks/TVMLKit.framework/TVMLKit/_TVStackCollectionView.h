@class NSString, NSIndexPath;

@interface _TVStackCollectionView : UICollectionView <UIGestureRecognizerDelegate> {
    double _bottomPadding;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _gradientBoundsInsets;
    struct { unsigned char layoutBelowDisabled : 1; } _flags;
}

@property (nonatomic, getter=_gradientBoundsInsets, setter=_setGradientBoundsInsets:) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } _gradientBoundsInsets;
@property (readonly, copy, nonatomic) NSIndexPath *indexPathForLastFocusedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)layoutBelowIfNeeded;
- (void)_getGradientMaskBounds:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 startInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1 endInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a2 intensities:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleBounds;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_performWithoutLayoutBelow:(id /* block */)a0;
- (void)setBottomPaddingForVisibleBounds:(double)a0;

@end
