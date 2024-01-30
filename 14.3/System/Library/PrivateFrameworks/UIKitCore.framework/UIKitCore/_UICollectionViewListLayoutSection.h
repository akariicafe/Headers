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

- (id)_leadingSwipeActionsConfigurationForIndexPath:(id)a0;
- (id)_trailingSwipeActionsConfigurationForIndexPath:(id)a0;
- (double)_alignedContentMarginGivenMargin:(double)a0;
- (void)_configureLayoutAttributes:(id)a0 forSeparatorAtBottom:(BOOL)a1 interactionState:(id)a2;
- (void)_willBeginSwiping;
- (BOOL)_isRTL;
- (BOOL)_adjustsLayoutToMergeWithBarInSection:(long long)a0 interactionState:(id)a1;
- (void)_didEndSwiping;
- (void)_configureLayoutAttributesWithInsetGroupedMasking:(id)a0 stylesFirstItemAsHeader:(BOOL)a1;
- (id)_constants;
- (BOOL)_wantsSwipeActions;
- (id)_effectiveBackgroundColor;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveBoundarySeparatorInsetsFromConfiguration:(id)a0;
- (void)_configureLayoutAttributesForBackgroundDecoration:(id)a0;
- (unsigned long long)_maskedCornersForBackgroundOfItemWithSelectionGrouping:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_enrichLayoutAttributes:(id)a0 interactionState:(id)a1;
- (void)_updateStyleForSwipeActionsConfiguration:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveCollectionViewLayoutMarginsForAppearanceStyle:(long long)a0 forUseAsContentInsets:(BOOL)a1;
- (BOOL)_hasHorizontalInsets;
- (id)_preferredSizingCustomizationsForItemWithLayoutAttributes:(id)a0 interactionState:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_defaultLayoutMarginsInsideSection;
- (BOOL)__shouldDrawSeparatorAtBottom:(BOOL)a0 ofSection:(long long)a1 interactionState:(id)a2;
- (void)_configureLayoutAttributesForSwipeActionMasking:(id)a0;
- (BOOL)__isLastItemInSection:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_sectionPreferredDirectionalSeparatorInsetsForIndexPath:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (BOOL)__isLastSection:(long long)a0;
- (void)_configureLayoutAttributesWithDefaultMasking:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveSectionHorizontalInsets;
- (BOOL)_hasHeaderFooterBelowLastItemInSection:(long long)a0 interactionState:(id)a1;
- (void)_configureLayoutAttributesForPlainCell:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_defaultSectionContentInsetsForAppearanceStyle:(long long)a0;
- (void)_enrichPreferredLayoutAttributes:(id)a0 interactionState:(id)a1;
- (BOOL)shouldRestrictOrthogonalAxisDuringInteractiveMovement;
- (id)_callback;
- (id)_invalidationContextForBackgroundChangeAtIndexPath:(id)a0 interactionState:(id)a1;
- (BOOL)_shouldHideBottomSeparatorAtIndexPath:(id)a0 forGrouping:(unsigned long long)a1 interactionState:(id)a2;
- (void)_configureLayoutAttributesForSidebarPlainCell:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_preferredSeparatorInsetsFromCellLayoutAttributes:(id)a0;
- (id)initWithConfiguration:(id)a0 layoutEnvironment:(id)a1;
- (BOOL)_useRoundedSwipeActions;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_defaultDirectionalLayoutMarginsInsideSection;
- (BOOL)_shouldHideTopSeparatorAtIndexPath:(id)a0 interactionState:(id)a1;
- (BOOL)prefersListSolver;

@end
