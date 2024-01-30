@class NSString, NSArray;

@interface MLTreeEnsembleRegressor : MLRegressor <MLModelSpecificationLoader, MLCompiledModelLoader, MLSpecificationCompiler> {
    struct shared_ptr<Archiver::MMappedFile> { struct MMappedFile *__ptr_; struct __shared_weak_count *__cntrl_; } _mmapped_model;
    struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *__value_; } __end_cap_; } _cached_model;
    unsigned long long num_dimensions;
    NSArray *output_classes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)compileSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 toArchive:(struct _MLModelOutputArchiver { struct OArchive { BOOL x0; struct shared_ptr<Archiver::_OArchiveImpl> { struct _OArchiveImpl *x0; struct __shared_weak_count *x1; } x1; struct map<std::__1::basic_string<char>, OArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, OArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, OArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, OArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; } x0; } x2; } x0; } *)a1 options:(id)a2 error:(id *)a3;
+ (id)loadModelFromSpecificationWithCompilationOptions:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 options:(id)a1 error:(id *)a2;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 configuration:(id)a1 error:(id *)a2;
+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver { struct IArchive { struct shared_ptr<Archiver::_IArchiveImpl> { struct _IArchiveImpl *x0; struct __shared_weak_count *x1; } x0; struct map<std::__1::basic_string<char>, IArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; } x0; } x1; } x0; } *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;
+ (id)compiledVersionForSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 options:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (double)scalarRegress:(id)a0 error:(id *)a1;
- (const char *)_model_data;
- (id)regress:(id)a0 options:(id)a1 error:(id *)a2;
- (void)vectorRegress:(double *)a0 dest:(double *)a1;
- (id).cxx_construct;
- (double)scalarRegress:(double *)a0;

@end
