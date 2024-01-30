@interface TSDDropShadow : TSDShadow

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (unsigned long long)shadowType;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)initWithAngle:(double)a0 offset:(double)a1 radius:(double)a2 opacity:(double)a3 color:(id)a4 enabled:(BOOL)a5;
- (id)newShadowClampedForSwatches;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInNaturalSpaceForRep:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForRep:(id)a0;
- (struct CGImage { } *)newShadowImageForRep:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 drawSelector:(SEL)a2 unflipped:(BOOL)a3;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;

@end
