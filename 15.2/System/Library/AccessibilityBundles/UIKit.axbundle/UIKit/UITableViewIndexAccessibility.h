@interface UITableViewIndexAccessibility : __UITableViewIndexAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityFlowToElements;
- (BOOL)_updateSectionForTouch:(id)a0 withEvent:(id)a1;
- (id)accessibilityLabel;
- (long long)_accessibilitySortPriority;
- (void)_accessibilityJumpToTableIndex:(id)a0;
- (id)_accessibilityKeyCommands;
- (long long)_accessibilityTableIndexAdjustment;
- (id)_axDetermineTableCellLabel:(id)a0;

@end
