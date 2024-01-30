@interface UICollectionViewCellAccessibility : __UICollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (void)insertSubview:(id)a0 atIndex:(long long)a1;
- (void)willRemoveSubview:(id)a0;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (BOOL)_isEligibleForFocusInteraction;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (void)addSubview:(id)a0;
- (void)prepareForReuse;
- (BOOL)canBecomeFocused;
- (id)_accessibilityUserTestingChildren;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)_setPopupMenuButton:(id)a0;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityDropPointDescriptors;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)accessibilityElementCount;
- (id)accessibilityValue;
- (long long)indexOfAccessibilityElement:(id)a0;
- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)_accessibilityAutomationType;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityHitTestReverseOrder;
- (BOOL)_accessibilityImplementsDefaultRowRange;
- (id)_accessibilityIndexPath;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityIndexPathAsRange;
- (BOOL)_accessibilityIsInCollectionCell;
- (id)_accessibilityParentCollectionView;
- (BOOL)_accessibilityRespondsToUserInteractionForElement:(id)a0;
- (id)_privateAccessibilityCustomActions;
- (BOOL)accessibilityScrollToVisible;
- (id)_accessibilityChildren;
- (BOOL)_accessibilityIsOutsideParentBounds;
- (void)accessibilityClearInternalData;
- (void)accessibilityReuseChildren:(id)a0 forMockParent:(id)a1;
- (id)axData;

@end
