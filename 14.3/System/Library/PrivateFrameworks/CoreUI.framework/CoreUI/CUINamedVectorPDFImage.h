@interface CUINamedVectorPDFImage : CUINamedVectorImage

@property (readonly, nonatomic) struct CGPDFDocument { } *pdfDocument;

- (struct CGImage { } *)rasterizeImageUsingScaleFactor:(double)a0 forTargetSize:(struct CGSize { double x0; double x1; })a1;

@end
