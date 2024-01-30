@interface VNFaceGeometryEstimator : VNDetector

+ (const struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } *)allLandmarksPointsIndexes;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;
- (BOOL)_buildCalibrationMatrix:(id)a0 calibrationMatrix:(float *)a1 error:(id *)a2;

@end
