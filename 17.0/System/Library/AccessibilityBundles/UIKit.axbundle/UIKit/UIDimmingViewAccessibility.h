@interface UIDimmingViewAccessibility : __UIDimmingViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (long long)accessibilityContainerType;
- (id)accessibilityHint;
- (id)_childFocusViews;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityViewIsModal;
- (id)_accessibilityObscuredScreenAllowedViews;

@end
