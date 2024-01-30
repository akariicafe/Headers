@interface TSTStarRatingRenderer : NSObject

+ (struct CGPath { } *)p_newStarPath:(double)a0;
+ (void)renderRating:(double)a0 intoContext:(struct CGContext { } *)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 showDots:(BOOL)a3 color:(struct CGColor { } *)a4;
+ (void)renderRating:(double)a0 intoContext:(struct CGContext { } *)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 showDots:(BOOL)a3 color:(struct CGColor { } *)a4 useMinimalSpace:(BOOL)a5;

@end
