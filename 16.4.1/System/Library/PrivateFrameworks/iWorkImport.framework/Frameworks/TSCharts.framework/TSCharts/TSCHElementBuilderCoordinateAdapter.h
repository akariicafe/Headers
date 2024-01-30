@interface TSCHElementBuilderCoordinateAdapter : NSObject

- (struct { struct CGPoint { double x0; double x1; } x0; BOOL x1; } *)cartesianPointsWithSeries:(id)a0 groupIndexSet:(id)a1 nullsUseIntercept:(BOOL)a2 plotAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainedRectWithSeries:(id)a0 elementBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 seriesAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)p_iterateWithXValues:(double *)a0 yValues:(double *)a1 points:(struct { struct CGPoint { double x0; double x1; } x0; BOOL x1; } *)a2 pointCount:(unsigned long long)a3 plotAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 yValueModifierBlock:(id /* block */)a5;
- (struct { struct CGPoint { double x0; double x1; } x0; BOOL x1; } *)p_pointArrayWithCount:(unsigned long long)a0;

@end
