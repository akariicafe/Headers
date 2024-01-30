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

- (BOOL)addTileRenderPipelineStateWithDescriptor:(id)a0 destinationBinaryArchive:(id)a1 error:(id *)a2;
- (struct { unsigned int x0; unsigned int x1; })libraryCacheStats;
- (void *)getShaderCacheKeys;
- (BOOL)addRenderPipelineStateWithDescriptor:(id)a0 destinationBinaryArchive:(id)a1 error:(id *)a2;
- (void)addCompiledOutput:(id)a0 cachedCompiledOutput:(id)a1 importedSymbols:(id)a2 importedLibraries:(id)a3 hashKey:(const struct { unsigned char x0[32]; } *)a4 functionCache:(const struct MultiLevelPipelineCache { BOOL x0; id x1; id x2; struct MTLCompilerCache *x3; struct MTLCompilerCache *x4; struct MTLCompilerCache *x5; BOOL x6; BOOL x7; } *)a5;
- (void)allowLibrariesFromOtherPlatforms;
- (id)compileDynamicLibrary:(id)a0 computePipelineDescriptor:(id)a1 error:(id *)a2;
- (void)compileFunction:(id)a0 frameworkData:(id)a1 driverKeyData:(id)a2 options:(unsigned long long)a3 pipelineCache:(id)a4 sync:(BOOL)a5 completionHandler:(id /* block */)a6;
- (id)pipelineStateWithVariant:(struct VariantEntry { char *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; id x4; id x5; unsigned long long x6; id x7; } *)a0 descriptor:(id)a1 options:(unsigned long long)a2 computeProgram:(void *)a3 kernelDriverCompileTimeData:(id)a4 serializedComputeDataDescriptor:(id)a5 compileTimeStatistics:(id)a6 reflection:(id *)a7 error:(id *)a8 completionHandler:(id /* block */)a9;
- (void)addCompiledOutput:(id)a0 importedSymbols:(id)a1 importedLibraries:(id)a2 hashKey:(const struct { unsigned char x0[32]; } *)a3 functionCache:(const struct MultiLevelPipelineCache { BOOL x0; id x1; id x2; struct MTLCompilerCache *x3; struct MTLCompilerCache *x4; struct MTLCompilerCache *x5; BOOL x6; BOOL x7; } *)a4;
- (BOOL)addTileRenderPipelineStateWithDescriptor:(id)a0 destinationBinaryArchive:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (void)compileFunction:(id)a0 visibleFunctions:(id)a1 privateVisibleFunctions:(id)a2 visibleFunctionGroups:(id)a3 frameworkData:(id)a4 driverKeyData:(id)a5 options:(unsigned long long)a6 pipelineCache:(id)a7 sync:(BOOL)a8 completionHandler:(id /* block */)a9;
- (id)createVertexStageAndLinkPipelineWithFragment:(void *)a0 fragmentVariant:(id)a1 vertexFunction:(id)a2 serializedVertexDescriptor:(id)a3 descriptor:(id)a4 destinationArchive:(id)a5 options:(unsigned long long)a6 reflection:(id *)a7 compileStatistics:(id)a8 fragmentCompileTimeData:(id)a9 error:(id *)a10 completionHandler:(id /* block */)a11;
- (void)reflectionWithFunction:(id)a0 options:(unsigned long long)a1 sync:(BOOL)a2 pipelineLibrary:(id)a3 binaryArchives:(id)a4 completionHandler:(id /* block */)a5;
- (void)statelessBackendCompileRequestInternal:(struct MTLCompilerFunctionRequest { void /* function */ **x0; int x1; id x2; id x3; id x4; unsigned int x5; unsigned int x6; unsigned int x7; id x8; id x9; unsigned long long x10; id x11; id x12; id x13; id x14; int x15; BOOL x16; unsigned int x17; } *)a0 sync:(BOOL)a1 compilerHash:(const struct { unsigned char x0[32]; } *)a2 reflectionOnly:(BOOL)a3 completionHandler:(id /* block */)a4;
- (struct { unsigned char x0[32]; })hashKeyForStatelessCompilationRequest:(id)a0;
- (BOOL)addComputePipelineStateWithDescriptor:(id)a0 destinationBinaryArchive:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (void)compileFunction:(id)a0 frameworkData:(id)a1 driverKeyData:(id)a2 options:(unsigned long long)a3 pipelineCache:(id)a4 completionHandler:(id /* block */)a5;
- (struct { unsigned int x0; unsigned int x1; })pipelineCacheStats;
- (BOOL)addRenderPipelineStateWithDescriptor:(id)a0 destinationBinaryArchive:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (void)reflectionWithFunction:(id)a0 options:(unsigned long long)a1 sync:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)reflectionWithFunction:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (struct vector<std::pair<CompilerOutputType, MTLBinaryKey *>, std::allocator<std::pair<CompilerOutputType, MTLBinaryKey *>>> { void *x0; void *x1; struct __compressed_pair<std::pair<CompilerOutputType, MTLBinaryKey *> *, std::allocator<std::pair<CompilerOutputType, MTLBinaryKey *>>> { void *x0; } x2; })requiredKeysForFunction:(id)a0 variantKey:(const struct VariantKey { void *x0; void *x1; unsigned long long x2; unsigned long long x3; id x4; void *x5; unsigned long long x6; } *)a1 frameworkData:(id)a2 compilerOptions:(int)a3;
- (void *)getProgramObject:(id)a0 destinationArchive:(id)a1 sourceBinaryArchives:(id)a2 variantKey:(const struct VariantKey { void *x0; void *x1; unsigned long long x2; unsigned long long x3; id x4; void *x5; unsigned long long x6; } *)a3 requiredBinaryKeys:(const void *)a4 failOnMiss:(BOOL)a5;
- (void)reflectionWithFunction:(id)a0 options:(unsigned long long)a1 sync:(BOOL)a2 binaryArchives:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (struct { unsigned char x0[32]; })hashKeyForLibraryRequest:(struct MTLCompileLibraryRequestData { BOOL x0; id x1; unsigned int x2; id x3; id x4; } *)a0;
- (id)newRenderPipelineStateWithTileDescriptor:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3 completionHandler:(id /* block */)a4;
- (id)initWithTargetData:(id)a0 cacheUUID:(struct { unsigned char x0[32]; } *)a1 pluginPath:(id)a2 device:(id)a3 compilerFlags:(unsigned long long)a4;
- (BOOL)copyShaderCacheToPath:(id)a0;
- (id)newRenderPipelineStateWithDescriptor:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3 completionHandler:(id /* block */)a4;
- (void)compileFunction:(id)a0 serializedPipelineData:(id)a1 stateData:(id)a2 linkDataSize:(unsigned long long)a3 frameworkLinking:(BOOL)a4 options:(unsigned int)a5 sync:(BOOL)a6 completionHandler:(id /* block */)a7;
- (void)compileFunctionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)compileFunctionRequestInternal:(id)a0 frameworkLinking:(BOOL)a1 linkDataSize:(unsigned long long)a2 reflectionOnly:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)reflectionWithFunction:(id)a0 options:(unsigned long long)a1 sync:(BOOL)a2 pipelineLibrary:(id)a3 completionHandler:(id /* block */)a4;
- (struct VariantEntry { char *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; id x4; id x5; unsigned long long x6; id x7; } *)computeVariantEntryWithDescriptor:(id)a0 options:(unsigned long long)a1 serializedComputeDataDescriptor:(id)a2 asyncCompile:(BOOL)a3 pipelineCache:(id)a4 destinationBinaryArchive:(id)a5 computeProgram:(struct MTLProgramObject **)a6 kernelDriverCompileTimeData:(id *)a7 compileTimeStatistics:(id)a8;
- (void)compileFunction:(id)a0 serializedData:(id)a1 stateData:(id)a2 options:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)releaseCompilerOutputBlocks:(void *)a0;
- (void)cacheCompilerData:(void *)a0 cachedData:(void *)a1 hashMap:(void *)a2 libraryData:(struct MTLLibraryData { void /* function */ **x0; struct { unsigned char x0[32]; } x1; _Atomic int x2; id x3; id x4; } *)a3 functionCache:(const struct MultiLevelPipelineCache { BOOL x0; id x1; id x2; struct MTLCompilerCache *x3; struct MTLCompilerCache *x4; struct MTLCompilerCache *x5; BOOL x6; BOOL x7; } *)a4;
- (BOOL)addComputePipelineStateWithDescriptor:(id)a0 destinationBinaryArchive:(id)a1 error:(id *)a2;
- (void)compileFunction:(id)a0 visibleFunctions:(id)a1 visibleFunctionGroups:(id)a2 frameworkData:(id)a3 driverKeyData:(id)a4 options:(unsigned long long)a5 pipelineCache:(id)a6 sync:(BOOL)a7 completionHandler:(id /* block */)a8;
- (id)newComputePipelineStateWithDescriptor:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 error:(id *)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;
- (void)compileLibraryRequest:(struct MTLCompileLibraryRequestData { BOOL x0; id x1; unsigned int x2; id x3; id x4; })a0 completionHandler:(id /* block */)a1;
- (void)compileStatelessFunctionRequest:(id)a0 reflectionOnly:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)addFunctionKeys:(void *)a0 function:(id)a1 driverData:(id)a2 frameworkData:(id)a3 compilerOptions:(int)a4;
- (void)compileFunction:(id)a0 serializedPipelineData:(id)a1 stateData:(id)a2 linkDataSize:(unsigned long long)a3 frameworkLinking:(BOOL)a4 options:(unsigned int)a5 pipelineCache:(id)a6 sync:(BOOL)a7 completionHandler:(id /* block */)a8;
- (id)newComputePipelineStateWithDescriptorInternal:(id)a0 options:(unsigned long long)a1 pipelineCache:(id)a2 destinationBinaryArchive:(id)a3 reflection:(id *)a4 error:(id *)a5 completionHandler:(id /* block */)a6;
- (void)compileDynamicLibrary:(id)a0 computePipelineDescriptor:(id)a1 completionHandler:(id /* block */)a2;
- (void)compileRequest:(id)a0 pipelineCache:(id)a1 sync:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)unloadShaderCaches;
- (id).cxx_construct;
- (id)newRenderPipelineStateWithDescriptorInternal:(id)a0 options:(unsigned long long)a1 reflection:(id *)a2 destinationBinaryArchive:(id)a3 error:(id *)a4 completionHandler:(id /* block */)a5;
- (void)compileRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)compileRequest:(id)a0 pipelineCache:(id)a1 completionHandler:(id /* block */)a2;
- (void *)getProgramObjectForFunction:(id)a0 variantKey:(const struct VariantKey { void *x0; void *x1; unsigned long long x2; unsigned long long x3; id x4; void *x5; unsigned long long x6; } *)a1 requiredBinaryKeys:(const void *)a2 sourceBinaryArchives:(id)a3;
- (BOOL)validateLanguageAndAIRVersionForFunction:(id)a0 completionHandler:(id /* block */)a1;

@end
