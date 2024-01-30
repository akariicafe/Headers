@interface VNSaliencyHeatmapBoundingBoxGenerator : VNEspressoModelFileBasedDetector

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)calculateSaliencyBoundingBoxesForDetectorType:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 configurationOptions:(id)a2 requestRevision:(unsigned long long)a3 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 warningRecorder:(id)a5 error:(id *)a6;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)a0;
+ (id)configurationOptionKeysForDetectorKey;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;
- (id)_observationsForOneComponent32FloatPixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 error:(id *)a3;
- (struct __CVBuffer { } *)_createScaledOneComponent32FloatPixelBufferFromImageBuffer:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)supportsProcessingDevice:(id)a0;

@end
