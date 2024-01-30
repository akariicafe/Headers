@interface AKAnnotationRendererUtilities : NSObject

+ (struct CGPoint { double x0; double x1; })_shadowDirectionForAnnotation:(id)a0;
+ (void)beginShadowInContext:(struct CGContext { } *)a0 forAnnotation:(id)a1;
+ (void)endShadowInContext:(struct CGContext { } *)a0;
+ (struct CGPath { } *)newStandardStrokedBorderPathWithPath:(struct CGPath { } *)a0 withStrokeWidth:(double)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })outsetRectForShadow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onAnnotation:(id)a1;
+ (void)setStandardLineDashInContext:(struct CGContext { } *)a0 forLineWidth:(double)a1;
+ (void)setStandardLineStateInContext:(struct CGContext { } *)a0 forLineWidth:(double)a1;

@end
