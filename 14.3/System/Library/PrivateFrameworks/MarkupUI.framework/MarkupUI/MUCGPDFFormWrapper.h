@interface MUCGPDFFormWrapper : NSObject {
    struct CGPDFForm { } *_pdfForm;
}

@property (readonly) struct CGPDFForm { } *pdfForm;

- (id)initWithForm:(struct CGPDFForm { } *)a0;
- (void)dealloc;

@end
