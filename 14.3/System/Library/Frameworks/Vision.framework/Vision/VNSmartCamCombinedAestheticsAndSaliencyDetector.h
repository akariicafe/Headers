@interface VNSmartCamCombinedAestheticsAndSaliencyDetector : VNEspressoModelFileBasedDetector

+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;

- (id)_classifyAesthetics:(BOOL)a0 generateSaliencyHeatMap:(BOOL)a1 for32BGRAImageInPixelBuffer:(struct __CVBuffer { } *)a2 withOptions:(id)a3 modelInputImageSize:(struct CGSize { double x0; double x1; })a4 originalImageSize:(struct CGSize { double x0; double x1; })a5 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 warningRecorder:(id)a7 error:(id *)a8;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;
- (int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)a0;
- (BOOL)warmUpSession:(id)a0 withOptions:(id)a1 error:(id *)a2;

@end
