@interface UISegmentedControlAccessibility : __UISegmentedControlAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)accessibilityElementsHidden;
- (BOOL)_accessibilityShouldIncludeArrowKeyCommandsForDirectionalFocusMovement;
- (long long)accessibilityContainerType;
- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityNativeFocusPreferredElement;
- (void)sendActionsForControlEvents:(unsigned long long)a0;
- (BOOL)_accessibilitySupportsContentSizeCategory:(id)a0;
- (BOOL)_accessibilityHasNativeFocus;

@end
