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

- (id)_constants;
- (id)_leadingSwipeActionsConfigurationForIndexPath:(id)a0;
- (id)_trailingSwipeActionsConfigurationForIndexPath:(id)a0;
- (BOOL)_adjustsLayoutToDrawTopSeparatorInSection:(long long)a0 interactionState:(id)a1;
- (double)_alignedContentMarginGivenMargin:(double)a0;
- (BOOL)_shouldHideBottomSeparatorAtIndexPath:(id)a0 forGrouping:(unsigned long long)a1 interactionState:(id)a2;
- (void)_transformFittingLayoutAttributes:(id)a0 interactionState:(id)a1;
- (void)_willBeginSwiping;
- (void)_didEndSwiping;
- (void)_enrichLayoutAttributes:(id)a0 interactionState:(id)a1;
- (id)_generateListSectionDataForLayoutAttributes:(id)a0 interactionState:(id)a1;
- (BOOL)prefersListSolver;
- (BOOL)_shouldDrawSeparatorAtBottom:(BOOL)a0 ofSection:(long long)a1 interactionState:(id)a2;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveBoundarySeparatorInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)_isRTL;
- (BOOL)_supportsBandSelection;
- (void)_updateStyleForSwipeActionsConfiguration:(id)a0;
- (BOOL)_hasHeaderFooterBelowLastItemInSection:(long long)a0 interactionState:(id)a1;
- (void)_configureLayoutAttributesWithDefaultMasking:(id)a0;
- (unsigned long long)_maskedCornersForBackgroundOfItemWithSelectionGrouping:(unsigned long long)a0;
- (BOOL)shouldRestrictOrthogonalAxisDuringInteractiveMovement;
- (id)_callback;
- (id)_separatorConfigurationForItemAtIndexPath:(id)a0 withSelectionGrouping:(unsigned long long)a1 interactionState:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_defaultLayoutMarginsInsideSection;
- (long long)_separatorInsetBehaviorAtBottom:(BOOL)a0 ofSection:(long long)a1 interactionState:(id)a2;
- (void)_configureLayoutAttributesForSidebarPlainCell:(id)a0;
- (double)_effectiveCornerRadius;
- (id)initWithConfiguration:(id)a0 layoutEnvironment:(id)a1;
- (BOOL)_pinnedSupplementariesShouldOverlap;
- (void)_configureLayoutAttributesWithInsetGroupedMasking:(id)a0 stylesFirstItemAsHeader:(BOOL)a1;
- (BOOL)_shouldInvalidateForScrollViewLayoutAdjustmentsChange;
- (id)initWithConfiguration:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_defaultLayoutMarginsForSupplementaryViews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveCollectionViewLayoutMarginsForAppearanceStyle:(long long)a0 forUseAsContentInsets:(BOOL)a1;
- (BOOL)_shouldHideTopSeparatorAtIndexPath:(id)a0 interactionState:(id)a1;
- (BOOL)_useRoundedSwipeActions;
- (id)_preferredContainerBackgroundColor;
- (void).cxx_destruct;
- (BOOL)_hasHorizontalInsets;
- (void)_configureLayoutAttributes:(id)a0 forSeparatorAtBottom:(BOOL)a1 preferredConfiguration:(id)a2 interactionState:(id)a3;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_defaultSectionContentInsetsForAppearanceStyle:(long long)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_sectionPreferredTopSeparatorInsetsWithBottomInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0 hasCustomInsets:(out BOOL *)a1;
- (id)_invalidationContextForBackgroundChangeAtIndexPath:(id)a0 interactionState:(id)a1;
- (BOOL)_wantsSwipeActions;
- (BOOL)_useChromelessSectionHeaderFooterBehaviors;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_configureLayoutAttributesForBackgroundDecoration:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveSectionHorizontalInsets;
- (BOOL)__isLastSection:(long long)a0;
- (void)_transformPreferredLayoutAttributes:(id)a0 interactionState:(id)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_sectionPreferredBottomSeparatorInsetsForIndexPath:(id)a0;
- (double)_paddingToBoundarySupplementaries;
- (BOOL)__isLastItemInSection:(id)a0;
- (void)_configureLayoutAttributesForSwipeActionMasking:(id)a0;
- (void)_configureLayoutAttributesForPlainCell:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_defaultDirectionalLayoutMarginsInsideSection;
- (id)_effectiveBackgroundColor;

@end
