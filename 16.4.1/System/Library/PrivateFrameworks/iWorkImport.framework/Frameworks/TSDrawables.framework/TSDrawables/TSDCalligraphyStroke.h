@interface TSDCalligraphyStroke : TSDSmartStroke

@property (readonly, nonatomic) double angle;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) BOOL chisel;

+ (Class)mutableClass;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyToContext:(struct CGContext { } *)a0 insideStroke:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForLineEnd:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 atAngle:(double)a2 withScale:(double)a3 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForPath:(id)a0;
- (BOOL)canApplyToShapeRenderable;
- (BOOL)drawsInOneStep;
- (BOOL)drawsOutsideStrokeBounds;
- (double)horizontalMarginForSwatch;
- (id)initWithColor:(id)a0 width:(double)a1 cap:(int)a2 join:(int)a3 pattern:(id)a4 miterLimit:(double)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_superBoundsForPath:(id)a0;
- (void)paintLineEnd:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 atAngle:(double)a2 withScale:(double)a3 inContext:(struct CGContext { } *)a4 useFastDrawing:(BOOL)a5;
- (void)paintPath:(const struct CGPath { } *)a0 wantsInteriorStroke:(BOOL)a1 inContext:(struct CGContext { } *)a2 useFastDrawing:(BOOL)a3 parameterized:(BOOL)a4 shouldReverseDrawOrder:(BOOL)a5;
- (BOOL)prefersToApplyToShapeRenderableDuringManipulation;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformInContext:(struct CGContext { } *)a0;

@end
