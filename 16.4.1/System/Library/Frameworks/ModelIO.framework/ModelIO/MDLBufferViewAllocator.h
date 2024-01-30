@interface MDLBufferViewAllocator : NSObject <NSSecureCoding> {
    struct vector<__IOSurface *, std::allocator<__IOSurface *>> { struct __IOSurface **__begin_; struct __IOSurface **__end_; struct __compressed_pair<__IOSurface **, std::allocator<__IOSurface *>> { struct __IOSurface **__value_; } __end_cap_; } _sharedRegions;
    struct vector<bool, std::allocator<bool>> { unsigned long long *__begin_; unsigned long long __size_; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long __value_; } __cap_alloc_; } _owned;
    struct vector<long, std::allocator<long>> { long long *__begin_; long long *__end_; struct __compressed_pair<long *, std::allocator<long>> { long long *__value_; } __end_cap_; } _regionIndices;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeBuffers:(id)a0 withCoder:(id)a1 forKey:(id)a2;
- (id)decodeBufferWithCoder:(id)a0 forKey:(id)a1;
- (id)decodeBuffersWithCoder:(id)a0 forKey:(id)a1;
- (void)encodeBuffer:(id)a0 withCoder:(id)a1 forKey:(id)a2;
- (id)initWithSharedRegionsNoCopy:(id)a0;
- (id)newBufferViewAtRegionIndex:(long long)a0;
- (id)newBufferViewAtRegionIndex:(long long)a0 length:(long long)a1 offset:(long long)a2;

@end
