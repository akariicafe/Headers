@interface UIViewControllerWrapperViewAccessibility : __UIViewControllerWrapperViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (long long)accessibilityContainerType;
- (BOOL)shouldGroupAccessibilityChildren;

@end
