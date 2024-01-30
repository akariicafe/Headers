@interface VNObjectBasedSaliencyGenerator : VNEspressoModelFileBasedDetector

+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)a0;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)a0;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;

- (BOOL)warmUpSession:(id)a0 withOptions:(id)a1 error:(id *)a2;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (BOOL)_runAnalysisOnImage:(struct __CVBuffer { } *)a0 espressoResources:(id)a1 inputBlobName:(id)a2 error:(id *)a3;
- (id)_observationsForImageIn32BGRAPixelBuffer:(struct __CVBuffer { } *)a0 withOptions:(id)a1 originalImageSize:(struct CGSize { double x0; double x1; })a2 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 warningRecorder:(id)a4 error:(id *)a5;

@end
