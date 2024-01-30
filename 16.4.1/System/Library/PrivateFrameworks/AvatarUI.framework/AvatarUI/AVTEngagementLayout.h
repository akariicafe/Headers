@interface AVTEngagementLayout : NSObject <AVTCollectionViewLayout>

@property (readonly, nonatomic) struct CGSize { double width; double height; } defaultCellSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } engagedCellSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } engagementBoundsInsets;
@property (nonatomic) BOOL useEngagementSpacing;
@property (readonly, copy, nonatomic) id /* block */ interItemSpacingProvider;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetsToCenterFirstAndLastItemsGivenContainerSize:(struct CGSize { double x0; double x1; })a0 itemSize:(struct CGSize { double x0; double x1; })a1;
+ (double)minimumInterItemSpacingForVisibileBoundsSize:(struct CGSize { double x0; double x1; })a0 defaultCellSize:(struct CGSize { double x0; double x1; })a1 engagedCellSize:(struct CGSize { double x0; double x1; })a2;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForElementAtIndex:(long long)a0 visibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)indexesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 visibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 numberOfItems:(long long)a2;
- (double)contentTrailingXForVisibleSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })cellSizeForEngagement:(double)a0;
- (struct CGPoint { double x0; double x1; })centerForCenteringElementAtIndex:(long long)a0 visibleBoundsSize:(struct CGSize { double x0; double x1; })a1 proposedOrigin:(struct CGPoint { double x0; double x1; })a2;
- (double)contentOriginXForVisibleSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })contentSizeForVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 numberOfItems:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })engagementBoundsForContainerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)engagementForValue:(double)a0 withRangeMin:(double)a1 rangeMax:(double)a2 rangePeak:(double)a3;
- (double)engagementForValue:(double)a0 withRangeMin:(double)a1 rangeMax:(double)a2 rangePeakBegin:(double)a3 rangePeakEnd:(double)a4;
- (struct CGSize { double x0; double x1; })engagementSizeForVisibleBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForDisappearingElementAtOriginForVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForElementAfterElementEndingAt:(double)a0 engagementBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 verticalBounds:(struct { double x0; double x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForElementAtIndex:(long long)a0 visibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 engagementBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 verticalBounds:(struct { double x0; double x1; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForElementBeforeElementStartingAt:(double)a0 engagementBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 verticalBounds:(struct { double x0; double x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForElementBeforeOriginForVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithDefaultCellSize:(struct CGSize { double x0; double x1; })a0 engagedCellSize:(struct CGSize { double x0; double x1; })a1 baseInteritemSpacing:(double)a2;
- (id)initWithDefaultCellSize:(struct CGSize { double x0; double x1; })a0 engagedCellSize:(struct CGSize { double x0; double x1; })a1 interItemSpacingProvider:(id /* block */)a2;
- (id)initWithDefaultCellSize:(struct CGSize { double x0; double x1; })a0 engagedCellSize:(struct CGSize { double x0; double x1; })a1 useEngagementSpacing:(BOOL)a2 interItemSpacingProvider:(id /* block */)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForAppearingElementAtOriginForVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)interitemSpacingForEngagement:(double)a0;
- (double)spacingAfterElementEndingAt:(double)a0 engagementBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)spacingBeforElementStartingAt:(double)a0 engagementBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)xAxisScale;

@end
