@interface CAMBottomBarAccessibility : __CAMBottomBarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (BOOL)shouldGroupAccessibilityChildren;
- (BOOL)_accessibilityOnlyComparesByXAxis;

@end
