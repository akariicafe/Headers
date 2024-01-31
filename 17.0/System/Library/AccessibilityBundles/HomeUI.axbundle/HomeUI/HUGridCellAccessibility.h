@interface HUGridCellAccessibility : __HUGridCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)_accessibilitySupportGesturesAttributes;
- (BOOL)_axIsActiveGridCell;
- (void)_axOpenQuickControls;
- (id)_axServiceStateString;

@end
