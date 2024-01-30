@interface CHStrokeUtilities : NSObject

+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; })convexHullForStrokes:(id)a0 inDrawing:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unionStrokeBounds:(const void *)a0 aroundXPosition:(double)a1 usingOneSideStrokeCountLimit:(long long)a2;
+ (double)arcLengthForStroke:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBoxOfPoints:(const void *)a0 rotatedAroundPoint:(struct CGPoint { double x0; double x1; })a1 byAngle:(double)a2;
+ (double)circumferenceRatioOfCircleFittedToPoints:(const void *)a0 circleCenter:(struct CGPoint { double x0; double x1; } *)a1 circleRadius:(double *)a2;
+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; })convexHullForPoints:(void *)a0;
+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; })convexHullForStroke:(id)a0;
+ (id)createDrawingForStrokes:(id)a0 cancellationBlock:(id /* block */)a1;
+ (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })a0 toRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })a0 toSegmentFromPoint:(struct CGPoint { double x0; double x1; })a1 toPoint:(struct CGPoint { double x0; double x1; })a2;
+ (double)durationOfStrokesInStrokeGroup:(id)a0 strokeProvider:(id)a1;
+ (id)encodedStrokeIdentifiers:(id)a0 withStrokeProvider:(id)a1;
+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; })enlargedConvexHull:(const void *)a0 withMargin:(double)a1;
+ (void)enumeratePointsForStroke:(id)a0 interpolationType:(long long)a1 resolution:(long long)a2 usingBlock:(id /* block */)a3;
+ (void)getAddedStrokes:(id *)a0 removedStrokeIdentifiers:(id *)a1 inStrokeProvider:(id)a2 lastGroupingResult:(id)a3 shouldCancel:(id /* block */)a4;
+ (BOOL)isPointEnumerationSupportedForStroke:(id)a0;
+ (double)lineOrientationForStrokePoints:(const void *)a0 error:(double *)a1;
+ (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; })regularizedPathFromPoints:(const void *)a0 delta:(double)a1 gamma:(double)a2 outError:(double *)a3;
+ (double)speedForFinalTimeRange:(double)a0 stroke:(id)a1;
+ (id)strokeForIdentifier:(id)a0 inStrokeProvider:(id)a1;
+ (id)strokeIdentifiersForData:(id)a0 withStrokeProvider:(id)a1;
+ (double)threePointsOrientationWithOrigin:(struct CGPoint { double x0; double x1; })a0 pointA:(struct CGPoint { double x0; double x1; })a1 pointB:(struct CGPoint { double x0; double x1; })a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unionStrokeBounds:(const void *)a0 usingStrokeCountLimit:(long long)a1 reverseOrder:(BOOL)a2;
+ (double)vectorMeanWithoutOutliers:(void *)a0;

@end
