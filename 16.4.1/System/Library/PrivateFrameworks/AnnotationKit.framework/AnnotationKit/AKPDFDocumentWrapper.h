@interface AKPDFDocumentWrapper : NSObject {
    struct CGPDFDocument { } *_pdfDocument;
}

- (void)dealloc;
- (id)init;
- (struct CGPDFDocument { } *)pdfDocument;
- (id)initWithPDF:(struct CGPDFDocument { } *)a0;

@end
