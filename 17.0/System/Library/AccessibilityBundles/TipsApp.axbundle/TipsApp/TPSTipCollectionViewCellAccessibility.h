@interface TPSTipCollectionViewCellAccessibility : __TPSTipCollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityScannerGroupElements;
- (BOOL)_accessibilityProvidesScannerGroupElements;
- (void)setTip:(id)a0 withCellAppearance:(id)a1;

@end
