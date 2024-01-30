@class NSArray, NSString;
@protocol MTLDevice;

@interface MTLToolsBinaryArchive : MTLToolsObject <MTLBinaryArchiveSPI>

@property (readonly) unsigned long long options;
@property (readonly) NSArray *keys;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)serializeToURL:(id)a0 error:(id *)a1;
- (id)formattedDescription:(unsigned long long)a0;
- (BOOL)addLibraryWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)storeComputePipelineDescriptor:(id)a0;
- (void)addArchiveEntry:(id)a0 forKey:(const struct { unsigned char x0[32]; } *)a1;
- (void)addBinaryEntry:(id)a0 forKey:(id)a1;
- (BOOL)addComputePipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)addComputePipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)addFunctionWithDescriptor:(id)a0 library:(id)a1 error:(id *)a2;
- (BOOL)addMeshRenderPipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)addMeshRenderPipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)addRenderPipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)addRenderPipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)archiveFunctionIds;
- (BOOL)enumerateArchivesFromBackingFile:(id /* block */)a0;
- (BOOL)enumerateArchivesFromPipelineCollection:(id /* block */)a0;
- (id)getArchiveDataForKey:(const struct { unsigned char x0[32]; } *)a0;
- (id)getArchiveIDWithError:(id *)a0;
- (id)getBinaryDataForKey:(id)a0;
- (void)initMetalScriptWithArchive:(id)a0;
- (id)newPipelineDescriptorAtIndex:(unsigned long long)a0 pipelineType:(unsigned int *)a1 error:(id *)a2;
- (struct MTLPipelineCollection { } *)pipelineCollection;
- (unsigned long long)recompilablePipelineCount;
- (BOOL)serializeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)storeMeshRenderPipelineDescriptor:(id)a0;
- (BOOL)storeRenderPipelineDescriptor:(id)a0;
- (BOOL)storeTileRenderPipelineDescriptor:(id)a0;

@end
