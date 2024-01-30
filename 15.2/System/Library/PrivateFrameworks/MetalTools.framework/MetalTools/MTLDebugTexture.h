@class MTLDebugResource, MTLDebugDevice;

@interface MTLDebugTexture : MTLToolsTexture <MTLDebugResourcePurgeable> {
    struct MTLPixelFormatInfo { char *name; unsigned int flags; unsigned long long castClass; union { struct MTLNormalPixelFormatInfo { unsigned long long pixelBytes; unsigned char componentCount; unsigned char alignment; unsigned long long pixelBytesRender; unsigned long long pixelBytesRenderMSAA; } normal; struct MTLCompressedPixelFormatInfo { unsigned long long blockBytes; unsigned long long blockWidth; unsigned long long blockHeight; unsigned long long blockDepth; } compressed; } type; } _pixelFormatInfo;
    MTLDebugDevice *_debugDevice;
    unsigned long long _usageRequired;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _purgeableStateToken;
    BOOL _purgeableStateHasBeenSet;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _subViewUseLock;
}

@property (readonly, nonatomic) MTLDebugResource *common;
@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) unsigned long long bytesPerImage;
@property (readonly, nonatomic) unsigned long long plane;
@property (nonatomic) struct unordered_map<SubView, unsigned long, SubView::hash_t, SubView::equal_t, std::allocator<std::pair<const SubView, unsigned long>>> { struct __hash_table<std::__hash_value_type<SubView, unsigned long>, std::__unordered_map_hasher<SubView, std::__hash_value_type<SubView, unsigned long>, SubView::hash_t, SubView::equal_t, true>, std::__unordered_map_equal<SubView, std::__hash_value_type<SubView, unsigned long>, SubView::equal_t, SubView::hash_t, true>, std::allocator<std::__hash_value_type<SubView, unsigned long>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<SubView, std::__hash_value_type<SubView, unsigned long>, SubView::hash_t, SubView::equal_t, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<SubView, std::__hash_value_type<SubView, unsigned long>, SubView::equal_t, SubView::hash_t, true>> { float __value_; } __p3_; } __table_; } activeSubViews;
@property (readonly, nonatomic) BOOL isLinearTexture;

- (BOOL)doesAliasAnyResources:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)doesAliasResource:(id)a0;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (void)getBytes:(void *)a0 bytesPerRow:(unsigned long long)a1 fromRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 mipmapLevel:(unsigned long long)a3;
- (BOOL)doesAliasAllResources:(const id *)a0 count:(unsigned long long)a1;
- (void)makeAliasable;
- (id)newTextureViewWithPixelFormat:(unsigned long long)a0 textureType:(unsigned long long)a1 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)description;
- (void).cxx_destruct;
- (void)getBytes:(void *)a0 bytesPerRow:(unsigned long long)a1 bytesPerImage:(unsigned long long)a2 fromRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 mipmapLevel:(unsigned long long)a4 slice:(unsigned long long)a5;
- (id)newTextureViewWithPixelFormat:(unsigned long long)a0;
- (void)replaceRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a0 mipmapLevel:(unsigned long long)a1 slice:(unsigned long long)a2 withBytes:(const void *)a3 bytesPerRow:(unsigned long long)a4 bytesPerImage:(unsigned long long)a5;
- (void)replaceRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a0 mipmapLevel:(unsigned long long)a1 withBytes:(const void *)a2 bytesPerRow:(unsigned long long)a3;
- (void)dealloc;
- (id).cxx_construct;
- (id)newTextureViewWithPixelFormat:(unsigned long long)a0 textureType:(unsigned long long)a1 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 swizzle:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })a4;
- (id)newCompressedTextureViewWithPixelFormat:(unsigned long long)a0 textureType:(unsigned long long)a1 level:(unsigned long long)a2 slice:(unsigned long long)a3;
- (id)newTextureViewWithPixelFormat:(unsigned long long)a0 resourceIndex:(unsigned long long)a1;
- (id)newTextureViewWithPixelFormat:(unsigned long long)a0 textureType:(unsigned long long)a1 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 resourceIndex:(unsigned long long)a4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)a0 textureType:(unsigned long long)a1 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 swizzle:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })a4 resourceIndex:(unsigned long long)a5;
- (void)lockPurgeableState;
- (void)unlockPurgeableState;
- (BOOL)purgeableStateValidForRendering;
- (id)initWithBaseTexture:(id)a0 device:(id)a1 texture:(id)a2 pixelFormat:(unsigned long long)a3;
- (id)initWithBaseTexture:(id)a0 device:(id)a1 buffer:(id)a2 offset:(unsigned long long)a3 bytesPerRow:(unsigned long long)a4;
- (id)initWithBaseTexture:(id)a0 device:(id)a1 buffer:(id)a2 offset:(unsigned long long)a3 bytesPerRow:(unsigned long long)a4 bytesPerImage:(unsigned long long)a5;
- (void)addUsedRenderTarget:(unsigned long long)a0 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)removeUsedRenderTarget:(unsigned long long)a0 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)requireUsage:(unsigned long long)a0;
- (id)initWithBaseTexture:(id)a0 device:(id)a1;
- (id)initWithBaseTexture:(id)a0 device:(id)a1 plane:(unsigned long long)a2;
- (id)initWithBaseTexture:(id)a0 heap:(id)a1 device:(id)a2;
- (id)initWithBaseTexture:(id)a0 device:(id)a1 texture:(id)a2;
- (id)initWithBaseTexture:(id)a0 device:(id)a1 texture:(id)a2 pixelFormat:(unsigned long long)a3 textureType:(unsigned long long)a4 levels:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 slices:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6;
- (BOOL)_resourceHasMemory;

@end
