@class NSString, ETTaskState, ETTaskDefinition, NSDictionary, MLUpdateProgressHandlers, MLParameterContainer, NSObject, MLShufflingBatchProvider;
@protocol OS_dispatch_queue;

@interface MLNeuralNetworkUpdateEngine : MLNeuralNetworkEngine <MLUpdatable>

@property (retain, nonatomic) MLUpdateProgressHandlers *progressHandlers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressHandlersDispatchQueue;
@property (retain, nonatomic) NSDictionary *coreMLToEspressoParamsMap;
@property (retain, nonatomic) NSString *lossOutputName;
@property (retain, nonatomic) NSString *lossTargetName;
@property (nonatomic) BOOL continueWithUpdate;
@property (retain, nonatomic) MLShufflingBatchProvider *shuffableTrainingData;
@property (retain, nonatomic) MLParameterContainer *parameterContainer;
@property (retain, nonatomic) ETTaskState *snapshot;
@property (retain, nonatomic) ETTaskDefinition *task;
@property (readonly, nonatomic) NSDictionary *classLabelToIndexMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)createCoreMLToEspressoParamsMap;
+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver { struct IArchive { struct shared_ptr<Archiver::_IArchiveImpl> { struct _IArchiveImpl *x0; struct __shared_weak_count *x1; } x0; struct map<std::__1::basic_string<char>, IArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; } x0; } x1; } x0; } *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

- (id)biasForLayer:(id)a0 error:(id *)a1;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)setWeightsOrBiasesForLayer:(id)a0 layerType:(unsigned long long)a1 value:(id)a2 error:(id *)a3;
- (void)resumeUpdateWithParameters:(id)a0;
- (void)setUpdateProgressHandlers:(id)a0 dispatchQueue:(id)a1;
- (id)parameterValueForKey:(id)a0;
- (id)predictionsFromBatch:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (void)cancelUpdate;
- (void)loadLossTargetName:(id *)a0 lossOutputName:(id *)a1 fromUpdateParameters:(struct NetworkUpdateParameters { void /* function */ **x0; struct InternalMetadataWithArenaLite { void *x0; } x1; struct RepeatedPtrField<CoreML::Specification::LossLayer> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x2; struct Optimizer *x3; struct Int64Parameter *x4; struct BoolParameter *x5; struct Int64Parameter *x6; int x7; } *)a2;
- (void)resumeUpdate;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)paramsForLayer:(id)a0 parameterType:(unsigned long long)a1 error:(id *)a2;
- (BOOL)updateLearningRateWithTaskContext:(id)a0 isInCallBack:(BOOL)a1 error:(id *)a2;
- (id)updateParameters;
- (id)initWithCoder:(id)a0;
- (id)weightsForLayer:(id)a0 error:(id *)a1;
- (id)stringForDataType:(unsigned long long)a0;
- (id)createEspressoTaskFrom:(id)a0 updateParameters:(struct NetworkUpdateParameters { void /* function */ **x0; struct InternalMetadataWithArenaLite { void *x0; } x1; struct RepeatedPtrField<CoreML::Specification::LossLayer> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x2; struct Optimizer *x3; struct Int64Parameter *x4; struct BoolParameter *x5; struct Int64Parameter *x6; int x7; } *)a1 lossInputName:(id)a2 lossTargetName:(id)a3 lossOutputName:(id)a4 updatableLayerNames:(id)a5 configuration:(id)a6 error:(id *)a7;
- (id)collectMetricsFromTaskContext:(id)a0 isInCallBack:(BOOL)a1;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (void)loadLossInputName:(id *)a0 updatableLayerNames:(id *)a1 fromCompiledArchive:(struct _MLModelInputArchiver { struct IArchive { struct shared_ptr<Archiver::_IArchiveImpl> { struct _IArchiveImpl *x0; struct __shared_weak_count *x1; } x0; struct map<std::__1::basic_string<char>, IArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; } x0; } x1; } x0; } *)a2;
- (BOOL)updateWeightsAndBiasesFromConfigParams:(id)a0 error:(id *)a1;
- (void)updateModelWithData:(id)a0;
- (id)initWithCompiledArchive:(struct _MLModelInputArchiver { struct IArchive { struct shared_ptr<Archiver::_IArchiveImpl> { struct _IArchiveImpl *x0; struct __shared_weak_count *x1; } x0; struct map<std::__1::basic_string<char>, IArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; } x0; } x1; } x0; } *)a0 nnContainer:(id)a1 configuration:(id)a2 error:(id *)a3;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;

@end
