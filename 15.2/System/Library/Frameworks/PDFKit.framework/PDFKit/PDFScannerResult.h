@class PDFScannerResultPrivate;

@interface PDFScannerResult : NSObject {
    PDFScannerResultPrivate *_private;
}

- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void).cxx_destruct;
- (id)rects;
- (id)ddResult;
- (BOOL)resultIsPastDate;
- (BOOL)hasActionsForResult;
- (struct __DDHighlight { } *)highlightRef;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0 onPageLayer:(id)a1;
- (BOOL)pointIsOnButton:(struct CGPoint { double x0; double x1; })a0 onPageLayer:(id)a1;
- (id)initWithDDScannerResult:(id)a0 foundOnPage:(id)a1;
- (void)setHighlightRef:(struct __DDHighlight { } *)a0;
- (BOOL)pointIsOnButton:(struct CGPoint { double x0; double x1; })a0;
- (void)setButtonPressed:(BOOL)a0;

@end
