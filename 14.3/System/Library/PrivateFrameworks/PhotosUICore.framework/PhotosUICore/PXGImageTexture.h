@interface PXGImageTexture : PXGBaseTexture {
    struct CGImage { } *_sourceCGImage;
    struct __CVBuffer { } *_sourceCVPixelBuffer;
}

@property (nonatomic) struct CGImage { } *sourceCGImage;
@property (nonatomic) struct __CVBuffer { } *sourceCVPixelBuffer;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ orientationTransform;

+ (id)_sharedCIContext;

- (struct CGImage { } *)imageRepresentation;
- (id)init;
- (void)dealloc;
- (void)getTextureInfos:(struct { } *)a0 forSpriteIndexes:(unsigned int *)a1 geometries:(const struct { struct { double x0; double x1; float x2; } x0; } *)a2 spriteStyles:(const struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; unsigned short x3; unsigned short x4; unsigned char x5; } *)a3 spriteInfos:(const struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a4 screenScale:(double)a5 count:(unsigned int)a6;

@end
