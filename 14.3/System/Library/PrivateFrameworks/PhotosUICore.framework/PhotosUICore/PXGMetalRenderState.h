@class NSArray, PXGMetalRenderPassState;
@protocol MTLDevice, MTLBuffer;

@interface PXGMetalRenderState : NSObject {
    struct { struct { void /* unknown type, empty encoding */ columns[4]; } viewMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } projectionMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } viewProjectionMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } billboardMatrix; void /* unknown type, empty encoding */ renderOrigin; float screenScale; } _uniforms;
    long long _shaderFlagsByEffectIdCount;
    long long _shaderFlagsByEffectIdCapacity;
}

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) struct { struct { void /* unknown type, empty encoding */ x0[4]; } x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; struct { void /* unknown type, empty encoding */ x0[4]; } x3; float x4; } *uniforms;
@property (nonatomic) const struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *spriteInfos;
@property (nonatomic) const struct { struct { double x0; double x1; float x2; } x0; } *originalSpriteGeometries;
@property (readonly, nonatomic) int *shaderFlagsByEffectId;
@property (readonly, nonatomic) PXGMetalRenderPassState *currentRenderPassState;
@property (retain, nonatomic) NSArray *textures;
@property (retain, nonatomic) NSArray *captureSpriteTextures;
@property (readonly, nonatomic) const struct { float x0; float x1; float x2; } *spriteGeometries;
@property (readonly, nonatomic) const struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; unsigned short x3; unsigned short x4; unsigned char x5; } *spriteStyles;
@property (readonly, nonatomic) id<MTLBuffer> spriteGeometriesBuffer;
@property (readonly, nonatomic) id<MTLBuffer> spriteStylesBuffer;
@property (readonly, nonatomic) id<MTLBuffer> resizableCapInsetsBuffer;
@property (readonly, nonatomic) id<MTLBuffer> effectDataBuffer;

- (struct { float x0; float x1; float x2; float x3; } *)resizableCapInsetsBufferWithCount:(long long)a0;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (struct { float x0; float x1; float x2; } *)spriteGeometriesBufferWithCount:(long long)a0;
- (void)prepareForCommit;
- (void)prepareForReuse;
- (void)_setShaderFlagsByEffectId:(const int *)a0 withCount:(long long)a1;
- (id)description;
- (struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; unsigned int x8; unsigned short x9; } *)effectDataBufferWithCount:(long long)a0;
- (void)setEffectData:(const struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; unsigned int x8; unsigned short x9; } *)a0 shaderFlags:(const int *)a1 withCount:(long long)a2;
- (struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; unsigned short x3; unsigned short x4; unsigned char x5; } *)spriteStylesBufferWithCount:(long long)a0;
- (id)_resizedBufferIfNeeded:(id)a0 neededLength:(long long)a1;
- (id)renderPassStateForSpriteCount:(long long)a0;

@end
