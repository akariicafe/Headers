@interface PUGridRenderedStripAccessibility : __PUGridRenderedStripAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)dealloc;
- (void)layoutSubviews;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_render;
- (void)_axClearData;
- (void)_axGenerateIsElement:(id)a0;
- (void)_axGenerateLabel:(id)a0;
- (void)_axInitializeDataForElement;

@end
