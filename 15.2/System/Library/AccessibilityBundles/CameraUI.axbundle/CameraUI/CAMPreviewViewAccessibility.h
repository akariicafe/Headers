@interface CAMPreviewViewAccessibility : __CAMPreviewViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (unsigned int)_accessibilityMediaAnalysisOptions;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityAllowsSiblingsWhenOvergrown;
- (BOOL)_axIsBackFacing;
- (BOOL)_axIsFocusLocked;
- (BOOL)_axIsPortraitMode;
- (BOOL)_axIsUsingFlash;
- (void)_accessibilityZoomIn:(BOOL)a0;
- (void)_showFocusAtPoint:(struct CGPoint { double x0; double x1; })a0 startAnimating:(BOOL)a1;

@end
