@interface VNFaceLandmarkDetectorRevision3 : VNFaceLandmarkDetectorDNN

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)a0;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (unsigned char)landmarkDetectorDNNVersion;

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFaceBBoxForLandmarks:(id)a0;

@end
