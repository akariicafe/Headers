@class NSString;

@interface SBGridLayoutSwitcherModifier : SBSwitcherModifier <PTSettingsKeyObserver> {
    struct CGPoint { double x; double y; } _previousContentOffset;
    BOOL _isScrollingForward;
}

@property (nonatomic) unsigned long long alignment;
@property (nonatomic) unsigned long long layoutDirection;
@property (nonatomic) unsigned long long scrollAxis;
@property (nonatomic) unsigned long long fixedGroupingSize;
@property (nonatomic) double cardScale;
@property (nonatomic, getter=isUsingFixedCardSize) BOOL usesFixedCardSize;
@property (nonatomic) struct CGSize { double width; double height; } fixedCardSize;
@property (nonatomic) BOOL centersContentVertically;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })spacing;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (double)rotationAngleForIndex:(unsigned long long)a0;
- (double)contentViewScale;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })restingOffsetForScrollOffset:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (double)contentPageViewScaleForAppLayout:(id)a0;
- (unsigned long long)numberOfRows;
- (double)shadowOffsetForIndex:(unsigned long long)a0;
- (BOOL)shouldAnimateInsertionOrRemovalOfAppLayout:(id)a0 atIndex:(unsigned long long)a1;
- (id)visibleHomeAffordanceLayoutElements;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (BOOL)isResizeGrabberVisibleForAppLayout:(id)a0;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)a0;
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)a0;
- (BOOL)_isIndexVisible:(unsigned long long)a0;
- (BOOL)isHomeAffordanceSupportedForAppLayout:(id)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })_contentSize;
- (double)_cardCornerRadiusInSwitcher;
- (unsigned long long)_numberOfColumns;
- (id)handleTransitionEvent:(id)a0;
- (id)scrollViewAttributes;
- (id)visibleAppLayouts;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (void)didMoveToParentModifier:(id)a0;
- (void)_applyPrototypeSettings;
- (double)minimumTranslationToKillIndex:(unsigned long long)a0;
- (id)handleSwitcherSettingsChangedEvent:(id)a0;
- (double)_verticalSpacing;
- (unsigned long long)_numberOfRows;
- (struct CGPoint { double x0; double x1; })adjustedOffsetForOffset:(struct CGPoint { double x0; double x1; })a0 translation:(struct CGPoint { double x0; double x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 locationInView:(struct CGPoint { double x0; double x1; })a3 horizontalVelocity:(inout double *)a4 verticalVelocity:(inout double *)a5;
- (double)snapshotScaleForAppLayout:(id)a0;
- (void)resetAdjustedScrollingState;
- (struct CGPoint { double x0; double x1; })contentOffsetForIndex:(unsigned long long)a0 alignment:(long long)a1;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)a0;
- (id)handleScrollEvent:(id)a0;
- (double)_horizontalSpacing;
- (double)_leadingPadding;
- (struct CGSize { double x0; double x1; })_cardSize;
- (unsigned long long)_indexOfLeadingCard;
- (struct CGSize { double x0; double x1; })_fittedContentSize;
- (double)_cardHeaderHeight;
- (double)_gridSwitcherPageScale;
- (id)initWithScrollAxis:(unsigned long long)a0 fixedGroupingSize:(unsigned long long)a1 cardScale:(double)a2 alignment:(unsigned long long)a3 layoutDirection:(unsigned long long)a4;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })visibleAppLayoutRangeForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForIndex:(unsigned long long)a0 ignoringScrollOffset:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameWithScaleAppliedForIndex:(unsigned long long)a0 ignoringScrollOffset:(BOOL)a1;
- (double)_trailingPadding;
- (struct CGSize { double x0; double x1; })_scaledCardSize;
- (unsigned long long)_firstTrailingIndexForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)_rowForIndex:(unsigned long long)a0;
- (unsigned long long)_columnForIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })fittedContentSize;

@end
