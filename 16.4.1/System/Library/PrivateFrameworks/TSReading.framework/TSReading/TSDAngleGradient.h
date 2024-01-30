@interface TSDAngleGradient : TSDGradient <TSDMixing>

@property (nonatomic) double gradientAngle;
@property (readonly, nonatomic) double gradientAngleInDegrees;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)setFirstColor:(id)a0;
- (void)setGradientType:(unsigned long long)a0;
- (void)paintPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (id)insertStopAtFraction:(double)a0 withColor:(id)a1;
- (struct CGPoint { double x0; double x1; })endPointForPath:(id)a0 andBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)evenlyDistributeStops;
- (id)initWithGradientStops:(id)a0 type:(unsigned long long)a1 opacity:(double)a2 angle:(double)a3;
- (id)initWithStartColor:(id)a0 endColor:(id)a1 type:(unsigned long long)a2 angle:(double)a3;
- (void)insertGradientStop:(id)a0;
- (id)insertStopAtFraction:(double)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (long long)mixingTypeWithObject:(id)a0;
- (void)moveStopAtIndex:(unsigned long long)a0 toFraction:(double)a1;
- (double)p_bestGradientLengthForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atAngle:(double)a1;
- (void)p_paintPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_shadingTransformForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)paintPath:(struct CGPath { } *)a0 naturalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2 isPDF:(BOOL)a3;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 atAngle:(double)a2;
- (void)removeStop:(id)a0;
- (id)removeStopAtIndex:(unsigned long long)a0;
- (void)reverseStopOrder;
- (void)setColorOfStopAtIndex:(unsigned long long)a0 toColor:(id)a1;
- (void)setGradientStops:(id)a0;
- (void)setInflectionOfStopAtIndex:(unsigned long long)a0 toInflection:(double)a1;
- (void)setLastColor:(id)a0;
- (struct CGPoint { double x0; double x1; })startPointForPath:(id)a0 andBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)swapStopAtIndex:(unsigned long long)a0 withStopAtIndex:(unsigned long long)a1;

@end
