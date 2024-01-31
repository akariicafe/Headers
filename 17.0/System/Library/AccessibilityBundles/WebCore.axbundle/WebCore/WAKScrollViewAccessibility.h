@interface WAKScrollViewAccessibility : __WAKScrollViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (id)accessibilityContainer;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityObject;

@end
