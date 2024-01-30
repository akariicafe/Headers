@class NSArray, NSString, NSData, NSMutableDictionary, NSObject, MTLLoadedFile;
@protocol OS_dispatch_queue, MTLDevice;

@interface _MTLBinaryArchive : _MTLObjectWithLabel <MTLBinaryArchiveSPI> {
    MTLLoadedFile *_fileMapping;
    NSData *_fileData;
    NSObject<OS_dispatch_queue> *_queue;
    struct map<MTLUINT256_t, std::pair<unsigned int, unsigned long long>, CompareHash, std::allocator<std::pair<const MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> { struct __tree<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, std::__map_value_compare<MTLUINT256_t, std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, CompareHash, true>, std::allocator<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<MTLUINT256_t, std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, CompareHash, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _pipelineFileIndex;
    NSMutableDictionary *_entries;
    struct unique_ptr<MTLPipelineCollection, std::default_delete<MTLPipelineCollection>> { struct __compressed_pair<MTLPipelineCollection *, std::default_delete<MTLPipelineCollection>> { struct MTLPipelineCollection *__value_; } __ptr_; } _pipelineCollection;
    BOOL _collectArchives;
    struct unordered_map<MTLUINT256_t, NSObject<OS_dispatch_data> *, UnorderedContainerHash, UnorderedContainerHash, std::allocator<std::pair<const MTLUINT256_t, NSObject<OS_dispatch_data> *>>> { struct __hash_table<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, UnorderedContainerHash, UnorderedContainerHash, true>, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, UnorderedContainerHash, UnorderedContainerHash, true>, std::allocator<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, UnorderedContainerHash, UnorderedContainerHash, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, NSObject<OS_dispatch_data> *>, UnorderedContainerHash, UnorderedContainerHash, true>> { float __value_; } __p3_; } __table_; } _specializedFunctions;
    struct map<MTLUINT256_t, std::pair<unsigned int, unsigned long long>, CompareHash, std::allocator<std::pair<const MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> { struct __tree<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, std::__map_value_compare<MTLUINT256_t, std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, CompareHash, true>, std::allocator<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<MTLUINT256_t, std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, CompareHash, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _specializedFunctionArchiveFileIndex;
    unsigned long long _specializedFunctionArchiveOffset;
    unsigned long long _specializedFunctionArchiveBytes;
    struct map<MTLUINT256_t, std::pair<unsigned int, unsigned long long>, CompareHash, std::allocator<std::pair<const MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> { struct __tree<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, std::__map_value_compare<MTLUINT256_t, std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, CompareHash, true>, std::allocator<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<MTLUINT256_t, std::__value_type<MTLUINT256_t, std::pair<unsigned int, unsigned long long>>, CompareHash, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _recompilationArchiveFileIndex;
    unsigned long long _recompilationArchiveOffset;
    unsigned long long _recompilationArchiveBytes;
    struct unordered_map<MTLUINT256_t, MTLProgramObject *, UnorderedContainerHash, UnorderedContainerHash, std::allocator<std::pair<const MTLUINT256_t, MTLProgramObject *>>> { struct __hash_table<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash, true>, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash, true>, std::allocator<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<MTLUINT256_t, std::__hash_value_type<MTLUINT256_t, MTLProgramObject *>, UnorderedContainerHash, UnorderedContainerHash, true>> { float __value_; } __p3_; } __table_; } _variantMap;
}

@property (readonly) unsigned long long options;
@property (readonly) NSArray *keys;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)deserializeBinaryArchiveHeader:(struct { BOOL x0; BOOL x1; unsigned long long x2; unsigned long long x3; BOOL x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; BOOL x9; unsigned long long x10; unsigned long long x11; } *)a0 fileData:(id)a1 device:(id)a2;
+ (BOOL)deserializeBinaryArchiveDescriptorMachO:(struct { BOOL x0; BOOL x1; unsigned long long x2; unsigned long long x3; BOOL x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; BOOL x9; unsigned long long x10; unsigned long long x11; } *)a0 fileData:(id)a1;
+ (struct MTLLoaderSliceIdentifier { int x0; int x1; })sliceIDForSpecializedFunctions;
+ (id)descriptorDataForArchive:(id)a0;

- (BOOL)serializeToURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithOptions:(unsigned long long)a0 device:(id)a1 url:(id)a2 error:(id *)a3;
- (BOOL)loadFileIndex:(void *)a0 expectedSliceId:(const struct MTLLoaderSliceIdentifier { int x0; int x1; } *)a1 expectedVersion:(unsigned long long)a2 sliceOffset:(unsigned long long)a3;
- (id)materializeFromFileOffset:(unsigned long long)a0 hash:(struct { unsigned char x0[32]; } *)a1;
- (BOOL)addComputePipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)storeComputePipelineDescriptor:(id)a0;
- (BOOL)addRenderPipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)storeRenderPipelineDescriptor:(id)a0;
- (BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)storeTileRenderPipelineDescriptor:(id)a0;
- (BOOL)serializeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)enumerateSpecializedFunctionArchivesFromBackingFile:(id /* block */)a0;
- (void)materializeAll;
- (BOOL)getSpecializedFunctionArchivesToSerialize:(void *)a0;
- (BOOL)enumerateArchivesFromBackingFileFromSlice:(const struct MTLLoaderSliceIdentifier { int x0; int x1; } *)a0 version:(unsigned long long)a1 verifyKey:(const struct { unsigned char x0[32]; } *)a2 offset:(unsigned long long)a3 bytes:(unsigned long long)a4 enumerator:(id /* block */)a5;
- (id)materializeEntryForKey:(const struct { unsigned char x0[32]; } *)a0 fileIndex:(void *)a1 containsEntry:(id /* block */)a2 addEntry:(id /* block */)a3;
- (id)materializeFromHash:(struct { unsigned char x0[32]; } *)a0 fileIndex:(void *)a1;
- (BOOL)addComputePipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)addRenderPipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)addTileRenderPipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)addFunctionWithDescriptor:(id)a0 library:(id)a1 error:(id *)a2;
- (void)addBinaryEntry:(id)a0 forKey:(id)a1;
- (id)getBinaryDataForKey:(id)a0;
- (void)addArchiveEntry:(id)a0 forKey:(const struct { unsigned char x0[32]; } *)a1;
- (id)getArchiveDataForKey:(const struct { unsigned char x0[32]; } *)a0;
- (BOOL)addLibraryWithDescriptor:(id)a0 error:(id *)a1;
- (void *)pipelineCollection;
- (BOOL)enumerateArchivesFromBackingFile:(id /* block */)a0;
- (BOOL)enumerateArchivesFromPipelineCollection:(id /* block */)a0;
- (id)initWithDevice:(id)a0 descriptor:(id)a1 error:(id *)a2;
- (BOOL)removeComputePipelineFunctionsWithDescriptor:(id)a0 error:(id *)a1;
- (void *)findProgramObjectForFunction:(const struct { unsigned char x0[32]; } *)a0;
- (void *)programObjectForFunction:(const struct { unsigned char x0[32]; } *)a0;

@end
