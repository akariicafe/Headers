@interface PDFPageLayerAnnotationEffect : PDFPageLayerEffect

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)annotation;
- (id)UUID;
- (void)update;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageFrame;

@end
