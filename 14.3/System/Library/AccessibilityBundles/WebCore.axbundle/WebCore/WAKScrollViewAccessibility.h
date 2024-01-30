@interface WAKScrollViewAccessibility : __WAKScrollViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityObject;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (id)accessibilityContainer;

@end
