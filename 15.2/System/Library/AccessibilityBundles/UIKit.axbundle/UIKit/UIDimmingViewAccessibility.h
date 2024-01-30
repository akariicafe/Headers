@interface UIDimmingViewAccessibility : __UIDimmingViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityIdentifier;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityViewIsModal;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityLabel;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inCoordinateSpace:(id)a1;
- (long long)accessibilityContainerType;
- (id)_accessibilityObscuredScreenAllowedViews;

@end
