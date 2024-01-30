@interface VNTorsoprintGenerator : VNEspressoModelFileBasedDetector

+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (struct CGSize { double x0; double x1; })_torsoprintInputImageSizeForFaceOrientation:(int)a0;
+ (struct CGSize { double x0; double x1; })_torsoprintDescriptorSize;
+ (float)_minimumTorsoInsideInputImageThreshold;
+ (float)_magnifiedBBoxScaleFactor;
+ (id)configurationOptionKeysForDetectorKey;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;
- (BOOL)_runTorsoprintModelOnImageBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (BOOL)_calculateTorsoBBoxFromFaceBBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 insideImageWithSize:(struct CGSize { double x0; double x1; })a1 faceOrientationRelativeToUpright:(int)a2 torsoBBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 error:(id *)a4;
- (BOOL)supportsProcessingDevice:(id)a0;

@end
