@class MTLGPUDebugImageData;

@interface MTLGPUDebugFunction : MTLToolsFunction {
    MTLGPUDebugImageData *data;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _argumentLayoutsMutex;
    struct unordered_map<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>>> { struct __hash_table<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> { float __value_; } __p3_; } __table_; } _argumentLayouts;
}

+ (id)internalStructTypeFromUserStructType:(id)a0;
+ (id)internalArrayTypeFromUserArrayType:(id)a0;
+ (id)convertUserType:(id)a0;

- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 pipelineLibrary:(id)a2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 pipelineLibrary:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1;
- (id).cxx_construct;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 binaryArchives:(id)a2;
- (void)prepareForBinaryFunctionUsage;
- (void)prepareForRenderPipelineUsage;
- (void)prepareForComputePipelineUsage;
- (id)initWithFunction:(id)a0 library:(id)a1;
- (void)_initImageData;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 pipelineLibrary:(id)a2 binaryArchives:(id)a3;

@end
