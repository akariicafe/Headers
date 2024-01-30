@interface TSCHAreaElementBuilder : TSCHLineElementBuilder

- (BOOL)p_addBottomStroke:(struct { id x0; id x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; } *)a0 toPath:(struct CGPath { } *)a1 seriesIndex:(unsigned long long)a2 withPointsArray:(struct { struct CGPoint { double x0; double x1; } x0; double x1; BOOL x2; unsigned long long x3; } *)a3 withCount:(unsigned long long)a4;
- (struct { struct CGPoint { double x0; double x1; } x0; double x1; BOOL x2; unsigned long long x3; } *)p_createPointArrayForSeries:(id)a0 inAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 groupIndexSet:(id)a2 outCount:(unsigned long long *)a3;
- (BOOL)needsSeparateHitTestingPaths;
- (void)p_addTopStroke:(struct { id x0; id x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; } *)a0 toPath:(struct CGPath { } *)a1 withPointsArray:(struct { struct CGPoint { double x0; double x1; } x0; double x1; BOOL x2; unsigned long long x3; } *)a2 withCount:(unsigned long long)a3 lineType:(int)a4;

@end
