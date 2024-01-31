@interface CAMPreviewViewAccessibility : __CAMPreviewViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (BOOL)accessibilityZoomInAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityZoomOutAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_accessibilityAllowsSiblingsWhenOvergrown;
- (void)_accessibilityLoadAccessibilityInformation;
- (unsigned int)_accessibilityMediaAnalysisOptions;
- (BOOL)_axIsBackFacing;
- (BOOL)_axIsUsingFlash;
- (void)_accessibilityZoomIn:(BOOL)a0;
- (BOOL)_axIsFocusLocked;
- (BOOL)_axIsPortraitMode;
- (void)_showFocusAtPoint:(struct CGPoint { double x0; double x1; })a0 startAnimating:(BOOL)a1;

@end
