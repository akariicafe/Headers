@class NSString, _UICollectionViewListLayoutSectionConfiguration;
@protocol NSCollectionLayoutEnvironment_Private;

@interface _UICollectionViewListLayoutSection : NSCollectionLayoutSection <_UICollectionLayoutSectionCallback> {
    _UICollectionViewListLayoutSectionConfiguration *_configuration;
}

@property (readonly, nonatomic, getter=_layoutEnvironment) id<NSCollectionLayoutEnvironment_Private> layoutEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)_effectiveCornerRadius;
- (BOOL)_hasHorizontalInsets;
- (id)_trailingSwipeActionsConfigurationForIndexPath:(id)a0;
- (long long)_headerFooterPinningBehavior;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveCollectionViewLayoutMarginsForAppearanceStyle:(long long)a0 forUseAsContentInsets:(BOOL)a1;
- (BOOL)_wantsBandSelectionVisuals;
- (id)_separatorConfigurationForItemAtIndexPath:(id)a0 withSelectionGrouping:(unsigned long long)a1 considerNextCellGrouping:(BOOL)a2 interactionState:(id)a3;
- (void)_didEndSwiping;
- (void)_transformPreferredLayoutAttributes:(id)a0 interactionState:(id)a1;
- (long long)_separatorInsetBehaviorAtBottom:(BOOL)a0 ofSection:(long long)a1 interactionState:(id)a2;
- (id)_leadingSwipeActionsConfigurationForIndexPath:(id)a0;
- (void)_willBeginSwiping;
- (double)_paddingToBoundarySupplementaries;
- (void)_configureLayoutAttributesWithDefaultMasking:(id)a0;
- (double)_alignedContentMarginGivenMargin:(double)a0;
- (void)_configureLayoutAttributesForSidebarPlainCell:(id)a0;
- (unsigned long long)_maskedCornersForBackgroundOfItemWithSelectionGrouping:(unsigned long long)a0;
- (void)_updateStyleForSwipeActionsConfiguration:(id)a0;
- (void)_transformFittingLayoutAttributes:(id)a0 interactionState:(id)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveSectionHorizontalInsets;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_wantsSwipeActions;
- (BOOL)_adjustsLayoutToDrawTopSeparatorInSection:(long long)a0 interactionState:(id)a1;
- (BOOL)shouldRestrictOrthogonalAxisDuringInteractiveMovement;
- (id)_preferredContainerBackgroundColor;
- (void)_enrichLayoutAttributes:(id)a0 interactionState:(id)a1;
- (BOOL)_pinnedSupplementariesShouldOverlap;
- (BOOL)_useRoundedSwipeActions;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_sectionPreferredBottomSeparatorInsetsForIndexPath:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_sectionPreferredTopSeparatorInsetsWithBottomInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0 hasCustomInsets:(out BOOL *)a1;
- (id)initWithConfiguration:(id)a0 layoutEnvironment:(id)a1;
- (id)_descriptionProperties;
- (id)_constants;
- (id)_callback;
- (BOOL)_shouldHideTopSeparatorAtIndexPath:(id)a0 interactionState:(id)a1;
- (BOOL)__isLastSection:(long long)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_defaultSectionContentInsetsForAppearanceStyle:(long long)a0;
- (BOOL)_isRTL;
- (void)_configureLayoutAttributesForPlainSupplementaryView:(id)a0;
- (void)_configureLayoutAttributesForBackgroundDecoration:(id)a0;
- (id)_generateListSectionDataForLayoutAttributes:(id)a0 interactionState:(id)a1;
- (BOOL)__isLastItemInSection:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_horizontalInsetsForInsetsReference:(long long)a0;
- (BOOL)_hasHeaderFooterBelowLastItemInSection:(long long)a0 interactionState:(id)a1;
- (void)_configureLayoutAttributes:(id)a0 forSeparatorAtBottom:(BOOL)a1 preferredConfiguration:(id)a2 interactionState:(id)a3;
- (id)_effectiveBackgroundColor;
- (id)initWithConfiguration:(id)a0;
- (BOOL)_shouldInvalidateForScrollViewLayoutAdjustmentsChange;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_defaultLayoutMarginsForSupplementaryViewWithLayoutAttributes:(id)a0;
- (BOOL)prefersListSolver;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveSectionSupplementaryHorizontalInsets;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveBoundarySeparatorInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_configureLayoutAttributesForSwipeActionMasking:(id)a0;
- (void)_configureLayoutAttributesForPlainCell:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldDrawSeparatorAtBottom:(BOOL)a0 ofSection:(long long)a1 interactionState:(id)a2;
- (void)_configureLayoutAttributesWithInsetGroupedMasking:(id)a0 stylesFirstItemAsHeader:(BOOL)a1;
- (BOOL)_shouldHideBottomSeparatorAtIndexPath:(id)a0 forGrouping:(unsigned long long)a1 considerNextCellGrouping:(BOOL)a2 interactionState:(id)a3;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_defaultDirectionalLayoutMarginsInsideSection;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_defaultLayoutMarginsInsideSection;
- (id)_invalidationContextForCellBackgroundOrBottomSeparatorChangeAtIndexPath:(id)a0 interactionState:(id)a1 separatorOnly:(BOOL)a2;

@end
