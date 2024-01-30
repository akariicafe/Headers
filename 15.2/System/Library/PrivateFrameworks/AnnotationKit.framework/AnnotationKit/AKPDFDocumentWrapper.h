@interface AKPDFDocumentWrapper : NSObject {
    struct CGPDFDocument { } *_pdfDocument;
}

- (struct CGPDFDocument { } *)pdfDocument;
- (id)init;
- (void)dealloc;
- (id)initWithPDF:(struct CGPDFDocument { } *)a0;

@end
