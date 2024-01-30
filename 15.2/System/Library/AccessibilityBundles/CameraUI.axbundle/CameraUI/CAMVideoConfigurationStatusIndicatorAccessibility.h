@interface CAMVideoConfigurationStatusIndicatorAccessibility : __CAMVideoConfigurationStatusIndicatorAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)layoutSubviews;
- (BOOL)_togglesResolutionForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)_handleTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityLabel;
- (BOOL)_togglesFramerateForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (long long)accessibilityContainerType;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_axSeparatorLabel;
- (id)_axResolutionLabel;
- (id)_axFramerateLabel;
- (void)_axSetResolutionTapped:(BOOL)a0;
- (void)_axSetFramerateTapped:(BOOL)a0;
- (BOOL)_axResolutionTapped;
- (BOOL)_axFramerateTapped;

@end
