@interface NUISizeCache : NSObject {
    struct nui_size_cache { struct pair<CGSize, CGSize> *__begin_; struct pair<CGSize, CGSize> *__end_; struct __compressed_pair<std::__1::pair<CGSize, CGSize> *, std::__1::allocator<std::__1::pair<CGSize, CGSize> > > { struct pair<CGSize, CGSize> *__value_; } __end_cap_; } _sizeCache;
    BOOL _threadSafe;
}

- (void)invalidateCache;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initForAsynchronousAccess:(BOOL)a0;
- (BOOL)getSize:(struct CGSize { double x0; double x1; } *)a0 forTargetSize:(struct CGSize { double x0; double x1; })a1 isSizeDependentOnPerpendicularAxis:(BOOL)a2;
- (void)insertSize:(struct CGSize { double x0; double x1; })a0 forTargetSize:(struct CGSize { double x0; double x1; })a1;
- (id).cxx_construct;

@end
