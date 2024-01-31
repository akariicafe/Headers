@interface CAMVideoConfigurationStatusIndicatorAccessibility : __CAMVideoConfigurationStatusIndicatorAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (void)_handleTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_togglesFramerateForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_togglesResolutionForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (long long)accessibilityContainerType;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_axFramerateLabel;
- (BOOL)_axFramerateTapped;
- (id)_axResolutionLabel;
- (BOOL)_axResolutionTapped;
- (id)_axSeparatorLabel;
- (void)_axSetFramerateTapped:(BOOL)a0;
- (void)_axSetResolutionTapped:(BOOL)a0;

@end
