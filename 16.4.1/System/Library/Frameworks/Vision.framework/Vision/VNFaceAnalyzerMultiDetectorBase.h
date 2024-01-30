@interface VNFaceAnalyzerMultiDetectorBase : VNEspressoModelFileBasedDetector {
    struct shared_ptr<vision::mod::FaceprintAndAttributes> { struct FaceprintAndAttributes *__ptr_; struct __shared_weak_count *__cntrl_; } _mMultiHeadedFaceClassifier;
}

@property (class, readonly) unsigned long long numberOfImageChannels;

+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;
+ (const void *)modelVersionForOptions:(id)a0;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)keyForDetectorWithConfigurationOptions:(id)a0;

- (BOOL)_isFaceprintJunk:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })a0;
- (id).cxx_construct;
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 warningRecorder:(id)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)_addFaceAnalysisResultsFromMap:(void *)a0 toFaceAttributeObject:(id)a1 forOriginatingRequestSpecifier:(id)a2;
- (BOOL)_saveFaceAttributes:(void *)a0 toFaceObservation:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)_saveFaceprint:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })a0 toFaceObservation:(id)a1 options:(id)a2 error:(id *)a3;

@end
