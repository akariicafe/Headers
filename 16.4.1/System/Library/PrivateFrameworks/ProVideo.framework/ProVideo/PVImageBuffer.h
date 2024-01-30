@protocol PVImageBufferImpl;

@interface PVImageBuffer : NSObject {
    id<PVImageBufferImpl> _imageBufferImpl;
    struct HGSynchronizable { void /* function */ **x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; struct _opaque_pthread_t *x2; unsigned long long x3; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x4; } *_lock;
}

+ (id)imageWithCVPixelBuffer:(struct __CVBuffer { } *)a0;
+ (id)imageWithCGImage:(struct CGImage { } *)a0;
+ (id)imageWithCGImage:(struct CGImage { } *)a0 withGainMap:(struct CGImage { } *)a1;
+ (id)imageWithHGBitmap:(struct HGRef<HGBitmap> { struct HGBitmap *x0; })a0;
+ (id)imageWithHGCVPixelBuffer:(struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer *x0; })a0;
+ (id)imageWithMTLTexture:(id)a0;
+ (id)imageWithUIImage:(id)a0;

- (struct CGImage { } *)cgImage;
- (id)debugQuickLookObject;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (id)description;
- (void).cxx_destruct;
- (id)uiImage;
- (BOOL)canCreateCVPixelBuffer;
- (BOOL)canCreateHGBitmap;
- (struct __CVBuffer { } *)cvPixelBuffer;
- (BOOL)cvPixelBufferRequiresCopy;
- (BOOL)cvPixelBufferRequiresRender;
- (struct __CVBuffer { } *)cvPixelBufferWithColorSpace:(id)a0;
- (struct HGRef<HGBitmap> { struct HGBitmap *x0; })hgBitmap;
- (struct HGRef<HGBitmap> { struct HGBitmap *x0; })hgBitmapWithColorSpace:(id)a0;
- (id)initWithImageBufferImpl:(id)a0;

@end
