@class PDFPage, AKPageModelController;

@interface PDFAKPageAdaptorPrivate : NSObject {
    BOOL isTornDown;
    PDFPage *pdfPage;
    AKPageModelController *akPageModelController;
    BOOL isObservingPageModel;
    BOOL isSyncingFromPDFPage;
    BOOL isSyncingFromAKPageModel;
}

- (void).cxx_destruct;

@end
