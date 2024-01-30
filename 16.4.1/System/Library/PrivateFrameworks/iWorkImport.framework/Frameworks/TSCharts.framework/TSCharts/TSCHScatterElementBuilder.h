@interface TSCHScatterElementBuilder : TSCHLineAreaScatterElementBuilder

- (unsigned long long)countOfHitCheckRegionsInSeries:(id)a0 forGroups:(id)a1 forBodyLayout:(id)a2 outNewElementPaths:(const struct CGPath ***)a3 outSelectionKnobLocations:(id *)a4;
- (BOOL)needsSeparateHitTestingPaths;
- (void)p_addKnobsForPoint:(struct CGPoint { double x0; double x1; })a0 strokedUnitSymbolRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toKnobSet:(id)a2 symbolsShowing:(BOOL)a3 includePoint:(BOOL)a4;
- (void)p_addTopStroke:(struct { id x0; id x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; } *)a0 toPath:(struct CGPath { } *)a1 withPointsArray:(struct { struct CGPoint { double x0; double x1; } x0; double x1; BOOL x2; unsigned long long x3; } *)a2 withCount:(unsigned long long)a3 lineType:(int)a4;
- (void)p_addZeroToSinglePointWithState:(struct { id x0; id x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; } *)a0 toPath:(struct CGPath { } *)a1 withPointsArray:(struct { struct CGPoint { double x0; double x1; } x0; double x1; BOOL x2; unsigned long long x3; } *)a2 withCount:(unsigned long long)a3 lineType:(int)a4;

@end
