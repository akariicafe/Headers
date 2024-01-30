@interface SKUIPhysicalCirclesViewAccessibility : __SKUIPhysicalCirclesViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)_accessibilityUsesChildrenFramesForSorting;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (BOOL)accessibilityScroll:(long long)a0;
- (void)removeCircleAtIndex:(long long)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)_reloadDidFinish;
- (id)_accessibilityValueForCircle:(id)a0;
- (void)_accessibilityDeleteCircle:(id)a0;
- (void)_accessibilityActivateCircle:(id)a0;
- (long long)_accessibilityIndexOfCircle:(id)a0;
- (id)_accessibilityValueForAffinityCount:(long long)a0;
- (id)_accessibilityCircleBodies;
- (struct CGPoint { double x0; double x1; })_accessibilityForceTranslationForScrollDirection:(long long)a0;
- (id)_accessibilityPushingScrollStatusInDirection:(long long)a0;

@end
