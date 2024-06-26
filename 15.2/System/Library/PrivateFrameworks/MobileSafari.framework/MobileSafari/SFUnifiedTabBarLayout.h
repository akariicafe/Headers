@class NSMutableIndexSet, NSIndexSet, NSArray, SFUnifiedBarMetrics, UIScrollView, SFUnifiedBarItem, SFUnifiedTabBarItemArrangement;

@interface SFUnifiedTabBarLayout : NSObject {
    UIScrollView *_scrollView;
    BOOL _flipped;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visibleRectOverride;
    struct CGSize { double width; double height; } _lastLayoutSize;
    struct CGPoint { double x; double y; } _lastLayoutMidpoint;
    struct CGPoint { double x; double y; } _lastLayoutContentOffset;
    double _activeItemWidth;
    double _itemWidth;
    double _squishedActiveItemWidth;
    double _leadingItemOffset;
    BOOL _standalone;
    double _itemSpacing;
    double _transitioningItemScale;
    double _scrollSlowingInset;
    NSMutableIndexSet *_visibleItemIndexes;
    NSMutableIndexSet *_occludedItemIndexes;
    BOOL _expandedItemIsCentered;
    double _offsetForCenteringExpandedItem;
    double _activeItemWidthWhenNotExpanded;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _safeArea;
@property (readonly, nonatomic) SFUnifiedTabBarItemArrangement *itemArrangement;
@property (retain, nonatomic) SFUnifiedBarMetrics *barMetrics;
@property (nonatomic) unsigned long long sizeClass;
@property (nonatomic) struct CGPoint { double x; double y; } midpointForCenteredContent;
@property (readonly, nonatomic) BOOL activeItemIsSquished;
@property (readonly, nonatomic) BOOL contentIsCentered;
@property (readonly, nonatomic) BOOL centersActiveItemWhenExpanded;
@property (readonly, nonatomic) BOOL horizontalSpaceIsExtremelyConstrained;
@property (readonly, nonatomic) BOOL isCurrentlyScrollable;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) double maximumActiveItemWidth;
@property (readonly, nonatomic) NSIndexSet *visibleItemIndexes;
@property (readonly, nonatomic) NSArray *visibleItems;
@property (readonly, nonatomic) unsigned long long indexOfCenterItem;
@property (readonly, nonatomic) unsigned long long maximumNumberOfVisibleItems;
@property (retain, nonatomic) SFUnifiedBarItem *hoveringItem;

+ (double)minimumInactiveItemWidthForSizeClass:(unsigned long long)a0;

- (void)_updateContentSize;
- (id)itemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItem:(id)a0;
- (void).cxx_destruct;
- (double)_minimumItemSpacing;
- (double)_maximumItemSpacing;
- (void)updateItemSizesIfNeeded;
- (void)_determineOffsetForCenteringExpandedItem;
- (void)updateItemSizes;
- (void)_updateItemWidths;
- (void)_updateSquishedActiveItemWidth;
- (double)_minimumInactiveItemWidth;
- (double)_effectiveMinimumActiveItemWidth;
- (double)_maximumActiveItemWidthForCenteringExpandedItem;
- (double)_offsetForItemAtIndex:(unsigned long long)a0;
- (double)_pinnedActiveItemOffsetSquishingActiveItem:(BOOL)a0 activeItemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unpinnedFrameForItemAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustedActiveItemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pinActiveItem:(BOOL)a1 squishActiveItem:(BOOL)a2 centerExpandedItem:(BOOL)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentArea;
- (double)_zPositionForItem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_slideFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forItemAtIndex:(unsigned long long)a1 pinnedActiveItemOffset:(double)a2;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; double x2; double x3; BOOL x4; BOOL x5; double x6; })_scrollSlowingLayoutInfoForItemAtIndex:(unsigned long long)a0 withLayoutInfo:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; double x2; double x3; BOOL x4; BOOL x5; double x6; })a1 activeItemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_enumerateFramesForItemsAtIndexes:(id)a0 pinActiveItem:(BOOL)a1 usingBlock:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_activeItemPinnableArea;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForItem:(id)a0 withOffset:(double)a1 pinActiveItem:(BOOL)a2 squishActiveItem:(BOOL)a3 centerExpandedItem:(BOOL)a4;
- (double)_widthForItem:(id)a0;
- (struct CGPoint { double x0; double x1; })_midpointForCenteredContentInScrollView;
- (double)_distanceToEdgeForItemAtIndex:(unsigned long long)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 activeItemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 occludedEdge:(unsigned long long *)a3;
- (double)_minimumHorizontalOffsetForOccludedItems;
- (unsigned long long)_indexOfItemClosestToPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_insetsForScrollingToItemAtIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })_contentOffsetForScrollingToRegionWithMinX:(double)a0 maxX:(double)a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_insetsForActiveItemPinnableArea;
- (id)indexesOfItemsVisibleInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_insetToRevealNextItem;
- (double)_minimumActiveItemWidth;
- (double)_minimumActiveItemWidthRatio;
- (id)initWithItemArrangement:(id)a0 configuration:(id)a1;
- (void)enumerateLayoutForItemsAtIndexes:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateInitialLayoutForAppearingItemsAtIndexes:(id)a0 withDistanceToScroll:(double)a1 usingBlock:(id /* block */)a2;
- (void)enumerateFinalLayoutForDisappearingItemsAtIndexes:(id)a0 withDistanceScrolled:(double)a1 usingBlock:(id /* block */)a2;
- (id)itemClosestToPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })contentOffsetForScrollingToItemAtIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })contentOffsetForScrollingToDroppingItems;
- (void)setItemAtIndex:(unsigned long long)a0 isVisible:(BOOL)a1;
- (void)setItemAtIndex:(unsigned long long)a0 isOccluded:(BOOL)a1;
- (id)itemsVisibleInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
