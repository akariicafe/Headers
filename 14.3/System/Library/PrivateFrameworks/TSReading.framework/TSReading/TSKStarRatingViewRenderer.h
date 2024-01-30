@interface TSKStarRatingViewRenderer : NSObject

+ (void)renderRating:(long long)a0 intoContext:(struct CGContext { } *)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 style:(int)a3 showDots:(BOOL)a4 color:(id)a5;
+ (struct CGPath { } *)newStarPath:(double)a0;

- (id)init;

@end
