@class NSArray, TSDGPUDataBuffer, NSString, TSDGPUDataBufferAttribute, TSDMetalContext, NSMutableSet;
@protocol MTLTexture;

@interface TSDGPUParticleSystem : NSObject <TSDMTLParticleSystem> {
    BOOL *_visibilities;
    BOOL _isInitialized;
    BOOL _isDataBufferInitialized;
    unsigned long long _textureCount;
    BOOL _hasParticleTexture;
    NSMutableSet *_attributesInShader;
}

@property (readonly, nonatomic) unsigned long long particleCount;
@property (readonly, nonatomic) unsigned long long visibleParticleCount;
@property (readonly, nonatomic) unsigned long long particlesWide;
@property (readonly, nonatomic) unsigned long long particlesHigh;
@property (readonly, nonatomic) struct CGSize { double width; double height; } particleSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } objectSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } slideSize;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) id randomGenerator;
@property (readonly, nonatomic) NSArray *dataBufferAttributes;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *positionAttribute;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *centerAttribute;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *texCoordAttribute;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *particleTexCoordAttribute;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *colorAttribute;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *lifeSpanAttribute;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *speedAttribute;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *rotationAttribute;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *scaleAttribute;
@property (readonly, nonatomic) TSDGPUDataBufferAttribute *colorTexCoordAttribute;
@property (readonly, nonatomic) TSDGPUDataBuffer *dataBuffer;
@property (readonly, nonatomic) BOOL shouldDraw;
@property (readonly, nonatomic) TSDMetalContext *metalContext;
@property (readonly, nonatomic) id<MTLTexture> vertexColorTexture;
@property (readonly, nonatomic) struct CGSize { double width; double height; } vertexTextureSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newDataBufferAttributeWithName:(id)a0;
+ (id)newParticleSystemWithNumberOfParticles:(unsigned long long)a0 objectSize:(struct CGSize { double x0; double x1; })a1 slideSize:(struct CGSize { double x0; double x1; })a2 duration:(double)a3 direction:(unsigned long long)a4 randomGenerator:(id)a5 shader:(id)a6 metalContext:(id)a7;
+ (id)newParticleSystemWithParticleSize:(struct CGSize { double x0; double x1; })a0 particleSystemSize:(struct CGSize { double x0; double x1; })a1 objectSize:(struct CGSize { double x0; double x1; })a2 slideSize:(struct CGSize { double x0; double x1; })a3 duration:(double)a4 direction:(unsigned long long)a5 randomGenerator:(id)a6 shader:(id)a7 metalContext:(id)a8;
+ (unsigned long long)numberOfVerticesPerParticle;
+ (struct CGSize { double x0; double x1; })p_particleSystemSizeWithRequestedNumber:(unsigned long long)a0 objectSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)shouldDrawInvisibleParticles;
+ (BOOL)willOverrideColorTexCoords;
+ (BOOL)willOverrideColors;
+ (BOOL)willOverrideGeometry;
+ (BOOL)willOverrideStartingPoints;
+ (BOOL)willOverrideVisibilities;

- (void)dealloc;
- (void)p_setupParticleDataWithTexture:(id)a0;
- (unsigned long long)indexFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct { float x0; float x1; })centerAtIndexPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct { float x0; float x1; float x2; float x3; })colorAtIndexPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct { float x0; float x1; })colorTexCoordAtIndexPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)drawMetalWithEncoder:(id)a0;
- (struct CGPoint { double x0; double x1; })indexPointFromIndex:(unsigned long long)a0;
- (id)initWithParticleSize:(struct CGSize { double x0; double x1; })a0 particleSystemSize:(struct CGSize { double x0; double x1; })a1 objectSize:(struct CGSize { double x0; double x1; })a2 slideSize:(struct CGSize { double x0; double x1; })a3 duration:(double)a4 direction:(unsigned long long)a5 randomGenerator:(id)a6 shader:(id)a7 metalContext:(id)a8;
- (struct { float x0; float x1; })lifeSpanAtIndexPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGContext { } *)newContextFromTexture:(id)a0;
- (void)p_logParticleInformation;
- (struct CGSize { double x0; double x1; })p_resizeSystemToFitWithinMaxVerticesWithSystemSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_reverseParticleDataDrawOrder;
- (void)p_setDataBufferAttribute:(id *)a0 withName:(id)a1 defaultDataType:(long long)a2 normalized:(BOOL)a3 componentCount:(unsigned long long)a4;
- (void)p_setupDataBufferWithParticleCount:(unsigned long long)a0 visibleParticleCount:(unsigned long long)a1;
- (void)p_setupParticleSystemWithParticleSize:(struct CGSize { double x0; double x1; })a0 particleSystemSize:(struct CGSize { double x0; double x1; })a1 objectSize:(struct CGSize { double x0; double x1; })a2 slideSize:(struct CGSize { double x0; double x1; })a3 duration:(double)a4 direction:(unsigned long long)a5 randomGenerator:(id)a6;
- (void)p_setupParticleTextureDataWithTexture:(id)a0 capabilities:(id)a1;
- (void)p_setupVertexData;
- (struct { float x0; float x1; float x2; })rotationAtIndexPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)rotationMax;
- (double)scaleAtIndexPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setupMetalWithShader:(id)a0;
- (void)setupWithTexture:(id)a0 particleTextureSize:(struct CGSize { double x0; double x1; })a1 reverseDrawOrder:(BOOL)a2;
- (void)setupWithTexture:(id)a0 particleTextureSize:(struct CGSize { double x0; double x1; })a1 reverseDrawOrder:(BOOL)a2 capabilities:(id)a3;
- (struct { float x0; float x1; float x2; })speedAtIndexPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)speedMax;
- (struct CGPoint { double x0; double x1; })startingPointAtIndexPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct { float x0; float x1; })vertexPositionAtVertexIndex:(unsigned long long)a0 particleIndexPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)visibilityAtIndexPoint:(struct CGPoint { double x0; double x1; })a0;

@end
