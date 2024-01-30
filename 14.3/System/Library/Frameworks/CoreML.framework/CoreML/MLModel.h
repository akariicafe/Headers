@class MLFairPlayDecryptSession, MLModelConfiguration, MLModelDescription, MLModelMetadata, MLModelInterface;

@interface MLModel : NSObject <MLModeling>

@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (retain, nonatomic) MLModelConfiguration *configuration;
@property (retain, nonatomic) MLFairPlayDecryptSession *decryptSession;
@property (readonly) MLModelInterface *interface;
@property (readonly) MLModelMetadata *metadata;

+ (BOOL)serializeInterfaceAndMetadata:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 toArchive:(struct _MLModelOutputArchiver { struct OArchive { BOOL x0; struct shared_ptr<Archiver::_OArchiveImpl> { struct _OArchiveImpl *x0; struct __shared_weak_count *x1; } x1; struct map<std::__1::basic_string<char>, OArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, OArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, OArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, OArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; } x0; } x2; } x0; } *)a1 error:(id *)a2;
+ (id)modelWithContentsOfURL:(id)a0 error:(id *)a1;
+ (id)compileModelAtURL:(id)a0 error:(id *)a1;
+ (id)predictionsFromLoopingOverBatch:(id)a0 model:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)predictionsFromSubbatchingBatch:(id)a0 maxSubbatchLength:(long long)a1 predictionBlock:(id /* block */)a2 options:(id)a3 error:(id *)a4;
+ (id)compileModelWithoutAutoreleaseAtURL:(id)a0 error:(id *)a1;
+ (id)_compileModelAtURL:(id)a0 error:(id *)a1;
+ (id)modelWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;

- (id)debugQuickLookObject;
- (id)initDescriptionOnlyWithSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithDescription:(id)a0;
- (id)objectBoundingBoxOutputDescription;
- (void).cxx_destruct;
- (id)initInterfaceAndMetadataWithCompiledArchive:(struct _MLModelInputArchiver { struct IArchive { struct shared_ptr<Archiver::_IArchiveImpl> { struct _IArchiveImpl *x0; struct __shared_weak_count *x1; } x0; struct map<std::__1::basic_string<char>, IArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; } x0; } x1; } x0; } *)a0 error:(id *)a1;
- (id)predictionsFromBatch:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)visionFeaturePrintInfo;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithDescription:(id)a0 configuration:(id)a1;
- (id)initWithInterface:(id)a0 metadata:(id)a1 configuration:(id)a2;
- (id)initWithName:(id)a0 inputDescription:(id)a1 outputDescription:(id)a2 orderedInputFeatureNames:(id)a3 orderedOutputFeatureNames:(id)a4 configuration:(id)a5;
- (id)initWithConfiguration:(id)a0;
- (id)description;
- (id)vectorizeInput:(id)a0 error:(id *)a1;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (void)setModelPath:(id)a0 modelName:(id)a1;
- (id)executionSchedule;
- (id)modelPath;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;

@end
