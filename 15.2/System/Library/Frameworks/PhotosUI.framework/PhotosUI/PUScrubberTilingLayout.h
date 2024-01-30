@class NSIndexPath, NSMutableDictionary;
@protocol PUScrubberTilingLayoutDelegate;

@interface PUScrubberTilingLayout : PUSectionedTilingLayout {
    struct CGSize { double width; double height; } _slitSize;
    NSIndexPath *_currentItemIndexPath;
    double _loupeWidth;
    NSIndexPath *_loupeNeighborIndexPath;
    NSMutableDictionary *_layoutInfosByIndexPathByTileKind;
    struct { BOOL respondsToAspectRatioForItemAtIndexPath; BOOL respondsToExpandedWidthForItemAtIndexPath; BOOL respondsToShouldShowTimeIndicatorForExpandedItemAtIndexPath; } _delegateFlags;
}

@property (weak, nonatomic) id<PUScrubberTilingLayoutDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } interItemSpacing;
@property (nonatomic) double playheadVerticalOverhang;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentPadding;
@property (nonatomic) double slitAspectRatio;
@property (nonatomic) double maxAspectRatio;
@property (readonly, nonatomic) NSIndexPath *currentItemIndexPath;
@property (readonly, nonatomic) double currentItemTransitionProgress;
@property (readonly, nonatomic) double currentItemFocusProgress;
@property (readonly, nonatomic) NSIndexPath *loupeIndexPath;
@property (readonly, nonatomic) double loupeTransitionProgress;
@property (retain, nonatomic) NSIndexPath *overrideLoupeIndexPath;
@property (nonatomic) double loupeAmount;
@property (retain, nonatomic) NSIndexPath *expandedItemIndexPath;
@property (nonatomic) BOOL onlyShowExpandedItem;
@property (nonatomic) BOOL showPlayheadForExpandedItem;
@property (nonatomic) double expandedItemWidth;
@property (nonatomic) double expandedItemPlayheadProgress;
@property (nonatomic) BOOL snapToExpandedItem;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } focusPoint;

- (id)_indexPathOfItemClosestToAbscissa:(double)a0;
- (id)layoutInfoForTileWithIndexPath:(id)a0 kind:(id)a1;
- (id)preferredScrollInfo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (struct CGSize { double x0; double x1; })sizeForSection:(long long)a0 numberOfItems:(long long)a1;
- (struct CGSize { double x0; double x1; })estimatedSectionSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRectForScrollingToItemAtIndexPath:(id)a0 scrollPosition:(long long)a1;
- (void)addLayoutInfosForTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 section:(long long)a1 toSet:(id)a2;
- (void)invalidateLayoutWithContext:(id)a0;
- (double)_focusAbscissa;
- (void)prepareLayout;
- (BOOL)_shouldShowTimeIndicatorForExpandedItemAtIndexPath:(id)a0;
- (float)_aspectRatioForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })_slitSize;
- (long long)_indexOfItemClosestToAbscissa:(double)a0 inSection:(long long)a1;
- (id)_createLayoutInfoForTileWithIndexPath:(id)a0 kind:(id)a1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_normalizedTransitionProgressFrom:(id)a0 withAbscissa:(double)a1 outNeighborIndexPath:(out id *)a2;
- (void).cxx_destruct;
- (double)_loupeAmountFor:(id)a0;
- (id)init;
- (double)_transformedHorizontalOffsetForIndexPath:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForItemAtIndexPath:(id)a0 withLoupeTransform:(BOOL)a1 withExpanded:(BOOL)a2;
- (struct CGSize { double x0; double x1; })_transformedSizeForIndexPath:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRectForScrollingToItemAtIndexPath:(id)a0 transitionProgress:(double)a1;
- (id)indexPathOfItemClosestToPoint:(struct CGPoint { double x0; double x1; })a0;

@end
