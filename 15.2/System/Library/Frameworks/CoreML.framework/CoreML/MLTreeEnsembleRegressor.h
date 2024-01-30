@class NSString, NSArray;

@interface MLTreeEnsembleRegressor : MLRegressor <MLModelSpecificationLoader, MLCompiledModelLoader, MLSpecificationCompiler> {
    struct shared_ptr<Archiver::MMappedFile> { struct MMappedFile *__ptr_; struct __shared_weak_count *__cntrl_; } _mmapped_model;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _cached_model;
    unsigned long long num_dimensions;
    NSArray *output_classes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;
+ (id)compileSpecification:(void *)a0 toArchive:(void *)a1 options:(id)a2 error:(id *)a3;
+ (id)loadModelFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;
+ (id)compiledVersionForSpecification:(void *)a0 options:(id)a1 error:(id *)a2;
+ (id)loadModelFromSpecificationWithCompilationOptions:(void *)a0 options:(id)a1 error:(id *)a2;

- (id)regress:(id)a0 options:(id)a1 error:(id *)a2;
- (const char *)_model_data;
- (void)vectorRegress:(double *)a0 dest:(double *)a1;
- (void).cxx_destruct;
- (double)scalarRegress:(id)a0 error:(id *)a1;
- (id).cxx_construct;
- (double)scalarRegress:(double *)a0;

@end
