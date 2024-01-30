@class NSArray, _UIAccessibilityNavigationViewInfo;

@interface UINavigationBarAccessibility : __UINavigationBarAccessibility_super {
    _UIAccessibilityNavigationViewInfo *__accessibilityNavigationViewInfo;
}

@property (retain, nonatomic, setter=_accessibilitySetNavBarElements:) NSArray *_accessibilityNavBarElements;

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_accessibility_navigationBarContentsDidChange;
- (void)addSubview:(id)a0;
- (id)accessibilityIdentifier;
- (BOOL)shouldGroupAccessibilityChildren;
- (id)_accessibilityRoleDescription;
- (unsigned long long)_accessibilityAutomationType;
- (void)willRemoveSubview:(id)a0;
- (BOOL)accessibilityPerformEscape;
- (void).cxx_destruct;
- (void)insertSubview:(id)a0 atIndex:(long long)a1;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (id)accessibilityElements;
- (long long)accessibilityContainerType;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (BOOL)_accessibilityIsGroupedParent;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (BOOL)_accessibilityAllowOutOfBoundsHitTestAtPoint:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityIncludeRoleInGroupNavigationOnly;
- (double)_accessibilityAllowedGeometryOverlap;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityFauxBackButton;

@end
