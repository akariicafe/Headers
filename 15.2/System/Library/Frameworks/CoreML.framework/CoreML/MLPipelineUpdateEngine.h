@class MLUpdateProgressHandlers, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MLPipelineUpdateEngine : MLPipeline <MLUpdatable>

@property (readonly) struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *__value_; } __end_cap_; } updatableModelIndicies;
@property (retain) MLUpdateProgressHandlers *progressHandlers;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

- (void)resumeUpdate;
- (void)resumeUpdateWithParameters:(id)a0;
- (id)initFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;
- (void).cxx_destruct;
- (void)setUpdateProgressHandlers:(id)a0 dispatchQueue:(id)a1;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (void)cancelUpdate;
- (void)updateModelWithData:(id)a0;
- (id).cxx_construct;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;

@end
