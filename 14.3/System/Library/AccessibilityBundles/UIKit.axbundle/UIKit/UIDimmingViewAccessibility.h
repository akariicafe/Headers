@interface UIDimmingViewAccessibility : __UIDimmingViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (long long)accessibilityContainerType;
- (id)accessibilityLabel;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inCoordinateSpace:(id)a1;
- (id)_accessibilityObscuredScreenAllowedViews;
- (BOOL)accessibilityViewIsModal;
- (BOOL)accessibilityPerformEscape;
- (id)accessibilityIdentifier;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (BOOL)_accessibilityCoversScreen;
- (BOOL)_accessibilityCanDismiss;

@end
