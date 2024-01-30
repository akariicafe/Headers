@class NSString, NSArray, NSDictionary, MLModel, MLNeuralNetworksCompileTimeParams, MLVersionInfo;

@interface MLNeuralNetworkContainer : NSObject

@property (nonatomic) int precision;
@property (nonatomic) int engine;
@property (nonatomic) struct map<std::__1::basic_string<char>, MLOptionalNNInputType, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, MLOptionalNNInputType> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, MLOptionalNNInputType>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, MLOptionalNNInputType>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, MLOptionalNNInputType> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, MLOptionalNNInputType>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, MLOptionalNNInputType>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long __value_; } __pair3_; } __tree_; } optionalInputTypes;
@property (retain, nonatomic) NSString *modelFilePath;
@property (readonly, retain, nonatomic) NSArray *inputLayerNames;
@property (readonly, retain, nonatomic) NSArray *outputLayerNames;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *inputDescription;
@property (retain, nonatomic) NSDictionary *outputDescription;
@property (retain, nonatomic) NSDictionary *imageParameters;
@property (retain, nonatomic) NSArray *configurationList;
@property (nonatomic) BOOL hasBidirectionalLayer;
@property (nonatomic) BOOL hasOptionalInputSequenceConcat;
@property (nonatomic) BOOL hasDynamicLayer;
@property (retain) NSArray *classLabels;
@property (retain) NSString *classScoreVectorName;
@property (retain) MLModel *transformDesc;
@property BOOL ndArrayInterpretation;
@property (retain, nonatomic) NSDictionary *imagePreprocessingParams;
@property (retain, nonatomic) MLNeuralNetworksCompileTimeParams *updatableModelCompiledParams;
@property (retain, nonatomic) NSDictionary *optionalInputDefaultValues;
@property (nonatomic) BOOL modelIsEncrypted;
@property (retain, nonatomic) MLVersionInfo *modelVersionInfo;

+ (id)containerFromFilePath:(id)a0 inputLayerNames:(id)a1 outputLayerNames:(id)a2 parameters:(id)a3;
+ (BOOL)readIsClassifier:(struct IArchive { struct shared_ptr<Archiver::_IArchiveImpl> { struct _IArchiveImpl *x0; struct __shared_weak_count *x1; } x0; struct map<std::__1::basic_string<char>, IArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; } x0; } x1; } *)a0;
+ (id)containerFromCompiledArchive:(struct _MLModelInputArchiver { struct IArchive { struct shared_ptr<Archiver::_IArchiveImpl> { struct _IArchiveImpl *x0; struct __shared_weak_count *x1; } x0; struct map<std::__1::basic_string<char>, IArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; } x0; } x1; } x0; } *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

- (void).cxx_destruct;
- (id)initWithFeatureDescriptions:(id)a0 transformDesc:(id)a1 outputLayerNames:(id)a2 parameters:(id)a3 configurations:(id)a4 classScoreVectorName:(id)a5 classLabels:(id)a6 hasBidirectionalLayer:(BOOL)a7 hasOptionalInputSequenceConcat:(BOOL)a8 hasDynamicLayer:(BOOL)a9;
- (id).cxx_construct;
- (id)initWithFilePath:(id)a0 inputLayerNames:(id)a1 outputLayerNames:(id)a2 parameters:(id)a3;

@end
