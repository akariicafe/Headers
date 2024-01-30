@protocol PVImageBufferImpl;

@interface PVImageBuffer : NSObject {
    id<PVImageBufferImpl> _imageBufferImpl;
    struct HGSynchronizable { void /* function */ **x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; struct _opaque_pthread_t *x2; unsigned long long x3; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x4; } *_lock;
}

+ (id)imageWithCGImage:(struct CGImage { } *)a0;
+ (id)imageWithCVPixelBuffer:(struct __CVBuffer { } *)a0;
+ (id)imageWithUIImage:(id)a0;
+ (id)imageWithHGBitmap:(struct HGRef<HGBitmap> { struct HGBitmap *x0; })a0;
+ (id)imageWithHGCVPixelBuffer:(struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer *x0; })a0;

- (struct CGImage { } *)cgImage;
- (id)debugQuickLookObject;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (id)uiImage;
- (id)description;
- (struct __CVBuffer { } *)cvPixelBuffer;
- (BOOL)canCreateCVPixelBuffer;
- (BOOL)cvPixelBufferRequiresCopy;
- (struct __CVBuffer { } *)cvPixelBufferWithColorSpace:(id)a0;
- (BOOL)canCreateHGBitmap;
- (struct HGRef<HGBitmap> { struct HGBitmap *x0; })hgBitmapWithColorSpace:(id)a0;
- (struct HGRef<HGBitmap> { struct HGBitmap *x0; })hgBitmap;
- (id)initWithImageBufferImpl:(id)a0;

@end
