@interface AKAnnotationImageHelper : NSObject

+ (void)_drawFilledShapeImageForAnnotation:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2;
+ (void)_drawImageForPath:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2;
+ (void)_drawImageForSignature:(id)a0 withFillColor:(id)a1 scale:(double)a2 pathOffset:(struct CGPoint { double x0; double x1; })a3 inContext:(struct CGContext { } *)a4;
+ (id)_imageOfSize:(struct CGSize { double x0; double x1; })a0 forAnnotation:(id)a1 strokeWidth:(double)a2 withFillColor:(BOOL)a3;
+ (struct CGImage { } *)createImageOfAnnotation:(id)a0 withScale:(double)a1;
+ (id)imageForShapeTag:(long long)a0;
+ (id)imageOfSize:(struct CGSize { double x0; double x1; })a0 forAnnotation:(id)a1;
+ (id)imageOfSize:(struct CGSize { double x0; double x1; })a0 forAnnotationTag:(long long)a1;
+ (id)imageOfSize:(struct CGSize { double x0; double x1; })a0 forPath:(id)a1;
+ (id)imageOfSize:(struct CGSize { double x0; double x1; })a0 withFillColor:(id)a1 forSignature:(id)a2;

@end
