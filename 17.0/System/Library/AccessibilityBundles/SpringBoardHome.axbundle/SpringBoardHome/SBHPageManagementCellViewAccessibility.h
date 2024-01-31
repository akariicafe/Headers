@interface SBHPageManagementCellViewAccessibility : __SBHPageManagementCellViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (id)accessibilityCustomActions;
- (void)iconListHiddenDidChange:(id)a0;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityDropPointDescriptors;
- (BOOL)accessibilityPerformEscape;
- (id)accessibilityValue;
- (long long)_accessibilityPageIndex;
- (BOOL)_accessibilityIsSelected;
- (id)_accessibilityToggleButton;
- (BOOL)_accessibilityToggleButtonEnabled;
- (BOOL)_axHandleJumpToPage;

@end
