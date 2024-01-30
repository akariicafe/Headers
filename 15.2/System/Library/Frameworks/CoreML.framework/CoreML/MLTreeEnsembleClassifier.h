@class NSString, NSArray;

@interface MLTreeEnsembleClassifier : MLClassifier <MLModelSpecificationLoader, MLCompiledModelLoader, MLSpecificationCompiler> {
    struct shared_ptr<Archiver::MMappedFile> { struct MMappedFile *__ptr_; struct __shared_weak_count *__cntrl_; } _mmapped_model;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _cached_model;
    unsigned long long num_dimensions;
    struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *__value_; } __end_cap_; } _classes_by_string;
    struct vector<long long, std::allocator<long long>> { long long *__begin_; long long *__end_; struct __compressed_pair<long long *, std::allocator<long long>> { long long *__value_; } __end_cap_; } _classes_by_int64_t;
    long long _class_type;
    NSArray *_class_values;
    NSString *_single_array_key;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;
+ (BOOL)_convertStringClassVector:(const void *)a0 int64ClassVector:(const void *)a1 dimensions:(unsigned long long)a2 toClassLabel:(id *)a3 classType:(long long *)a4 andReturnError:(id *)a5;
+ (id)compileSpecification:(void *)a0 toArchive:(void *)a1 options:(id)a2 error:(id *)a3;
+ (id)loadModelFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;
+ (id)compiledVersionForSpecification:(void *)a0 options:(id)a1 error:(id *)a2;
+ (id)loadModelFromSpecificationWithCompilationOptions:(void *)a0 options:(id)a1 error:(id *)a2;

- (id)_buildClassificationClasses:(double *)a0 topk:(unsigned long long)a1 error:(id *)a2;
- (id)classify:(id)a0 options:(id)a1 error:(id *)a2;
- (const char *)_model_data;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_setSingleArrayLookupField;

@end
