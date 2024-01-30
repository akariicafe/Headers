@protocol MTLTexture;

@interface LumaChromaImage : NSObject {
    struct __CVBuffer { } *pixelBuffer;
    id<MTLTexture> lumaTex;
    id<MTLTexture> chromaTex;
    id<MTLTexture> yCbCrTex;
}

+ (unsigned long long)getMetalLumaFormat:(struct __CVBuffer { } *)a0;
+ (unsigned long long)getMetalChromaFormat:(struct __CVBuffer { } *)a0;
+ (unsigned long long)getMetalYCbCrFormat:(struct __CVBuffer { } *)a0;
+ (int)bindYCbCrMetalTextureWithMetalContext:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 pixelFormat:(unsigned long long)a2 textureToBind:(id *)a3 alignmentFactor:(unsigned long long)a4;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 lumaAlignmentFactor:(unsigned long long)a2 chromaAlignmentFactor:(unsigned long long)a3;
- (int)bindYCbCrTexture:(id)a0 alignmentFactor:(unsigned long long)a1;

@end
