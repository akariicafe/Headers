@class NSString;

@interface PVCGImageBufferImpl : NSObject <PVImageBufferImpl> {
    struct CGImage { } *_image;
    struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer *m_Obj; } _generatedPixelBuffer;
    struct HGRef<HGBitmap> { struct HGBitmap *m_Obj; } _generatedBitmap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGImage { } *)cgImage;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (struct CGSize { double x0; double x1; })size;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (BOOL)canCreateCVPixelBuffer;
- (BOOL)cvPixelBufferRequiresCopy;
- (struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer *x0; })cvPixelBufferWithColorSpace:(id)a0;
- (BOOL)canCreateHGBitmap;
- (struct HGRef<HGBitmap> { struct HGBitmap *x0; })hgBitmapWithColorSpace:(id)a0;

@end
