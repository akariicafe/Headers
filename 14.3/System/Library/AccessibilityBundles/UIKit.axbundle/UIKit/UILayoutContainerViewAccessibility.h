@interface UILayoutContainerViewAccessibility : __UILayoutContainerViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (long long)_accessibilityCompareElement:(id)a0 toElement:(id)a1;
- (BOOL)shouldGroupAccessibilityChildren;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)layoutSubviews;

@end
