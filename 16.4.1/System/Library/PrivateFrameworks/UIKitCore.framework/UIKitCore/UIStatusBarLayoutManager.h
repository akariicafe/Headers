@class NSNumber, UIStatusBarForegroundView, UIStatusBarItemView;

@interface UIStatusBarLayoutManager : NSObject {
    int _region;
    UIStatusBarItemView *_itemViews[52];
}

@property (weak, nonatomic) UIStatusBarForegroundView *foregroundView;
@property (nonatomic) BOOL persistentAnimationsEnabled;
@property (readonly, nonatomic) BOOL usesVerticalLayout;
@property (retain, nonatomic) NSNumber *assignedStartPosition;

- (void)dealloc;
- (void).cxx_destruct;
- (id)itemViewOfType:(int)a0;
- (void)_addOriginDelta:(double)a0 toPoint:(struct CGPoint { double x0; double x1; } *)a1;
- (id)_createViewForItem:(id)a0 withData:(id)a1 actions:(int)a2;
- (double)_dimensionForSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForItemView:(id)a0 startPosition:(double)a1 firstView:(BOOL)a2;
- (id)_itemViews;
- (id)_itemViewsSortedForLayout;
- (double)_positionAfterPlacingItemView:(id)a0 startPosition:(double)a1 firstView:(BOOL)a2;
- (void)_positionNewItemViewsWithEnabledItems:(BOOL *)a0;
- (void)_prepareEnabledItemType:(int)a0 withEnabledItems:(BOOL *)a1 withData:(id)a2 actions:(int)a3 itemAppearing:(BOOL *)a4 itemDisappearing:(BOOL *)a5;
- (BOOL)_processDelta:(double)a0 forView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_repositionedNewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sizeDelta:(double)a1;
- (void)_setOrigin:(double)a0 forPoint:(struct CGPoint { double x0; double x1; } *)a1;
- (double)_sizeNeededForItemView:(id)a0;
- (double)_startPosition;
- (BOOL)_updateItemView:(id)a0 withData:(id)a1 actions:(int)a2 animated:(BOOL)a3;
- (id)_viewForItem:(id)a0;
- (id)allItemViews;
- (void)clearOverlapFromItems:(id)a0;
- (double)distributeOverlap:(double)a0 amongItems:(id)a1;
- (id)initWithRegion:(int)a0 foregroundView:(id)a1 usesVerticalLayout:(BOOL)a2;
- (BOOL)itemIsVisible:(id)a0;
- (void)itemView:(id)a0 sizeChangedBy:(double)a1;
- (void)makeVisibleItemsPerformPendedActions;
- (void)positionInvisibleItems;
- (BOOL)prepareDoubleHeightItemWithEnabledItems:(BOOL *)a0;
- (BOOL)prepareEnabledItems:(BOOL *)a0 withData:(id)a1 actions:(int)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForItems:(id)a0;
- (void)reflowWithVisibleItems:(id)a0 duration:(double)a1;
- (void)removeDisabledItems:(BOOL *)a0;
- (double)removeOverlap:(double)a0 fromItems:(id)a1;
- (void)setVisibilityOfAllItems:(BOOL)a0;
- (void)setVisibilityOfItem:(id)a0 visible:(BOOL)a1;
- (void)setVisibilityOfItemType:(int)a0 visible:(BOOL)a1;
- (double)sizeNeededForItem:(id)a0;
- (double)sizeNeededForItems:(id)a0;
- (BOOL)updateDoubleHeightItem;
- (BOOL)updateItemsWithData:(id)a0 actions:(int)a1 animated:(BOOL)a2;
- (id)visibleItemViewAtPoint:(struct CGPoint { double x0; double x1; })a0 inForegroundView:(id)a1;

@end
