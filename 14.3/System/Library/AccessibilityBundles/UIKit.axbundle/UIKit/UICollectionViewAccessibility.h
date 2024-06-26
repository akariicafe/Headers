@interface UICollectionViewAccessibility : __UICollectionViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (void)reloadData;
- (id)_dequeueReusableViewOfKind:(id)a0 withIdentifier:(id)a1 forIndexPath:(id)a2 viewCategory:(unsigned long long)a3;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityShouldIncludeArrowKeyCommandsForDirectionalFocusMovement;
- (id)_accessibilitySortedElementsWithin;
- (BOOL)_accessibilityDrawsFocusRingWhenChildrenFocused;
- (id)_accessibilitySortedElementsWithinWithOptions:(id)a0;
- (BOOL)_accessibilityOpaqueElementScrollsContentIntoView;
- (id)preferredFocusedView;
- (long long)accessibilityContainerType;
- (void)dealloc;
- (BOOL)_accessibilityKeyCommandsShouldOverrideKeyCommands;
- (BOOL)_accessibilityShouldAvoidScrollingCollectionViewCells;
- (BOOL)_accessibilityDescendantElementAtIndexPathIsValid:(id)a0;
- (BOOL)beginInteractiveMovementForItemAtIndexPath:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleBounds;
- (void)insertSections:(id)a0;
- (void)insertItemsAtIndexPaths:(id)a0;
- (void)reloadSections:(id)a0;
- (void)reloadItemsAtIndexPaths:(id)a0;
- (void)deleteSections:(id)a0;
- (void)deleteItemsAtIndexPaths:(id)a0;
- (void)moveSection:(long long)a0 toSection:(long long)a1;
- (id)_accessibilitySupplementaryHeaderViewAtIndexPath:(id)a0;
- (id)_accessibilityReusableViewForOpaqueElement:(id)a0;
- (id)accessibilityElementForRow:(unsigned long long)a0 andColumn:(unsigned long long)a1;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (long long)accessibilityElementCount;
- (BOOL)isAccessibilityOpaqueElementProvider;
- (BOOL)_accessibilitySpeakThisShouldOnlyIncludeVisibleElements;
- (id)_accessibilityScannerGroupElements;
- (BOOL)_accessibilityHasOrderedChildren;
- (void)_reuseSupplementaryView:(id)a0;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (unsigned long long)_accessibilityScanningBehaviorTraits;
- (id)_accessibilityGroupIdentifier;
- (id)_accessibilitySupplementaryHeaderViews;
- (void)_moveItemAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (id)_accessibilitySupplementaryFooterViews;
- (id)axData;
- (void)cancelInteractiveMovement;
- (void)endInteractiveMovement;
- (BOOL)_reuseCell:(id)a0 notifyDidEndDisplaying:(BOOL)a1;
- (id)_accessibilitySelectedChildren;
- (id)_accessibilityUserTestingVisibleCells;
- (id)_fulfillPromisedFocusRegionForCell:(id)a0;
- (BOOL)accessibilityCollectionViewBehavesLikeUIViewAccessibility;
- (id)_accessibilityIndexPathOfDirectSubviewForDescendantElement:(id)a0 withElementKind:(id *)a1;
- (void)_axSetShouldIgnorePromiseRegions:(BOOL)a0;
- (void)setAccessibilityShouldBypassCollectionViewAccessibility:(BOOL)a0;
- (id)accessibilityCellForRowAtIndexPath:(id)a0;
- (void)setAccessibilityShouldSpeakItemReorderEvents:(BOOL)a0;
- (id)_axSpeakItemReorderEvents;
- (BOOL)_axIsReorderingItems;
- (void)_axSetSpeakItemReorderEvents:(id)a0;
- (void)_accessibilityInitializeInternalData:(id)a0;
- (void)_resetAXData;
- (void)_axSetIsReorderingItems:(BOOL)a0;
- (BOOL)accessibilityShouldSpeakItemReorderEvents;
- (void)_axHandleReusedView:(id)a0;
- (id)accessibilityCollectionCellElementForIndexPath:(id)a0;
- (BOOL)_accessibilityShouldUseCollectionViewCellAccessibilityElements;
- (BOOL)_accessibilityShouldDisableCellReuse;
- (id)accessibilityCreatePrepareCellForIndexPath:(id)a0;
- (id)_accessibilityFuzzyHitTest:(struct CGPoint { double x0; double x1; } *)a0 withEvent:(id)a1;
- (long long)_axGlobalRowForIndexPath:(id)a0;
- (BOOL)_accessibilityOverridesContainerProtocol;
- (id)_accessibilityOtherCollectionViewItems;
- (id)_axIndexPathForGlobalRow:(long long)a0;
- (id)_accessibilityScannerGroupElementsGroupedByRow;
- (id)_accessibilitySortedViewChildrenWithOptions:(id)a0;
- (void)_accessibilityEnsureViewsAroundAreLoaded;
- (id)_axIndexBar;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityBoundsOfCellsToLoad;
- (id)_accessibilityCollectionViewSupplementaryViews;
- (BOOL)_axGetShouldIgnorePromiseRegions;

@end
