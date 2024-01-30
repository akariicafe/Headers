@class PDFView, PDFDocument, NSMutableIndexSet;

@interface PDFAKOverlayAdaptorPrivate : NSObject {
    BOOL isTornDown;
    PDFView *pdfView;
    PDFDocument *pdfDocument;
    NSMutableIndexSet *observedPageIndices;
}

- (void).cxx_destruct;

@end
