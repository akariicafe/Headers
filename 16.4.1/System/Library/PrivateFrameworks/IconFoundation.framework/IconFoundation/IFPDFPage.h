@interface IFPDFPage : NSObject

@property struct CGPDFPage { } *pdfPage;

- (void)dealloc;
- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)initWithCGPDFPage:(struct CGPDFPage { } *)a0;

@end
