@protocol MTLTexture;

@interface PyramidStorage_NRF : NSObject {
    int levels;
    struct __CVBuffer *pixelBuffer[20];
    struct __CVBuffer *pixelBuffer2[20];
    id<MTLTexture> textureY[20];
    id<MTLTexture> textureUV[20];
    id<MTLTexture> textureYCbCrBand0;
    BOOL isFP16[20];
}

+ (void)makePyramidAliasable:(id)a0 metal:(id)a1;
+ (void)makePyramidAliasable:(id)a0 metal:(id)a1 releaseBand0:(BOOL)a2;
+ (int)allocatePyramidWithMetalContext:(id)a0 label:(id)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 isFP16:(BOOL)a4 pyramid:(id)a5;
+ (int)allocatePyramidWithMetalContext:(id)a0 label:(id)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 isFP16:(BOOL)a4 createLuma:(BOOL)a5 createChroma:(BOOL)a6 pyramid:(id)a7;
+ (int)allocatePyramidWithMetalContext:(id)a0 label:(id)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 isFP16:(BOOL)a4 createLuma:(BOOL)a5 createChroma:(BOOL)a6 startingLevel:(BOOL)a7 testSize:(BOOL)a8 pyramid:(id)a9;
+ (int)allocatePyramidWithWidth:(unsigned short)a0 height:(unsigned short)a1 allocLevel0:(BOOL)a2 levels:(unsigned char)a3 texUsage:(unsigned long long)a4 mtlSubAllocatorID:(unsigned int)a5 label:(id)a6 lumaFormat:(unsigned long long)a7 chromaFormat:(unsigned long long)a8 outPyramid:(id)a9 metal:(id)a10;
+ (int)pyramidMemorySize:(unsigned short)a0 height:(unsigned short)a1 overlapLevels:(BOOL)a2 allocLevel0:(BOOL)a3 levels:(unsigned char)a4 lumaFormat:(unsigned long long)a5 chromaFormat:(unsigned long long)a6 outSize:(unsigned long long *)a7 metal:(id)a8;
+ (int)pyramidMemorySize:(unsigned short)a0 height:(unsigned short)a1 allocLevel0:(BOOL)a2 levels:(unsigned char)a3 lumaFormat:(unsigned long long)a4 chromaFormat:(unsigned long long)a5 outSize:(unsigned long long *)a6 metal:(id)a7;
+ (int)overlappingLevelsMemorySize:(unsigned short)a0 height:(unsigned short)a1 allocLevel0:(BOOL)a2 levels:(unsigned char)a3 lumaFormat:(unsigned long long)a4 chromaFormat:(unsigned long long)a5 outSize:(unsigned long long *)a6 metal:(id)a7;
+ (id)createTextureAlias:(id)a0;

- (void)releaseBuffers;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearLevel:(int)a0;
- (int)setLumaTexture:(id)a0 chromaTexture:(id)a1 level:(int)a2 metal:(id)a3;
- (int)setYCbCrBand0Texture:(id)a0;
- (int)setPixelBufferForLuma:(struct __CVBuffer { } *)a0 optionalChroma:(struct __CVBuffer { } *)a1 level:(int)a2 metal:(id)a3;
- (int)setPixelBuffer:(struct __CVBuffer { } *)a0 level:(int)a1 texUsage:(unsigned long long)a2 metal:(id)a3 alignDims:(BOOL)a4;
- (int)setPixelBuffer:(struct __CVBuffer { } *)a0 level:(int)a1 texUsage:(unsigned long long)a2 metal:(id)a3;
- (int)setPixelBufferFloat16:(struct __CVBuffer { } *)a0 chromaBuffer:(struct __CVBuffer { } *)a1 level:(int)a2 metal:(id)a3;
- (int)setPixelBuffer:(struct __CVBuffer { } *)a0 level:(int)a1 metal:(id)a2;

@end
