@class NSString, NSIndexPath, UILongPressGestureRecognizer;
@protocol _TVCollectionViewDelegate;

@interface _TVCollectionView : UICollectionView <UIGestureRecognizerDelegate> {
    UILongPressGestureRecognizer *_longPressRecognizer;
    double _bottomPadding;
    struct { unsigned char _respondsToDidPlayItem : 1; unsigned char _respondsToDidLongPressItem : 1; unsigned char _respondsToCanBecomeFocused : 1; } _delegateFlags;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _gradientBoundsInsets;
    struct { unsigned char layoutBelowDisabled : 1; } _flags;
}

@property (weak, nonatomic) id<_TVCollectionViewDelegate> delegate;
@property (readonly, copy, nonatomic) NSIndexPath *indexPathForLastFocusedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)setScrollEnabled:(BOOL)a0;
- (void)reloadData;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)canBecomeFocused;
- (void)setDelegate:(id)a0;
- (void)_notifyDidScroll;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleBounds;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)layoutBelowIfNeeded;
- (void)_getGradientMaskBounds:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 startInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1 endInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a2 intensities:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a3;
- (void)_longPressAction:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_gradientBoundsInsets;
- (void)_performBlockWithLongPressedCellIndexPath:(id /* block */)a0;
- (void)_performWithoutLayoutBelow:(id /* block */)a0;
- (void)_setGradientBoundsInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setBottomPaddingForVisibleBounds:(double)a0;
- (void)_performBlockWithFocusedCellIndexPath:(id /* block */)a0;
- (void)_playButtonAction:(id)a0;

@end
