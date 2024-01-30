@interface NUISizeCache : NSObject {
    struct nui_size_cache { void *__begin_; void *__end_; struct __compressed_pair<std::pair<CGSize, CGSize> *, std::allocator<std::pair<CGSize, CGSize>>> { void *__value_; } __end_cap_; } _sizeCache;
    BOOL _threadSafe;
}

- (void).cxx_destruct;
- (void)invalidateCache;
- (void)dealloc;
- (id).cxx_construct;
- (id)initForAsynchronousAccess:(BOOL)a0;
- (BOOL)getSize:(struct CGSize { double x0; double x1; } *)a0 forTargetSize:(struct CGSize { double x0; double x1; })a1 isSizeDependentOnPerpendicularAxis:(BOOL)a2;
- (void)insertSize:(struct CGSize { double x0; double x1; })a0 forTargetSize:(struct CGSize { double x0; double x1; })a1;

@end
