@interface UITableViewIndexAccessibility : __UITableViewIndexAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (BOOL)_updateSectionForTouch:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityFlowToElements;
- (void)_accessibilityJumpToTableIndex:(id)a0;
- (id)_accessibilityKeyCommands;
- (long long)_accessibilitySortPriority;
- (long long)_accessibilityTableIndexAdjustment;
- (id)_axDetermineTableCellLabel:(id)a0;

@end
