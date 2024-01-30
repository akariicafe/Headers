@interface UINavigationBarAccessibility : __UINavigationBarAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)willRemoveSubview:(id)a0;
- (id)accessibilityElements;
- (unsigned long long)_accessibilityAutomationType;
- (double)_accessibilityAllowedGeometryOverlap;
- (long long)accessibilityContainerType;
- (void)_accessibility_navigationBarContentsDidChange;
- (BOOL)shouldGroupAccessibilityChildren;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (BOOL)_accessibilityAllowOutOfBoundsHitTestAtPoint:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)addSubview:(id)a0;
- (BOOL)accessibilityPerformEscape;
- (id)accessibilityIdentifier;
- (void)insertSubview:(id)a0 atIndex:(long long)a1;
- (id)_accessibilityStaticBarButtonItemWithContents:(id)a0;
- (id)_accessibilityFetchCachedNavBarElements;
- (id)_accessibilityLeftButtonElements;
- (id)_accessibilityRightButtonElements;
- (id)_axGetCachedStaticNavBarButton;
- (id)_accessibilityStaticBarButtonItem;
- (BOOL)_accessibilityHasLeftRightButtonCountChanged;
- (BOOL)_accessibilityHasTitleViewChanged;
- (BOOL)_accessibilityHasStaticNavBarButtonChanged;
- (id)_accessibilityFauxBackButton;
- (void)_accessibilitySetFauxBackButton:(id)a0;
- (void)_axSetCachedStaticNavBarButton:(id)a0;
- (void)_accessibilitySetNavBarElements:(id)a0;
- (id)_accessibilityNavBarElements;

@end
