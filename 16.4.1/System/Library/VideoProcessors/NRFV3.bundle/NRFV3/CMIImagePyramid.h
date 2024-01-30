@class NSMutableArray, CMIImagePyramidShaders, FigMetalContext;

@interface CMIImagePyramid : NSObject {
    FigMetalContext *_metalContext;
    CMIImagePyramidShaders *_shaders;
    NSMutableArray *_levelArray;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _levelCount;
    unsigned long long _type;
}

+ (int)prewarmShaders:(id)a0;

- (id)initWithMetalContext:(id)a0;
- (int)generate;
- (void).cxx_destruct;
- (BOOL)_levelArrayHasAllTextures;
- (BOOL)_levelArrayHasAnyTextures;
- (int)allocateLevel:(unsigned long long)a0 withCompressionLevel:(int)a1 withLabel:(id)a2;
- (int)allocateLevel:(unsigned long long)a0 withLabel:(id)a1;
- (int)allocateWithLabel:(id)a0;
- (int)configureWithDescriptor:(id)a0;
- (unsigned long long)getLevelCount;
- (id)getTextureAtLevel:(unsigned long long)a0;
- (id)initWithMetalContext:(id)a0 descriptor:(id)a1;
- (int)releaseAll;
- (int)releaseTextureAtLevel:(unsigned long long)a0;
- (int)setTexture:(id)a0 atLevel:(int)a1;

@end
