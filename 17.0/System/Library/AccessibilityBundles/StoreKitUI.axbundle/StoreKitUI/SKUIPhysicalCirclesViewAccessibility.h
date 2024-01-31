@interface SKUIPhysicalCirclesViewAccessibility : __SKUIPhysicalCirclesViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)accessibilityElementCount;
- (BOOL)accessibilityScroll:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (BOOL)_accessibilityUsesChildrenFramesForSorting;
- (void)_reloadDidFinish;
- (void)removeCircleAtIndex:(long long)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)_accessibilityActivateCircle:(id)a0;
- (id)_accessibilityCircleBodies;
- (void)_accessibilityDeleteCircle:(id)a0;
- (struct CGPoint { double x0; double x1; })_accessibilityForceTranslationForScrollDirection:(long long)a0;
- (long long)_accessibilityIndexOfCircle:(id)a0;
- (id)_accessibilityPushingScrollStatusInDirection:(long long)a0;
- (id)_accessibilityValueForAffinityCount:(long long)a0;
- (id)_accessibilityValueForCircle:(id)a0;

@end
