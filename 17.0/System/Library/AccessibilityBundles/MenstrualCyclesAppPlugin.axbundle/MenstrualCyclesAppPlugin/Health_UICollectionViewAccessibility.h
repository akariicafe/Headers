@interface Health_UICollectionViewAccessibility : __Health_UICollectionViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (BOOL)accessibilityCollectionViewBehavesLikeUIViewAccessibility;
- (void)adjustCycleTimelineCollectionViewIncrement:(BOOL)a0;
- (id)centerCellFromCollectionView:(id)a0;

@end
