@interface NCItemPickerSectionHeaderViewAccessibility : __NCItemPickerSectionHeaderViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (BOOL)isAccessibilityElement;
- (id)accessibilityPath;
- (long long)_accessibilityExpandedStatus;
- (BOOL)accessibilityIsSelected;

@end
