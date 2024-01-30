@interface PKClusteringUtility : NSObject

+ (id)_clusteredStrokesWithInitialStrokes:(id)a0 selectionType:(long long)a1 visibleStrokes:(id)a2 approximateLineHeight:(double)a3 approximateLineCenter:(double)a4;
+ (void)_fetchIntersectedStrokesForGeometricBasedStrokeClusteringBetweenPoint:(struct CGPoint { double x0; double x1; })a0 otherPoint:(struct CGPoint { double x0; double x1; })a1 visibleStrokes:(id)a2 completion:(id /* block */)a3;
+ (id)_geometricBasedStrokeClusteringFromPoint:(struct CGPoint { double x0; double x1; })a0 visibleStrokes:(id)a1 selectionType:(long long)a2 inputType:(long long)a3;
+ (double)arrayAverage:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (double)estimatedWordDistanceForStrokes:(id)a0 lineHeight:(double)a1;
+ (id)horizontalDistanceBetweenStrokes:(id)a0 lineHeight:(double)a1;
+ (id)kMeansCluster:(int)a0 values:(id)a1 clusterError:(double)a2 maxIterations:(int)a3;

@end
