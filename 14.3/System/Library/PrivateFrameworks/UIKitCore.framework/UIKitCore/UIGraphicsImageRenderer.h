@interface UIGraphicsImageRenderer : UIGraphicsRenderer

+ (struct CGContext { } *)contextWithFormat:(id)a0;
+ (void)prepareCGContext:(struct CGContext { } *)a0 withRendererContext:(id)a1;
+ (Class)rendererContextClass;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_prepareContextForReuse:(struct CGContext { } *)a0;
- (id)init;
- (id)JPEGDataWithCompressionQuality:(double)a0 actions:(id /* block */)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 format:(id)a1;
- (id)imageWithActions:(id /* block */)a0;
- (BOOL)allowsImageOutput;
- (id)PNGDataWithActions:(id /* block */)a0;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 format:(id)a1;
- (void)pushContext:(id)a0;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
