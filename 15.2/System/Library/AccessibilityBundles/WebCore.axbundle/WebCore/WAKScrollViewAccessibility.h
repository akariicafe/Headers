@interface WAKScrollViewAccessibility : __WAKScrollViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (long long)accessibilityElementCount;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityObject;
- (BOOL)isAccessibilityElement;
- (id)accessibilityContainer;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;

@end
