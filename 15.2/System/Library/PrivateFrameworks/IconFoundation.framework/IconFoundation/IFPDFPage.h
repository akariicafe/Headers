@interface IFPDFPage : NSObject

@property struct CGPDFPage { } *pdfPage;

- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void)dealloc;
- (id)initWithCGPDFPage:(struct CGPDFPage { } *)a0;

@end
