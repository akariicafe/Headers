@interface VNDetectionprintGenerator : VNEspressoModelFileBasedDetector

+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)a0;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;
- (id)_detectionprintTensorForOutputBuffer:(const struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 requestRevision:(unsigned long long)a1 error:(id *)a2;
- (id)_analyzePixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1 error:(id *)a2;
- (id)supportedImageSizeSetForProcessingOptions:(id)a0;

@end
