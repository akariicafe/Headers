@interface _UIContextMenuCellContentViewAccessibility : ___UIContextMenuCellContentViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (id)accessibilityHint;
- (id)accessibilityUserInputLabels;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)_updateForOptionsChangeFromPreviousOptions:(unsigned long long)a0;
- (id)accessibilityValue;
- (long long)_accessibilityExpandedStatus;

@end
