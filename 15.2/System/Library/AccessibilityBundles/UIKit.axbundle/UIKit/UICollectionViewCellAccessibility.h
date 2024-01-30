@interface UICollectionViewCellAccessibility : __UICollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)_isEligibleForFocusInteraction;
- (void)addSubview:(id)a0;
- (BOOL)canBecomeFocused;
- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildren;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityDropPointDescriptors;
- (unsigned long long)_accessibilityAutomationType;
- (void)willRemoveSubview:(id)a0;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void)insertSubview:(id)a0 atIndex:(long long)a1;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (void)prepareForReuse;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (id)axData;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityHitTestReverseOrder;
- (BOOL)accessibilityScrollToVisible;
- (id)_privateAccessibilityCustomActions;
- (BOOL)_accessibilityRespondsToUserInteractionForElement:(id)a0;
- (BOOL)_accessibilityIsInCollectionCell;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityIndexPathAsRange;
- (id)_accessibilityParentCollectionView;
- (BOOL)_accessibilityImplementsDefaultRowRange;
- (id)_accessibilityIndexPath;
- (void)accessibilityClearInternalData;
- (id)_accessibilityChildren;
- (void)accessibilityReuseChildren:(id)a0 forMockParent:(id)a1;
- (BOOL)_accessibilityIsOutsideParentBounds;

@end
