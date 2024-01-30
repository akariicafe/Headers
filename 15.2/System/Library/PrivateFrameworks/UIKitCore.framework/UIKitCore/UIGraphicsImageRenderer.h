@interface UIGraphicsImageRenderer : UIGraphicsRenderer

+ (void)prepareCGContext:(struct CGContext { } *)a0 withRendererContext:(id)a1;
+ (Class)rendererContextClass;
+ (struct CGContext { } *)contextWithFormat:(id)a0;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)PNGDataWithActions:(id /* block */)a0;
- (BOOL)allowsImageOutput;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 format:(id)a1;
- (id)init;
- (void)pushContext:(id)a0;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 format:(id)a1;
- (void)_prepareContextForReuse:(struct CGContext { } *)a0;
- (id)imageWithActions:(id /* block */)a0;
- (id)JPEGDataWithCompressionQuality:(double)a0 actions:(id /* block */)a1;

@end
