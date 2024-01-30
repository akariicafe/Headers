@class AKController, PDFView, PDFDocument, AKToolbarView;
@protocol PDFAKControllerDelegateProtocol;

@interface PDFAKDocumentAdaptorPrivate : NSObject {
    BOOL isTornDown;
    PDFDocument *pdfDocument;
    PDFView *pdfView;
    AKController *akController;
    id<PDFAKControllerDelegateProtocol> pdfAKControllerDelegate;
    AKToolbarView *akToolbarView;
    double modelBaseScaleFactor;
}

- (void).cxx_destruct;

@end
