@class MLUpdateProgressHandlers, NSArray, NSDictionary, MLParameterContainer, NSOrderedSet, NSObject, NSString;
@protocol OS_dispatch_queue, MLNearestNeighborsIndex;

@interface MLKNearestNeighborsClassifier : MLModel <MLSpecificationCompiler, MLCompiledModelLoader, MLUpdatable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MLUpdateProgressHandlers *progressHandlers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressHandlersDispatchQueue;
@property (retain, nonatomic) NSDictionary *updateParameters;
@property (nonatomic) BOOL continueWithUpdate;
@property (retain, nonatomic) MLParameterContainer *parameterContainer;
@property (nonatomic) unsigned long long numberOfDimensions;
@property (nonatomic) long long indexType;
@property (retain, nonatomic) id<MLNearestNeighborsIndex> index;
@property (nonatomic) long long labelType;
@property (retain, nonatomic) NSArray *labelsForDataPoints;
@property (retain, nonatomic) NSOrderedSet *labelsSet;
@property (retain, nonatomic) NSObject *defaultLabel;
@property (nonatomic) long long weightingScheme;
@property (retain, nonatomic) NSString *nearestLabelsFeatureName;
@property (retain, nonatomic) NSString *nearestDistancesFeatureName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)compileSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 toArchive:(struct _MLModelOutputArchiver { struct OArchive { BOOL x0; struct shared_ptr<Archiver::_OArchiveImpl> { struct _OArchiveImpl *x0; struct __shared_weak_count *x1; } x1; struct map<std::__1::basic_string<char>, OArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, OArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, OArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, OArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; } x0; } x2; } x0; } *)a1 options:(id)a2 error:(id *)a3;
+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver { struct IArchive { struct shared_ptr<Archiver::_IArchiveImpl> { struct _IArchiveImpl *x0; struct __shared_weak_count *x1; } x0; struct map<std::__1::basic_string<char>, IArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; } x0; } x1; } x0; } *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;
+ (id)compiledVersionForSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 options:(id)a1 error:(id *)a2;

- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (struct vector<std::__1::pair<unsigned long, float>, std::__1::allocator<std::__1::pair<unsigned long, float> > > { struct pair<unsigned long, float> *x0; struct pair<unsigned long, float> *x1; struct __compressed_pair<std::__1::pair<unsigned long, float> *, std::__1::allocator<std::__1::pair<unsigned long, float> > > { struct pair<unsigned long, float> *x0; } x2; })computeKClosestLabels:(id)a0;
- (id)initWithDescription:(id)a0 configuration:(id)a1 parameters:(id)a2 dataPoints:(struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a3 labels:(id)a4 error:(id *)a5;
- (void)computeClassProbabilities:(id *)a0 from:(struct vector<std::__1::pair<unsigned long, float>, std::__1::allocator<std::__1::pair<unsigned long, float> > > { struct pair<unsigned long, float> *x0; struct pair<unsigned long, float> *x1; struct __compressed_pair<std::__1::pair<unsigned long, float> *, std::__1::allocator<std::__1::pair<unsigned long, float> > > { struct pair<unsigned long, float> *x0; } x2; } *)a1;
- (id)inputMultiArray:(id)a0 error:(id *)a1;
- (void)extractNearestNeighborLabels:(id *)a0 distances:(id *)a1 from:(struct vector<std::__1::pair<unsigned long, float>, std::__1::allocator<std::__1::pair<unsigned long, float> > > { struct pair<unsigned long, float> *x0; struct pair<unsigned long, float> *x1; struct __compressed_pair<std::__1::pair<unsigned long, float> *, std::__1::allocator<std::__1::pair<unsigned long, float> > > { struct pair<unsigned long, float> *x0; } x2; })a2;
- (id)packageOutputWithPredictedLabel:(id)a0 classProbabilities:(id)a1 nearestLabels:(id)a2 nearestDistances:(id)a3;
- (void).cxx_destruct;
- (void)resumeUpdateWithParameters:(id)a0;
- (void)setUpdateProgressHandlers:(id)a0 dispatchQueue:(id)a1;
- (void)cancelUpdate;
- (void)resumeUpdate;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (void)updateModelWithData:(id)a0;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;

@end
