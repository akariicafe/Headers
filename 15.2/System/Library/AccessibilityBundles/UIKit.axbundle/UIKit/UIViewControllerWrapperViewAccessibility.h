@interface UIViewControllerWrapperViewAccessibility : __UIViewControllerWrapperViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (BOOL)shouldGroupAccessibilityChildren;
- (long long)accessibilityContainerType;

@end
