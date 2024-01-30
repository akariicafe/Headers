@class NSArray, _UIAccessibilityNavigationViewInfo;

@interface UINavigationBarAccessibility : __UINavigationBarAccessibility_super {
    _UIAccessibilityNavigationViewInfo *__accessibilityNavigationViewInfo;
}

@property (retain, nonatomic, setter=_accessibilitySetNavBarElements:) NSArray *_accessibilityNavBarElements;

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)insertSubview:(id)a0 atIndex:(long long)a1;
- (void)willRemoveSubview:(id)a0;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (id)accessibilityIdentifier;
- (long long)accessibilityContainerType;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (void)addSubview:(id)a0;
- (id)accessibilityElements;
- (void).cxx_destruct;
- (void)_accessibility_navigationBarContentsDidChange;
- (BOOL)accessibilityPerformEscape;
- (BOOL)shouldGroupAccessibilityChildren;
- (id)_accessibilityRoleDescription;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityAllowOutOfBoundsHitTestAtPoint:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)_accessibilityAllowedGeometryOverlap;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (BOOL)_accessibilityIncludeRoleInGroupNavigationOnly;
- (BOOL)_accessibilityIsGroupedParent;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityFauxBackButton;

@end
