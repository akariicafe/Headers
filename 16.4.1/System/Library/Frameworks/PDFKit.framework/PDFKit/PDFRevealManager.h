@class PDFRevealManagerPrivate;

@interface PDFRevealManager : NSObject {
    PDFRevealManagerPrivate *_private;
}

- (void).cxx_destruct;
- (void)reset;
- (id)PDFRVPresenter;
- (id)PDFRVDocumentContextForPage:(id)a0;
- (id)PDFRVPresentingContextAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithPDFView:(id)a0;

@end
