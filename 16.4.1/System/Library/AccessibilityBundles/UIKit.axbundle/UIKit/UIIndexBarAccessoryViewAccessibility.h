@interface UIIndexBarAccessoryViewAccessibility : __UIIndexBarAccessoryViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (BOOL)_didSelectEntry:(id)a0 atIndex:(long long)a1;
- (id)accessibilityFlowToElements;
- (void)_accessibilityJumpToTableIndex:(id)a0;

@end
