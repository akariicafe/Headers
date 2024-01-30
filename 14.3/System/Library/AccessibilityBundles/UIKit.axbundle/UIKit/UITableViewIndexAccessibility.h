@interface UITableViewIndexAccessibility : __UITableViewIndexAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)_updateSectionForTouch:(id)a0 withEvent:(id)a1;
- (BOOL)isAccessibilityElement;
- (long long)_accessibilitySortPriority;
- (void)_accessibilityJumpToTableIndex:(id)a0;
- (id)_accessibilityKeyCommands;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityFlowToElements;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (void)_accessibilityBumpValue:(BOOL)a0;
- (long long)_accessibilityTableIndexAdjustment;
- (void)_accessibilityMoveToIndexAtPosition:(long long)a0;
- (id)_accessibilityIndexData;
- (id)_accessibilityValueToPost:(id)a0;

@end
