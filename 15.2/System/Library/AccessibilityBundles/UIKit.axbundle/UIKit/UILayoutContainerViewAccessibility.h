@interface UILayoutContainerViewAccessibility : __UILayoutContainerViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (void)layoutSubviews;
- (BOOL)shouldGroupAccessibilityChildren;
- (long long)_accessibilityCompareElement:(id)a0 toElement:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;

@end
