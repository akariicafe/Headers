@interface MediaControlsTransportStackViewAccessibility : __MediaControlsTransportStackViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setResponse:(id)a0;
- (void)setStyle:(long long)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_updateButtonVisualStyling:(id)a0;
- (id)_accessibilityDescriptionForCommandRequest:(id)a0;

@end
