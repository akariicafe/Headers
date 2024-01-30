@interface VNFaceGeometryEstimator : VNDetector

+ (const void *)allLandmarksPointsIndexes;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (BOOL)_buildCalibrationMatrix:(id)a0 calibrationMatrix:(float *)a1 error:(id *)a2;

@end
