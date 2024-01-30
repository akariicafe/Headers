@class NSMutableArray, DeepFusionLaplacianPyramidShaders, FigMetalContext;

@interface DeepFusionPyramidBaseClass : NSObject {
    FigMetalContext *_metal;
    DeepFusionLaplacianPyramidShaders *_shaders;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _pixelFormat;
    unsigned long long _numLevels;
    unsigned long long _minTexAlignment;
    unsigned long long _pixelBytes;
    NSMutableArray *_outputTextures;
}

+ (int)prewarmShaders:(id)a0;

- (void)purgeResources;
- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)setWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned long long)a2 numLevels:(unsigned long long)a3;
- (id)outputTextureArray;
- (int)allocateTextures:(id)a0;
- (void)makeTexturesAliasableWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)makeTexturesAliasable;
- (unsigned long long)_strideForWidth:(unsigned long long)a0;
- (int)_computeScratchBufferSizeForTextures:(unsigned long long)a0 requiredSize:(unsigned long long *)a1;

@end
