@class PXGImageTexture, NSIndexSet, NSString, PXGColorProgram;
@protocol MTLTexture, PXGMetalSpriteTexture;

@interface PXGEffectWrappingTexture : PXGImageTexture <PXGMetalSpriteTexture>

@property (retain, nonatomic) id<PXGMetalSpriteTexture> parent;
@property (readonly, nonatomic) PXGImageTexture *imageTextureParent;
@property (readonly, nonatomic) id<MTLTexture> texture;
@property (readonly, nonatomic) id<MTLTexture> chromaTexture;
@property (readonly, nonatomic) PXGColorProgram *colorProgram;
@property (nonatomic) long long renderPipelineIndex;
@property (readonly, nonatomic) BOOL isAtlas;
@property (readonly, nonatomic) BOOL isCaptureTexture;
@property (readonly, nonatomic) int shaderFlags;
@property (readonly, nonatomic) unsigned int spriteCount;
@property (readonly, nonatomic) NSIndexSet *spriteIndexes;
@property (readonly, nonatomic) BOOL hasSprites;
@property (readonly, nonatomic) long long estimatedByteSize;
@property (readonly, nonatomic) int presentationType;
@property (readonly, nonatomic) struct CGImage { } *imageRepresentation;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) BOOL isDegraded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_reuseTexture:(id)a0;
+ (id)_reusableTextures;
+ (id)_dequeueTexture;
+ (id)createTexture;

- (void)prepareForRender:(long long)a0;
- (void)getTextureInfos:(struct { } *)a0 forSpriteIndexes:(unsigned int *)a1 geometries:(const struct { struct { double x0; double x1; double x2; } x0; } *)a2 spriteStyles:(const struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; } *)a3 spriteInfos:(const struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a4 screenScale:(double)a5 count:(unsigned int)a6;
- (void /* unknown type, empty encoding */)orientationTransform;
- (void).cxx_destruct;
- (void)cleanupAfterRender:(long long)a0;
- (struct CGImage { } *)sourceCGImage;
- (struct __CVBuffer { } *)sourceCVPixelBuffer;

@end
