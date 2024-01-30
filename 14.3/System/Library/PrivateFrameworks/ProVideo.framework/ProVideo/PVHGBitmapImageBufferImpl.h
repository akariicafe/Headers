@class NSString;

@interface PVHGBitmapImageBufferImpl : NSObject <PVImageBufferImpl> {
    struct HGRef<HGBitmap> { struct HGBitmap *m_Obj; } _bitmap;
    struct CGImage { } *_generatedCGImage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGImage { } *)cgImage;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (id).cxx_construct;
- (BOOL)canCreateCVPixelBuffer;
- (BOOL)cvPixelBufferRequiresCopy;
- (struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer *x0; })cvPixelBufferWithColorSpace:(id)a0;
- (BOOL)canCreateHGBitmap;
- (struct HGRef<HGBitmap> { struct HGBitmap *x0; })hgBitmapWithColorSpace:(id)a0;
- (id)initWithHGBitmap:(struct HGRef<HGBitmap> { struct HGBitmap *x0; })a0;

@end
