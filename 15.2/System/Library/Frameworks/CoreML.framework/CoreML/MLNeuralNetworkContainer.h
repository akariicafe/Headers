@class NSArray, NSString, NSDictionary, MLModel, MLNeuralNetworksCompileTimeParams, MLVersionInfo;

@interface MLNeuralNetworkContainer : NSObject {
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, int>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } widths;
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, int>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } heights;
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, int>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } ks;
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, int>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } batches;
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, int>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } sequences;
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, int>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } ranks;
}

@property (nonatomic) int precision;
@property (nonatomic) int engine;
@property (retain, nonatomic) NSArray *outputLayerNames;
@property (nonatomic) struct map<std::string, MLOptionalNNInputType, std::less<std::string>, std::allocator<std::pair<const std::string, MLOptionalNNInputType>>> { struct __tree<std::__value_type<std::string, MLOptionalNNInputType>, std::__map_value_compare<std::string, std::__value_type<std::string, MLOptionalNNInputType>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, MLOptionalNNInputType>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, MLOptionalNNInputType>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, MLOptionalNNInputType>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } optionalInputTypes;
@property (retain, nonatomic) NSString *modelFilePath;
@property (readonly, retain, nonatomic) NSArray *inputLayerNames;
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
@property (nonatomic) BOOL modelIsMIL;

+ (id)containerFromFilePath:(id)a0 inputLayerNames:(id)a1 outputLayerNames:(id)a2 parameters:(id)a3;
+ (BOOL)readIsClassifier:(void *)a0;
+ (id)containerFromCompiledArchiveCommon:(void *)a0 filename:(id)a1 modelVersionInfo:(id)a2 compilerVersionInfo:(id)a3 configuration:(id)a4 error:(id *)a5;
+ (id)containerFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

- (id)initWithFilePath:(id)a0 inputLayerNames:(id)a1 outputLayerNames:(id)a2 parameters:(id)a3;
- (id)initWithFeatureDescriptions:(id)a0 transformDesc:(id)a1 outputLayerNames:(id)a2 classScoreVectorName:(id)a3 classLabels:(id)a4 isEncrypted:(BOOL)a5 modelVersionInfo:(id)a6;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
