@interface _SFNavigationBarAccessibility : ___SFNavigationBarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_updateText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)fluidProgressViewDidShowProgress:(id)a0;
- (void)layoutSubviews;
- (BOOL)shouldGroupAccessibilityChildren;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (long long)_accessibilitySortPriority;
- (void)_compressedBarTapped;
- (void)_formatToggleButtonTapped:(id)a0;
- (void)_updateSecurityWarningsVisibility;
- (void)_updateShowsLockIcon;
- (void)setExpanded:(BOOL)a0 textFieldSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_accessibilityAutoReaderAction:(id)a0;
- (void)_axUpdateCancelButton;
- (void)_axUpdateTextFields;
- (void)_axUpdateURLValue;

@end
