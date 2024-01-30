@interface TSCHRadarAreaElementBuilder : TSCHAreaElementBuilder

- (BOOL)p_addBottomStroke:(struct { id x0; id x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; } *)a0 toPath:(struct CGPath { } *)a1 seriesIndex:(unsigned long long)a2 withPointsArray:(struct { struct CGPoint { double x0; double x1; } x0; double x1; BOOL x2; unsigned long long x3; } *)a3 withCount:(unsigned long long)a4;
- (id)coordinateAdapter;
- (void)p_addTopStroke:(struct { id x0; id x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; } *)a0 toPath:(struct CGPath { } *)a1 withPointsArray:(struct { struct CGPoint { double x0; double x1; } x0; double x1; BOOL x2; unsigned long long x3; } *)a2 withCount:(unsigned long long)a3 lineType:(int)a4;
- (long long)p_hitCheckPoint:(struct CGPoint { double x0; double x1; })a0 inSeries:(id)a1 withSeriesElementPath:(struct CGPath { } *)a2;
- (BOOL)p_shouldAddSelectionKnobWithPoint:(struct CGPoint { double x0; double x1; })a0 previousPoint:(struct CGPoint { double x0; double x1; })a1 minimumDistanceSquared:(double)a2 selectionKnobRadius:(double)a3;
- (BOOL)p_testIntersectionOfRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 againstSortedRects:(id)a1 withInset:(double)a2 isVertical:(BOOL)a3;
- (BOOL)p_topStrokeShouldBeClosed;

@end
