@interface UIIndexBarAccessoryViewAccessibility : __UIIndexBarAccessoryViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityFlowToElements;
- (BOOL)_didSelectEntry:(id)a0 atIndex:(long long)a1;
- (id)accessibilityLabel;
- (void)_accessibilityJumpToTableIndex:(id)a0;

@end
