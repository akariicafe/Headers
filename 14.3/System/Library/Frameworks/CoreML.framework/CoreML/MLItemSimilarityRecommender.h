@class NSString, NSDictionary, MLModelDescription, MLModelMetadata, NSArray, MLModelInterface;

@interface MLItemSimilarityRecommender : MLModel <MLModelSpecificationLoader, MLModeling, MLCompiledModelLoader, MLSpecificationCompiler> {
    struct shared_ptr<Archiver::MMappedFile> { struct MMappedFile *__ptr_; struct __shared_weak_count *__cntrl_; } m_mmapped_model;
    struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *__value_; } __end_cap_; } m_cached_model;
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
    struct vector<double, std::__1::allocator<double> > { double *__begin_; double *__end_; struct __compressed_pair<double *, std::__1::allocator<double> > { double *__value_; } __end_cap_; } _m_scores;
    struct vector<unsigned long long, std::__1::allocator<unsigned long long> > { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > { unsigned long long *__value_; } __end_cap_; } _m_items;
    struct vector<unsigned long long, std::__1::allocator<unsigned long long> > { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > { unsigned long long *__value_; } __end_cap_; } _m_item_buffer;
    struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *__value_; } __end_cap_; } _m_item_invalid_mask;
    struct vector<double, std::__1::allocator<double> > { double *__begin_; double *__end_; struct __compressed_pair<double *, std::__1::allocator<double> > { double *__value_; } __end_cap_; } _m_item_predictions;
    struct vector<std::__1::pair<unsigned long long, double>, std::__1::allocator<std::__1::pair<unsigned long long, double> > > { struct pair<unsigned long long, double> *__begin_; struct pair<unsigned long long, double> *__end_; struct __compressed_pair<std::__1::pair<unsigned long long, double> *, std::__1::allocator<std::__1::pair<unsigned long long, double> > > { struct pair<unsigned long long, double> *__value_; } __end_cap_; } _m_item_heap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (readonly) MLModelInterface *interface;
@property (readonly) MLModelMetadata *metadata;

+ (id)compileSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 toArchive:(struct _MLModelOutputArchiver { struct OArchive { BOOL x0; struct shared_ptr<Archiver::_OArchiveImpl> { struct _OArchiveImpl *x0; struct __shared_weak_count *x1; } x1; struct map<std::__1::basic_string<char>, OArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, OArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, OArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, OArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; } x0; } x2; } x0; } *)a1 options:(id)a2 error:(id *)a3;
+ (id)loadModelFromSpecificationWithCompilationOptions:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 options:(id)a1 error:(id *)a2;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 configuration:(id)a1 error:(id *)a2;
+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver { struct IArchive { struct shared_ptr<Archiver::_IArchiveImpl> { struct _IArchiveImpl *x0; struct __shared_weak_count *x1; } x0; struct map<std::__1::basic_string<char>, IArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; } x0; } x1; } x0; } *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;
+ (id)compiledVersionForSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 options:(id)a1 error:(id *)a2;

- (id)_itemForIndex:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_mapItemSequence:(id)a0 dest:(struct vector<unsigned long long, std::__1::allocator<unsigned long long> > { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > { unsigned long long *x0; } x2; } *)a1 error:(id *)a2;
- (void).cxx_destruct;
- (const char *)_model_data;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id).cxx_construct;

@end
