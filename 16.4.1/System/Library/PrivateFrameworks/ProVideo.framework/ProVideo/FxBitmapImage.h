@interface FxBitmapImage : NSObject {
    struct FxBitmapImagePriv { id x0; unsigned long long x1; struct CGSize { double x0; double x1; } x2; int x3; struct CGColorSpace *x4; struct CGContext *x5; struct CGImage *x6; struct CGDataProvider *x7; } *_priv;
}

+ (id)bitmapWithData:(id)a0 bytesPerRow:(unsigned long long)a1 size:(struct CGSize { double x0; double x1; })a2 format:(int)a3 colorSpace:(struct CGColorSpace { } *)a4;
+ (id)bitmapWithSize:(struct CGSize { double x0; double x1; })a0 format:(int)a1 colorSpace:(struct CGColorSpace { } *)a2;

- (void *)bytes;
- (struct CGImage { } *)cgImage;
- (id)data;
- (int)pixelFormat;
- (void)dealloc;
- (struct CGContext { } *)cgContext;
- (struct CGSize { double x0; double x1; })size;
- (struct CGColorSpace { } *)colorSpace;
- (unsigned long long)bytesPerRow;
- (id)initWithData:(id)a0 bytesPerRow:(unsigned long long)a1 size:(struct CGSize { double x0; double x1; })a2 format:(int)a3 colorSpace:(struct CGColorSpace { } *)a4;

@end
