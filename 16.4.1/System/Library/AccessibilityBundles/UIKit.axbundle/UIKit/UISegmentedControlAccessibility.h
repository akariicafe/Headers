@interface UISegmentedControlAccessibility : __UISegmentedControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (long long)accessibilityContainerType;
- (BOOL)accessibilityElementsHidden;
- (id)accessibilityElements;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)sendActionsForControlEvents:(unsigned long long)a0;
- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityHasNativeFocus;
- (id)_accessibilityNativeFocusPreferredElement;
- (BOOL)_accessibilityShouldIncludeArrowKeyCommandsForDirectionalFocusMovement;
- (BOOL)_accessibilitySupportsContentSizeCategory:(id)a0;

@end
