@interface UICollectionViewCellAccessibility : __UICollectionViewCellAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (void)willRemoveSubview:(id)a0;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityImplementsDefaultRowRange;
- (id)_accessibilityIndexPath;
- (id)accessibilityDropPointDescriptors;
- (id)accessibilityDragSourceDescriptors;
- (void)prepareForReuse;
- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)accessibilityTraits;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (BOOL)_isEligibleForFocusInteraction;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (id)axData;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (id)_accessibilityUserTestingChildren;
- (void)addSubview:(id)a0;
- (BOOL)accessibilityScrollToVisible;
- (id)_privateAccessibilityCustomActions;
- (void)insertSubview:(id)a0 atIndex:(long long)a1;
- (BOOL)_accessibilityIsInCollectionCell;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityIndexPathAsRange;
- (id)_accessibilityParentCollectionView;
- (void)accessibilityClearInternalData;
- (void)_accessibilityClearInternalCaches;
- (id)_accessibilityCachedChildren;
- (id)_axCustomActionsForActions:(id)a0;
- (id)_accessibilityChildren;
- (id)_accessibilityParentScrollView;
- (BOOL)_axContentViewHasSingleFocusableSubview;
- (void)accessibilityReuseChildren:(id)a0 forMockParent:(id)a1;
- (BOOL)_accessibilityIsOutsideParentBounds;

@end
