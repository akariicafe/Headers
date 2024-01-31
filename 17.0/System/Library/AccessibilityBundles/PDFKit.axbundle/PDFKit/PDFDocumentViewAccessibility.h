@interface PDFDocumentViewAccessibility : __PDFDocumentViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)updateVisibility;
- (BOOL)isAccessibilityElement;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutDocumentView;
- (id)_axGetPDFView;
- (BOOL)_axIsUsingPDFExtensionView;
- (id)_axPageViews;
- (void)_axSetPageViews:(id)a0;

@end
