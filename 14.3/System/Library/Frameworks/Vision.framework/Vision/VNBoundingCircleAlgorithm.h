@interface VNBoundingCircleAlgorithm : NSObject

+ (double)epsilon;
+ (id)boundingCircleForPoints:(id)a0 error:(id *)a1;
+ (id)boundingCircleForSIMDPoints:(const void *)a0 pointCount:(long long)a1 aspectRatioForCentroid:(float)a2 error:(id *)a3;
+ (id)_boundingCircleForPoints:(const struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint *x0; } x2; } *)a0 aspectRatioForCentroid:(float)a1;
+ (void)_boundThreePoints:(const struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint *x0; } x2; } *)a0 circleCenter:(struct CGPoint { double x0; double x1; } *)a1 circleRadius:(double *)a2;
+ (void)_findBoundingCircle:(const struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint *x0; } x2; } *)a0 count:(unsigned long long)a1 circleCenter:(struct CGPoint { double x0; double x1; } *)a2 circleRadius:(double *)a3;
+ (void)_boundingCircle:(const struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint *x0; } x2; } *)a0 circleCenter:(struct CGPoint { double x0; double x1; } *)a1 circleRadius:(double *)a2;
+ (struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint *x0; } x2; })_randomizePointsIndexes:(id)a0;
+ (struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint *x0; } x2; })_randomizePointsIndexes:(const void *)a0 pointCount:(long long)a1;

@end
