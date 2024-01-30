@interface CAMPreviewViewAccessibility : __CAMPreviewViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)accessibilityTraits;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityLabel;
- (BOOL)_accessibilityAllowsSiblingsWhenOvergrown;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned int)_accessibilityMediaAnalysisOptions;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (BOOL)_axIsBackFacing;
- (BOOL)_axIsFocusLocked;
- (BOOL)_axIsPortraitMode;
- (BOOL)_axIsUsingFlash;
- (void)_accessibilityZoomIn:(BOOL)a0;
- (void)_showFocusAtPoint:(struct CGPoint { double x0; double x1; })a0 startAnimating:(BOOL)a1;

@end
