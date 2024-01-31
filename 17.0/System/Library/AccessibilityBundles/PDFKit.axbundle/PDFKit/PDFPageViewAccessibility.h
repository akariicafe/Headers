@interface PDFPageViewAccessibility : __PDFPageViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityIsFrameOutOfBounds;
- (void)removeControlForAnnotation:(id)a0;
- (id)_axAllElements;
- (id)_axAllNodeElements;
- (id)_axGetPDFView;
- (id)_axGetPage;
- (BOOL)_axIsUsingPDFExtensionView;
- (id)_axLineSelections;
- (struct CGPDFPage { } *)_axPageRef;
- (id)_axPageViewElements;
- (void)_axSetAllNodeElements:(id)a0;
- (void)_axSetPageViewElements:(id)a0;
- (struct CGPDFSelection { } *)_lineSelectionForSelection:(struct CGPDFSelection { } *)a0;

@end
