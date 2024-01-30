@interface VNFaceAnalyzerMultiDetectorFArev2_CameraLightweight : VNFaceAnalyzerMultiDetector

+ (const void *)modelVersionForOptions:(id)a0;
+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;

- (BOOL)_isFaceprintJunk:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })a0;

@end
