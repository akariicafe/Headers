@class NSString, NSSet;

@interface VNEspressoModelClassifier : VNDetector {
    struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { struct ImageDescriptorProcessorAbstract *__ptr_; struct __shared_weak_count *__cntrl_; } mDescriptorProcessor;
    struct shared_ptr<vision::mod::ImageClassifierAbstract> { struct ImageClassifierAbstract *__ptr_; struct __shared_weak_count *__cntrl_; } mClassifier;
    NSSet *_blacklistedIdentifiers;
}

@property (class, readonly) Class espressoModelImageprintClass;
@property (class, readonly) NSString *returnAllResultsOptionKey;

+ (struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { struct ImageClassifier_HierarchicalModel *x0; struct __shared_weak_count *x1; })createHierarchicalModelForRequestRevision:(unsigned long long)a0 error:(id *)a1;
+ (void)convertRelationships:(id)a0 toStdRelationships:(struct vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char> > > > { struct pair<std::__1::basic_string<char>, std::__1::basic_string<char> > *x0; struct pair<std::__1::basic_string<char>, std::__1::basic_string<char> > *x1; struct __compressed_pair<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char> > *, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char> > > > { struct pair<std::__1::basic_string<char>, std::__1::basic_string<char> > *x0; } x2; } *)a1;
+ (struct shared_ptr<vision::mod::ImageClassifierAbstract> { struct ImageClassifierAbstract *x0; struct __shared_weak_count *x1; })createClassifierWithDescriptor:(struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { struct ImageDescriptorProcessorAbstract *x0; struct __shared_weak_count *x1; })a0 classifierAbsolutePath:(const char *)a1 computePlatform:(int)a2 computePath:(int)a3 labelsFilename:(const char *)a4 options:(struct Options { BOOL x0; unsigned long long x1; id x2; id x3; })a5;
+ (struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { struct ImageDescriptorProcessorAbstract *x0; struct __shared_weak_count *x1; })createDescriprorProcessorWithModelPath:(const char *)a0 nBatch:(int)a1 computePlatform:(int)a2 computePath:(int)a3 options:(struct Options { BOOL x0; unsigned long long x1; id x2; id x3; })a4;
+ (id)classifierResourceTypesToNamesForRevision:(unsigned long long)a0;
+ (id)createObservationWithDescriptors:(id)a0 forRequestRevision:(unsigned long long)a1;
+ (void)initDumpDebugIntermediates:(id *)a0 debugInfo:(id *)a1;

- (void).cxx_destruct;
- (id)blacklistedIdentifiers;
- (id)calculateImageDescriptors:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 canceller:(id)a3 error:(id *)a4;
- (BOOL)_calculateImageDescriptors:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 canceller:(id)a3 descriptorBuffer:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; } *)a4 debugIntermediatesDumpPath:(id)a5 outputDebugDictionary:(id)a6 error:(id *)a7;
- (id).cxx_construct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (id)getLabels;

@end
