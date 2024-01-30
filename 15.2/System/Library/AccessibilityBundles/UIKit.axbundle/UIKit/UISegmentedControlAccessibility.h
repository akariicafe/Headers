@interface UISegmentedControlAccessibility : __UISegmentedControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)accessibilityTraits;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)isAccessibilityElement;
- (void)sendActionsForControlEvents:(unsigned long long)a0;
- (BOOL)accessibilityElementsHidden;
- (id)accessibilityElements;
- (long long)accessibilityContainerType;
- (BOOL)_accessibilitySupportsContentSizeCategory:(id)a0;
- (BOOL)_accessibilityHasNativeFocus;
- (BOOL)_accessibilityShouldIncludeArrowKeyCommandsForDirectionalFocusMovement;
- (id)_accessibilityNativeFocusPreferredElement;

@end
