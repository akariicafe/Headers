@interface CCVegaScenegraphUtils : NSObject

+ (struct CGPath { } *)newPathForRectangleMark:(id)a0 offset:(double)a1;
+ (void)updateShapeLayer:(id)a0 withMark:(id)a1 delegate:(id)a2;
+ (id)createOrUpdateLayer:(id)a0 path:(struct CGPath { } *)a1 gradient:(id)a2 mode:(int)a3 lineWidth:(double)a4 delegate:(id)a5;
+ (void)updateShapeLayerFill:(id)a0 withMark:(id)a1 delegate:(id)a2;
+ (void)updateShapeLayerStroke:(id)a0 withMark:(id)a1 delegate:(id)a2;
+ (void)applyGradient:(id)a0 toLayer:(id)a1 delegate:(id)a2;
+ (id)createOrUpdateGradientLayer:(id)a0 existingLayer:(id)a1 delegate:(id)a2;
+ (id)createOrUpdateLayer:(id)a0 path:(struct CGPath { } *)a1 withMark:(id)a2 delegate:(id)a3;

@end
