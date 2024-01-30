@interface VNFaceAnalyzerMultiDetectorBase : VNEspressoModelFileBasedDetector {
    struct shared_ptr<vision::mod::FaceprintAndAttributes> { struct FaceprintAndAttributes *__ptr_; struct __shared_weak_count *__cntrl_; } _mMultiHeadedFaceClassifier;
}

@property (class, readonly) unsigned long long numberOfImageChannels;

+ (id)configurationOptionKeysForDetectorKey;
+ (id)keyForDetectorWithConfigurationOptions:(id)a0;
+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;
+ (const void *)modelVersionForOptions:(id)a0;

- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_addFaceAnalysisResultsFromMap:(void *)a0 toFaceAttributeObject:(id)a1 forOriginatingRequestSpecifier:(id)a2;
- (BOOL)_saveFaceprint:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })a0 toFaceObservation:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)_isFaceprintJunk:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)_saveFaceAttributes:(void *)a0 toFaceObservation:(id)a1 options:(id)a2 error:(id *)a3;

@end
