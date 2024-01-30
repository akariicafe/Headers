@interface TSCHPolarElementBuilderCoordinateAdapter : TSCHElementBuilderCoordinateAdapter

- (struct { struct CGPoint { double x0; double x1; } x0; BOOL x1; } *)cartesianPointsWithSeries:(id)a0 groupIndexSet:(id)a1 nullsUseIntercept:(BOOL)a2 plotAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainedRectWithSeries:(id)a0 elementBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 seriesAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
