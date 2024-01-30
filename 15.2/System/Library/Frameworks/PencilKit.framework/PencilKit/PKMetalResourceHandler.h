@class PKMetalShader, NSMutableDictionary, PKMetalResourceHandlerBuffer, MTLRenderPipelineDescriptor, PKLRUCache, NSObject;
@protocol MTLTexture, MTLComputePipelineState, MTLBuffer, OS_dispatch_queue, MTLPipelineLibrarySPI, MTLRenderPipelineState, MTLLibrary, MTLDevice;

@interface PKMetalResourceHandler : NSObject {
    id<MTLComputePipelineState> _particleShaderKernelPipelineState;
    id<MTLComputePipelineState> _particleShaderKernelPipelineStateWithVariableSpacing;
    id<MTLComputePipelineState> _paintShaderKernelPipelineState;
    id<MTLComputePipelineState> _paintShaderKernelPipelineStateWithLiveStrokeMode;
    id<MTLComputePipelineState> _paintShaderKernelPipelineStateWithLiveStrokeParticles;
    PKMetalShader *_particleShader;
    PKMetalShader *_particleShaderWithAspectRatioSupport;
    PKMetalShader *_sixChannelParticleShader;
    PKMetalShader *_sixChannelParticleShaderWithAspectRatioSupport;
    PKMetalShader *_paintShader;
    PKMetalShader *_sixChannelPaintShader;
    PKMetalShader *_paintShaderForLiveStrokeMode;
    PKMetalShader *_erasePaintShader;
    PKMetalShader *_sixChannelErasePaintShader;
    PKMetalShader *_eraseOriginalBackShader;
    PKMetalShader *_paperShader;
    PKMetalShader *_blitIntoPaintShader;
    PKMetalShader *_blitShader;
    PKMetalShader *_singleAttachmentBlitShader;
    PKMetalShader *_sixChannelBlitShader;
    PKMetalShader *_sixChannelSingleAttachmentBlitShader;
    PKMetalShader *_sixChannelBlitShaderIntoDestinationTexture;
    PKMetalShader *_eraseShader;
    PKMetalShader *_linesShader;
    PKMetalShader *_paintCircleShader;
    PKMetalShader *_sixChannelPaintCircleShader;
    PKMetalShader *_invertShader;
    PKMetalShader *_fillColorShader;
    PKMetalShader *_singleAttachmentFillColorShader;
    id<MTLRenderPipelineState> _sixChannelCopyToCanvasPipelineState;
    id<MTLBuffer> _cachedQuadVertexBuffer;
    id<MTLBuffer> _cachedQuadTexCoordBuffer;
    NSMutableDictionary *_inkTextures;
    struct unordered_map<unsigned long long, PKMetalShader *, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, PKMetalShader *>>> { struct __hash_table<std::__hash_value_type<unsigned long long, PKMetalShader *>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, PKMetalShader *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> { float __value_; } __p3_; } __table_; } _uberShaders;
    struct unordered_map<unsigned long long, PKMetalShader *, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, PKMetalShader *>>> { struct __hash_table<std::__hash_value_type<unsigned long long, PKMetalShader *>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, PKMetalShader *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> { float __value_; } __p3_; } __table_; } _sixChannelShaders;
    id<MTLLibrary> _defaultLibrary;
    id<MTLTexture> _paperTexture;
    struct CGSize { double width; double height; } _paperTextureSize;
    MTLRenderPipelineDescriptor *_sharedPipelineDescriptor;
    MTLRenderPipelineDescriptor *_singleColorPipelineDescriptor;
    MTLRenderPipelineDescriptor *_singlePaintPipelineDescriptor;
    MTLRenderPipelineDescriptor *_sixChannelSingleColorPipelineDescriptor;
    MTLRenderPipelineDescriptor *_sixChannelSharedPipelineDescriptor;
    PKLRUCache *_strokeRenderCache;
    id<MTLBuffer> _particleIndexBuffer;
    id<MTLBuffer> _randomNumberBuffer;
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _signpost_id;
    PKMetalResourceHandlerBuffer *_purgeableResourceBuffer;
    PKMetalResourceHandlerBuffer *_resourceBuffer;
    PKMetalResourceHandlerBuffer *_gpuResourceBuffer;
    id<MTLPipelineLibrarySPI> _pipelineLibrary;
    BOOL _generatePipelineDescriptors;
    BOOL _generateForScribble;
    BOOL _deviceSupportsAppleFamily;
    BOOL _deviceSupportsMacFamily;
    BOOL _deviceSupportsCatalystFamily;
    BOOL _deviceSupportsFramebufferFetch;
    BOOL _sixChannelUsesWideGamut;
    id<MTLDevice> _device;
    unsigned long long _pixelFormat;
    unsigned long long _sixChannelOriginalBackPixelFormat;
    unsigned long long _sixChannelMetalLayerPixelFormat;
    unsigned long long _paintAndParticlePixelFormat;
    unsigned long long _stencilPixelFormat;
}

+ (id)generatePipelineDescriptorsForDevice:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
