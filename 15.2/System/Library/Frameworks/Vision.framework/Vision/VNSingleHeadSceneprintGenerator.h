@interface VNSingleHeadSceneprintGenerator : VNEspressoModelFileBasedDetector

+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)a0;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)configurationOptionKeysForDetectorKey;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)a0;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)a0;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (void)fullyPopulateConfigurationOptions:(id)a0;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)_analyzePixelBuffer:(struct __CVBuffer { } *)a0 sceneprintOutputBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a1 options:(id)a2 error:(id *)a3;
- (BOOL)_analyzeRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sceneprintOutputBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a1 options:(id)a2 warningRecorder:(id)a3 error:(id *)a4;
- (id)_observationsForSceneprintOutput:(const struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 originatingRequestSpecifier:(id)a1 error:(id *)a2;

@end
