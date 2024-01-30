@class PDFPage, PDFAKPageAdaptorPrivate, AKPageModelController;

@interface PDFAKPageAdaptor : NSObject {
    PDFAKPageAdaptorPrivate *_private;
}

@property (readonly, weak, nonatomic) PDFPage *pdfPage;
@property (readonly, nonatomic) AKPageModelController *akPageModelController;

- (void)teardown;
- (void)_teardown;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)initializeExifAndScaleOnAnnotation:(id)a0;
- (id)initWithPDFPage:(id)a0 pageModelController:(id)a1;
- (void)_startObservingPageModel;
- (void)_stopObservingPageModel;
- (void)_annotationsWereRemoved:(id)a0;
- (void)_annotationsWereAdded:(id)a0;
- (id)initWithPDFPage:(id)a0;
- (void)pdfPage:(id)a0 didAddAnnotation:(id)a1;
- (void)pdfPage:(id)a0 didRemoveAnnotation:(id)a1;
- (void)pdfPageWasRotated:(id)a0;

@end
