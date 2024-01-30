@interface TSTLayoutSpaceBezierPathCache : TSUConcurrentMutableDictionaryCache

- (id)bezierPathForGridRange:(struct { struct { unsigned int x0; unsigned int x1; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a1 inset:(double)a2 reoriginToZero:(BOOL)a3;
- (void)insertBezierPath:(id)a0 gridRange:(struct { struct { unsigned int x0; unsigned int x1; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a2 inset:(double)a3 reoriginToZero:(BOOL)a4;

@end
