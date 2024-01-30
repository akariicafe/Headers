@class PXGColorProgram, NSIndexSet, NSString;
@protocol MTLTexture;

@interface PXGMetalImageTexture : PXGImageTexture <PXGMetalSpriteTexture> {
    void /* unknown type, empty encoding */ _orientationTransform;
}

@property (readonly, nonatomic) id<MTLTexture> texture;
@property (readonly, nonatomic) id<MTLTexture> chromaTexture;
@property (readonly, nonatomic) PXGColorProgram *colorProgram;
@property (nonatomic) long long renderPipelineIndex;
@property (readonly, nonatomic) BOOL isAtlas;
@property (readonly, nonatomic) BOOL isCaptureTexture;
@property (readonly, nonatomic) int shaderFlags;
@property (readonly, nonatomic) unsigned int spriteCount;
@property (readonly, nonatomic) NSIndexSet *spriteIndexes;
@property (readonly, nonatomic) long long estimatedByteSize;
@property (readonly, nonatomic) int presentationType;
@property (readonly, nonatomic) struct CGImage { } *imageRepresentation;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTexture:(SEL)a0 chromaTexture:(id)a1 colorProgram:(id)a2 isOpaque:(id)a3 shaderFlags:(BOOL)a4 orientationTransform:(int)a5;
- (id)init;
- (void).cxx_destruct;
- (void)prepareForRender:(long long)a0;
- (void /* unknown type, empty encoding */)orientationTransform;
- (id)initWithTexture:(SEL)a0 colorProgram:(id)a1 isOpaque:(id)a2 shaderFlags:(BOOL)a3 orientationTransform:(int)a4;
- (void)cleanupAfterRender:(long long)a0;

@end
