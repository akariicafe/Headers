@interface VNSingleHeadSceneprintGenerator : VNEspressoModelFileBasedDetector

+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)a0;
+ (void)fullyPopulateConfigurationOptions:(id)a0;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)a0;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)inferenceNetworkIdentifiers;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)a0;
+ (id)availableVNInferenceNetworkIdentifierStandaloneSceneprintVersions;
+ (id)primaryInferenceNetworkDescriptorForVNInferenceNetworkIdentifierStandaloneSceneprint_3_0_0;

- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 warningRecorder:(id)a2 pixelBuffer:(struct __CVBuffer **)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;

@end
