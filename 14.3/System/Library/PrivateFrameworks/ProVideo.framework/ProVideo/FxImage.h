@interface FxImage : NSObject <NSCopying> {
    struct FxImagePriv { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; void /* function */ *x6; void *x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; struct FxRect { int x0; int x1; int x2; int x3; } x9; id x10; struct CGColorSpace *x11; unsigned long long x12; int x13; } *_imagePriv;
}

+ (id)alloc;

- (unsigned long long)depth;
- (unsigned long long)bytes;
- (void)setColorSpace:(struct CGColorSpace { } *)a0;
- (struct CGColorSpace { } *)colorSpace;
- (unsigned long long)field;
- (unsigned long long)width;
- (struct FxRect { int x0; int x1; int x2; int x3; })dod;
- (id)init;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)pixelFormat;
- (unsigned long long)origin;
- (void)setBytes:(unsigned long long)a0;
- (void)setOrigin:(unsigned long long)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setHeight:(unsigned long long)a0;
- (unsigned long long)size;
- (void)setDepth:(unsigned long long)a0;
- (unsigned long long)height;
- (double)scaleX;
- (double)scaleY;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })imageInfo;
- (unsigned long long)version;
- (void)setColorInfo:(unsigned long long)a0;
- (void)setField:(unsigned long long)a0;
- (void)setPixelFormat:(unsigned long long)a0;
- (void)setWidth:(unsigned long long)a0;
- (unsigned long long)imageType;
- (unsigned long long)colorInfo;
- (void)setImageType:(unsigned long long)a0;
- (int)eyeType;
- (void)setDod:(struct FxRect { int x0; int x1; int x2; int x3; })a0;
- (id)initWithInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a0;
- (BOOL)isPremultiplied;
- (void)setScaleX:(double)a0;
- (void)setScaleY:(double)a0;
- (double)pixelAspect;
- (id)pixelTransform;
- (id)inversePixelTransform;
- (unsigned long long)fieldOrder;
- (unsigned long long)numActiveChannels;
- (BOOL)containsPointX:(int)a0 Y:(int)a1;
- (void)setWidth:(unsigned long long)a0 andHeight:(unsigned long long)a1;
- (void)setNumActiveChannels:(unsigned long long)a0;
- (void)setIsPremultiplied:(BOOL)a0;
- (void)setPixelAspect:(double)a0;
- (void)setFieldOrder:(unsigned long long)a0;
- (unsigned long long)fxColorPrimaries;
- (void)setFxColorPrimaries:(unsigned long long)a0;
- (void)setEyeType:(int)a0;
- (void)setPixelTransform:(id)a0;
- (void)setDeallocCallback:(void /* function */ *)a0 refcon:(void *)a1;
- (BOOL)_verifyImage;

@end
