@class PDFPage, PDFView;

@interface AXPDFNodeElement : UIAccessibilityElement {
    PDFView *_pdfView;
}

@property (nonatomic) BOOL didDetermineLastNodeStatus;
@property (nonatomic) BOOL isGatheringLeafDescendents;
@property (nonatomic) BOOL isLastNodeInPage;
@property (weak, nonatomic) PDFPage *page;

- (id)pdfView;
- (void).cxx_destruct;
- (BOOL)_accessibilityIncludeDuringContentReading;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })axConvertBoundsFromPageToScreenCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithAccessibilityContainer:(id)a0 withPage:(id)a1;
- (BOOL)pdfViewRequiresPageTurning;

@end
