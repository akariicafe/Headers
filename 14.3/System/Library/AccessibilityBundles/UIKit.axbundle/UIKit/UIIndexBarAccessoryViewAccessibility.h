@interface UIIndexBarAccessoryViewAccessibility : __UIIndexBarAccessoryViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (void)_accessibilityJumpToTableIndex:(id)a0;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityFlowToElements;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)_didSelectEntry:(id)a0 atIndex:(long long)a1;
- (id)_axEntries;
- (long long)_axCurrentPosition;
- (void)_accessibilityMoveToIndexAtPosition:(long long)a0;
- (id)_accessibiityDisplayEntryNearestToContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)_axLabelForEntry:(id)a0;
- (void)_axPostNotificationForEntry:(id)a0;

@end
