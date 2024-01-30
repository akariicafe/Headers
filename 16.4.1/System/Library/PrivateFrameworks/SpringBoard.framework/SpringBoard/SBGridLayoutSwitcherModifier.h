@class NSString;

@interface SBGridLayoutSwitcherModifier : SBSwitcherModifier <PTSettingsKeyObserver> {
    struct CGPoint { double x; double y; } _previousContentOffset;
    BOOL _isScrollingForward;
}

@property (nonatomic) unsigned long long alignment;
@property (nonatomic) unsigned long long layoutDirection;
@property (readonly, nonatomic) double scale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)shadowOffsetForIndex:(unsigned long long)a0;
- (BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
- (double)scaleForIndex:(unsigned long long)a0;
- (id)visibleHomeAffordanceLayoutElements;
- (BOOL)_isIndexVisible:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })_contentSize;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (void)didMoveToParentModifier:(id)a0;
- (BOOL)shouldAnimateInsertionOrRemovalOfAppLayout:(id)a0 atIndex:(unsigned long long)a1;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (double)contentViewScale;
- (BOOL)isHomeAffordanceSupportedForAppLayout:(id)a0;
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)a0;
- (double)rotationAngleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (void)_applyPrototypeSettings;
- (id)adjustedContinuousExposeIdentifiersInStripFromPreviousIdentifiersInStrip:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (double)contentPageViewScaleForAppLayout:(id)a0 withScale:(double)a1;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)a0;
- (BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)a0;
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)a0;
- (id)handleSwitcherSettingsChangedEvent:(id)a0;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)a0;
- (double)snapshotScaleForAppLayout:(id)a0;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (id)scrollViewAttributes;
- (id)handleTransitionEvent:(id)a0;
- (struct CGPoint { double x0; double x1; })adjustedOffsetForOffset:(struct CGPoint { double x0; double x1; })a0 translation:(struct CGPoint { double x0; double x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 locationInView:(struct CGPoint { double x0; double x1; })a3 horizontalVelocity:(inout double *)a4 verticalVelocity:(inout double *)a5;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (struct CGPoint { double x0; double x1; })restingOffsetForScrollOffset:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (id)adjustedContinuousExposeIdentifiersInSwitcherFromPreviousIdentifiersInSwitcher:(id)a0 identifiersInStrip:(id)a1;
- (double)_cornerRadius;
- (double)minimumTranslationToKillIndex:(unsigned long long)a0;
- (id)appLayoutsToCacheSnapshots;
- (id)visibleAppLayouts;
- (id)handleScrollEvent:(id)a0;
- (struct CGPoint { double x0; double x1; })contentOffsetForIndex:(unsigned long long)a0 alignment:(long long)a1;
- (void)resetAdjustedScrollingState;
- (unsigned long long)_numberOfColumns;
- (double)_verticalSpacing;
- (double)_horizontalSpacing;
- (unsigned long long)_numberOfSpaces;
- (struct CGSize { double x0; double x1; })_scaledCardSize;
- (unsigned long long)_appLayoutIndexForSpaceIndex:(unsigned long long)a0;
- (double)_cardHeaderHeight;
- (unsigned long long)_columnForIndex:(unsigned long long)a0;
- (unsigned long long)_firstTrailingIndexForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_fittedContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForIndex:(unsigned long long)a0 ignoringScrollOffset:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameWithScaleAppliedForIndex:(unsigned long long)a0 ignoringScrollOffset:(BOOL)a1;
- (unsigned long long)_indexOfLeadingCard;
- (unsigned long long)_rowForIndex:(unsigned long long)a0;
- (id)initWithAlignment:(unsigned long long)a0 layoutDirection:(unsigned long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })visibleAppLayoutRangeForContentOffset:(struct CGPoint { double x0; double x1; })a0;

@end
