@class NSArray, PXGMetalRenderPassState;
@protocol MTLDevice, MTLBuffer;

@interface PXGMetalRenderState : NSObject {
    struct { struct { void /* unknown type, empty encoding */ columns[4]; } viewMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } projectionMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } viewProjectionMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } billboardMatrix; void /* unknown type, empty encoding */ renderOrigin; float screenScale; } _uniforms;
}

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) struct { struct { void /* unknown type, empty encoding */ x0[4]; } x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; struct { void /* unknown type, empty encoding */ x0[4]; } x3; float x4; } *uniforms;
@property (nonatomic) const struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *spriteInfos;
@property (nonatomic) const struct { struct { double x0; double x1; double x2; } x0; } *originalSpriteGeometries;
@property (readonly, nonatomic) PXGMetalRenderPassState *currentRenderPassState;
@property (retain, nonatomic) NSArray *textures;
@property (retain, nonatomic) NSArray *captureSpriteTextures;
@property (readonly, nonatomic) const struct { unsigned int x0; } *spriteEntities;
@property (readonly, nonatomic) const struct { float x0; float x1; float x2; } *spriteGeometries;
@property (readonly, nonatomic) const struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *spriteStyles;
@property (readonly, nonatomic) id<MTLBuffer> spriteEntitiesBuffer;
@property (readonly, nonatomic) id<MTLBuffer> spriteGeometriesBuffer;
@property (readonly, nonatomic) id<MTLBuffer> spriteStylesBuffer;
@property (readonly, nonatomic) id<MTLBuffer> resizableCapInsetsBuffer;

- (id)initWithDevice:(id)a0;
- (struct { float x0; float x1; float x2; float x3; } *)resizableCapInsetsBufferWithCount:(long long)a0;
- (id)_resizedBufferIfNeeded:(id)a0 neededLength:(long long)a1;
- (struct { unsigned int x0; } *)spriteEntitiesBufferWithCount:(long long)a0;
- (void)prepareForReuse;
- (struct { float x0; float x1; float x2; } *)spriteGeometriesBufferWithCount:(long long)a0;
- (id)renderPassStateForSpriteCount:(long long)a0;
- (struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)spriteStylesBufferWithCount:(long long)a0;
- (id)description;
- (void).cxx_destruct;
- (void)prepareForCommit;

@end
