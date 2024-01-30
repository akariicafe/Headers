@interface PXFocusableUIImageViewAccessibility : __PXFocusableUIImageViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (id)accessibilityCustomContent;
- (id)accessibilityURL;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (void)_setAXIndexPathHolder:(id)a0;
- (void)_setAXSelectionManager:(id)a0;
- (id)_axSelectionManager;
- (id)_axIndexPathHolder;
- (void)_axSetIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (void)_axSetSelectionManager:(id)a0;

@end
