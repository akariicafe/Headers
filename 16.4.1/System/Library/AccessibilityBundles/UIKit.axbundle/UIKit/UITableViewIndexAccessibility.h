@interface UITableViewIndexAccessibility : __UITableViewIndexAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (BOOL)_updateSectionForTouch:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityFlowToElements;
- (void)_accessibilityJumpToTableIndex:(id)a0;
- (id)_accessibilityKeyCommands;
- (long long)_accessibilitySortPriority;
- (long long)_accessibilityTableIndexAdjustment;
- (id)_axDetermineTableCellLabel:(id)a0;

@end
