@interface PUGridRenderedStripAccessibility : __PUGridRenderedStripAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_render;
- (BOOL)isAccessibilityElement;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)accessibilityHint;
- (void)_axClearData;
- (void)_axGenerateIsElement:(id)a0;
- (void)_axGenerateLabel:(id)a0;
- (void)_axInitializeDataForElement;

@end
