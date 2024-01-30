@class NSString, NSDictionary, MLModelDescription, MLModelMetadata, NSData, NSArray;

@interface MLItemSimilarityRecommender : MLModel <MLModelSpecificationLoader, MLModeling, MLCompiledModelLoader, MLSpecificationCompiler> {
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } m_cached_model;
    NSData *m_model_data;
    unsigned long long m_num_items;
    NSString *m_item_data_feature_name;
    NSString *m_num_recommendations_feature_name;
    NSString *m_item_restriction_feature_name;
    NSString *m_item_exclusion_feature_name;
    NSString *m_item_list_output_feature_name;
    NSString *m_item_score_output_feature_name;
    NSDictionary *m_item_mapping;
    NSArray *m_item_string_list;
    NSArray *m_item_integer_list;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _m_scores;
    struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *__value_; } __end_cap_; } _m_items;
    struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *__value_; } __end_cap_; } _m_item_buffer;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _m_item_invalid_mask;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _m_item_predictions;
    struct vector<std::pair<unsigned long long, double>, std::allocator<std::pair<unsigned long long, double>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<unsigned long long, double> *, std::allocator<std::pair<unsigned long long, double>>> { void *__value_; } __end_cap_; } _m_item_heap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (readonly) MLModelMetadata *metadata;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;
+ (id)compileSpecification:(void *)a0 toArchive:(void *)a1 options:(id)a2 error:(id *)a3;
+ (id)compiledVersionForSpecification:(void *)a0 options:(id)a1 error:(id *)a2;
+ (id)loadModelFromSpecificationWithCompilationOptions:(void *)a0 options:(id)a1 error:(id *)a2;
+ (id)loadModelFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

- (id).cxx_construct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (const char *)modelData;
- (void).cxx_destruct;
- (id)_itemForIndex:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_mapItemSequence:(id)a0 dest:(void *)a1 error:(id *)a2;

@end
