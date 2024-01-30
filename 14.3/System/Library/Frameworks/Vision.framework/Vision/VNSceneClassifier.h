@class NSString;

@interface VNSceneClassifier : VNEspressoModelClassifier {
    struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { struct ImageClassifier_HierarchicalModel *__ptr_; struct __shared_weak_count *__cntrl_; } _sceneClassifierHierarchicalModel;
}

@property (class, readonly) Class espressoModelImageprintClass;
@property (class, readonly) NSString *returnAllResultsOptionKey;

+ (id)configurationOptionKeysForDetectorKey;
+ (struct shared_ptr<vision::mod::ImageClassifierAbstract> { struct ImageClassifierAbstract *x0; struct __shared_weak_count *x1; })createClassifierWithDescriptor:(struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { struct ImageDescriptorProcessorAbstract *x0; struct __shared_weak_count *x1; })a0 classifierAbsolutePath:(const char *)a1 computePlatform:(int)a2 computePath:(int)a3 labelsFilename:(const char *)a4 options:(struct Options { BOOL x0; unsigned long long x1; id x2; id x3; })a5;
+ (struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { struct ImageDescriptorProcessorAbstract *x0; struct __shared_weak_count *x1; })createDescriprorProcessorWithModelPath:(const char *)a0 nBatch:(int)a1 computePlatform:(int)a2 computePath:(int)a3 options:(struct Options { BOOL x0; unsigned long long x1; id x2; id x3; })a4;
+ (id)classifierResourceTypesToNamesForRevision:(unsigned long long)a0;
+ (id)createObservationWithDescriptors:(id)a0 forRequestRevision:(unsigned long long)a1;
+ (void)initDumpDebugIntermediates:(id *)a0 debugInfo:(id *)a1;
+ (id)supportedImageSizeSetForProcessingOptions:(id)a0;

- (void).cxx_destruct;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;
- (id).cxx_construct;
- (id)supportedImageSizeSetForProcessingOptions:(id)a0;
- (BOOL)isSceneprinterCompatibleWithSceneprinterCreatedWithOptions:(id)a0 error:(id *)a1;
- (BOOL)initImageDescriptorBuffer:(id)a0 descriptorBuffer:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; } *)a1 error:(id *)a2;
- (id)labelOperationPointsForRequestRevision:(unsigned long long)a0 error:(id *)a1;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;

@end
