@class NSString, _MTLDevice, NSObject;
@protocol OS_dispatch_queue;

@interface MTLCompiler : NSObject {
    _MTLDevice *_device;
    struct shared_ptr<MTLCompilerCache> { struct MTLCompilerCache *__ptr_; struct __shared_weak_count *__cntrl_; } _shaderCache;
}

@property (readonly, copy) NSString *pluginPath;
@property (readonly) NSObject<OS_dispatch_queue> *compilerQueue;
@property (readonly) struct MTLCompilerConnectionManager { void /* function */ **x0; } *compilerConnectionManager;
@property (readonly) unsigned int compilerId;
@property (readonly) unsigned long long compilerFlags;

- (void)unloadShaderCaches;
- (void)compileFunction:(id)a0 serializedData:(id)a1 stateData:(id)a2 options:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (BOOL)addTileRenderPipelineStateWithDescriptor:(id)a0 destinationBinaryArchive:(id)a1 error:(id *)a2;
- (struct { unsigned char x0[32]; })hashKeyForLibraryRequest:(struct MTLCompileLibraryRequestData { BOOL x0; id x1; unsigned int x2; id x3; id x4; } *)a0;
- (BOOL)addTileRenderPipelineStateWithDescriptor:(id)a0 destinationBinaryArchive:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (void)compileFunction:(id)a0 frameworkData:(id)a1 driverKeyData:(id)a2 options:(unsigned long long)a3 pipelineCache:(id)a4 sync:(BOOL)a5 completionHandler:(id /* block */)a6;
- (void).cxx_destruct;
- (void)compileRequest:(id)a0 pipelineCache:(id)a1 sync:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)compileDynamicLibrary:(id)a0 computePipelineDescriptor:(id)a1 error:(id *)a2;
- (void)compileFunctionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (BOOL)copyShaderCacheToPath:(id)a0;
- (void)reflectionWithFunction:(id)a0 options:(unsigned long long)a1 sync:(BOOL)a2 pipelineLibrary:(id)a3 completionHandler:(id /* block */)a4;
- (void)reflectionWithFunction:(id)a0 options:(unsigned long long)a1 sync:(BOOL)a2 binaryArchives:(id)a3 completionHandler:(id /* block */)a4;
- (void)compileFunctionRequestInternal:(id)a0 frameworkLinking:(BOOL)a1 linkDataSize:(unsigned long long)a2 reflectionOnly:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)compileFunction:(id)a0 serializedPipelineData:(id)a1 stateData:(id)a2 linkDataSize:(unsigned long long)a3 frameworkLinking:(BOOL)a4 options:(unsigned int)a5 sync:(BOOL)a6 completionHandler:(id /* block */)a7;
- (void)compileFunction:(id)a0 visibleFunctions:(id)a1 privateVisibleFunctions:(id)a2 visibleFunctionGroups:(id)a3 frameworkData:(id)a4 driverKeyData:(id)a5 options:(unsigned long long)a6 pipelineCache:(id)a7 sync:(BOOL)a8 completionHandler:(id /* block */)a9;
- (struct { unsigned char x0[32]; })hashKeyForStatelessCompilationRequest:(id)a0;
- (void *)getShaderCacheKeys;
- (void)reflectionWithFunction:(id)a0 options:(unsigned long long)a1 sync:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)compileFunction:(id)a0 frameworkData:(id)a1 driverKeyData:(id)a2 options:(unsigned long long)a3 pipelineCache:(id)a4 completionHandler:(id /* block */)a5;
- (void)compileStatelessFunctionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)compileFunction:(id)a0 serializedPipelineData:(id)a1 stateData:(id)a2 linkDataSize:(unsigned long long)a3 frameworkLinking:(BOOL)a4 options:(unsigned int)a5 pipelineCache:(id)a6 sync:(BOOL)a7 completionHandler:(id /* block */)a8;
- (BOOL)addComputePipelineStateWithDescriptor:(id)a0 destinationBinaryArchive:(id)a1 error:(id *)a2;
- (void)allowLibrariesFromOtherPlatforms;
- (void)compileFunction:(id)a0 visibleFunctions:(id)a1 visibleFunctionGroups:(id)a2 frameworkData:(id)a3 driverKeyData:(id)a4 options:(unsigned long long)a5 pipelineCache:(id)a6 sync:(BOOL)a7 completionHandler:(id /* block */)a8;
- (id).cxx_construct;
- (struct { unsigned int x0; unsigned int x1; })libraryCacheStats;
- (BOOL)addComputePipelineStateWithDescriptor:(id)a0 destinationBinaryArchive:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (void)reflectionWithFunction:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)compileRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithTargetData:(id)a0 cacheUUID:(struct { unsigned char x0[32]; } *)a1 pluginPath:(id)a2 device:(id)a3 compilerFlags:(unsigned long long)a4;
- (void)statelessBackendCompileRequestInternal:(struct MTLCompilerFunctionRequest { void /* function */ **x0; int x1; id x2; id x3; id x4; unsigned int x5; unsigned int x6; unsigned int x7; id x8; id x9; unsigned long long x10; id x11; id x12; id x13; id x14; int x15; } *)a0 sync:(BOOL)a1 compilerHash:(const struct { unsigned char x0[32]; } *)a2 completionHandler:(id /* block */)a3;
- (BOOL)addRenderPipelineStateWithDescriptor:(id)a0 destinationBinaryArchive:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (void)compileLibraryRequest:(struct MTLCompileLibraryRequestData { BOOL x0; id x1; unsigned int x2; id x3; id x4; })a0 completionHandler:(id /* block */)a1;
- (void)compileRequest:(id)a0 pipelineCache:(id)a1 completionHandler:(id /* block */)a2;
- (void)addCompiledOutput:(id)a0 importedSymbols:(id)a1 importedLibraries:(id)a2 hashKey:(const struct { unsigned char x0[32]; } *)a3 functionCache:(const struct MultiLevelPipelineCache { BOOL x0; id x1; id x2; struct MTLCompilerCache *x3; struct MTLCompilerCache *x4; struct MTLCompilerCache *x5; BOOL x6; } *)a4;
- (BOOL)validateLanguageAndAIRVersionForFunction:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)addRenderPipelineStateWithDescriptor:(id)a0 destinationBinaryArchive:(id)a1 error:(id *)a2;
- (void)addCompiledOutput:(id)a0 cachedCompiledOutput:(id)a1 importedSymbols:(id)a2 importedLibraries:(id)a3 hashKey:(const struct { unsigned char x0[32]; } *)a4 functionCache:(const struct MultiLevelPipelineCache { BOOL x0; id x1; id x2; struct MTLCompilerCache *x3; struct MTLCompilerCache *x4; struct MTLCompilerCache *x5; BOOL x6; } *)a5;
- (void)reflectionWithFunction:(id)a0 options:(unsigned long long)a1 sync:(BOOL)a2 pipelineLibrary:(id)a3 binaryArchives:(id)a4 completionHandler:(id /* block */)a5;
- (struct { unsigned int x0; unsigned int x1; })pipelineCacheStats;

@end
