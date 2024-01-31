@interface UIIndexBarAccessoryViewAccessibility : __UIIndexBarAccessoryViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (BOOL)_didSelectEntry:(id)a0 atIndex:(long long)a1;
- (id)accessibilityFlowToElements;
- (void)_accessibilityJumpToTableIndex:(id)a0;

@end
