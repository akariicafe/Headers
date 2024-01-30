@interface TSDCurvedShadow : TSDShadow

@property (readonly, nonatomic) double curve;

+ (id)curvedShadowWithOffset:(double)a0 angle:(double)a1 radius:(double)a2 curve:(double)a3 opacity:(double)a4 color:(struct CGColor { } *)a5 enabled:(BOOL)a6;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)shadowType;
- (long long)mixingTypeWithObject:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)initWithOffset:(double)a0 angle:(double)a1 radius:(double)a2 curve:(double)a3 opacity:(double)a4 color:(struct CGColor { } *)a5 enabled:(BOOL)a6;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shadowBoundsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (double)clampOffset:(double)a0;
- (id)newShadowClampedForSwatches;
- (BOOL)showForEditingText;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInNaturalSpaceForRep:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForRep:(id)a0;
- (struct CGImage { } *)newShadowImageForRep:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 drawSelector:(SEL)a2 unflipped:(BOOL)a3;
- (double)offsetFromCurve;
- (double)getVerticalOffset:(struct CGSize { double x0; double x1; })a0;
- (double)paddingForBlur;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandedBoundsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })boundsShiftForSize:(struct CGSize { double x0; double x1; })a0;

@end
