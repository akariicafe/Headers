@class NSDictionary;

@interface EspressoANEIOSurface : NSObject {
    NSDictionary *params_dict;
    struct vector<Espresso::ANERuntimeEngine::surface_and_buffer, std::__1::allocator<Espresso::ANERuntimeEngine::surface_and_buffer> > { struct surface_and_buffer *__begin_; struct surface_and_buffer *__end_; struct __compressed_pair<Espresso::ANERuntimeEngine::surface_and_buffer *, std::__1::allocator<Espresso::ANERuntimeEngine::surface_and_buffer> > { struct surface_and_buffer *__value_; } __end_cap_; } multiple_buffer_io_surfaces;
    BOOL created_with_lazy_iosurface;
    BOOL ane_surface_use_cvpixelbuffer;
    unsigned long long width;
    unsigned long long height;
    unsigned long long rowBytes;
    unsigned int pixelFormat;
}

@property (nonatomic) struct shared_ptr<Espresso::blob<unsigned char, 1> > { struct blob<unsigned char, 1> *__ptr_; struct __shared_weak_count *__cntrl_; } external_storage_blob_for_aliasing_mem;

- (void).cxx_destruct;
- (void)cleanup;
- (void)resizeForMultipleAsyncBuffers:(unsigned long long)a0;
- (id)initWithIOSurfaceProperties:(id)a0;
- (void)doNonLazyAllocation:(id)a0;
- (id)ane_io_surfaceForMultiBufferFrame:(unsigned long long)a0;
- (struct __IOSurface { } *)createIOSurfaceWithExtraProperties:(id)a0;
- (BOOL)checkIfMatches:(struct __CVBuffer { } *)a0;
- (void)lazilyAutoCreateSurfaceForFrame:(unsigned long long)a0;
- (void)restoreInternalStorage:(unsigned long long)a0;
- (BOOL)checkIfMatchesIOSurface:(struct __IOSurface { } *)a0;
- (struct __IOSurface { } *)ioSurfaceForMultiBufferFrameNoLazyForTesting:(unsigned long long)a0;
- (void)setExternalStorage:(unsigned long long)a0 ioSurface:(struct __IOSurface { } *)a1;
- (void)restoreInternalStorageForAllMultiBufferFrames;
- (id)metalBufferWithDevice:(id)a0 multiBufferFrame:(unsigned long long)a1;
- (unsigned long long)nFrames;
- (id).cxx_construct;
- (struct __IOSurface { } *)ioSurfaceForMultiBufferFrame:(unsigned long long)a0;

@end
