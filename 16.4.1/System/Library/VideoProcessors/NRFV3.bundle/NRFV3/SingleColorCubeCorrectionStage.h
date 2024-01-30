@class ColorCubeCorrectionShaders, FigMetalContext;
@protocol MTLTexture;

@interface SingleColorCubeCorrectionStage : NSObject {
    id<MTLTexture> _defaultCubeTexture;
    id<MTLTexture> _alternateCubeTexture;
    ColorCubeCorrectionShaders *_shaders;
    FigMetalContext *_metal;
}

@property (readonly, nonatomic) BOOL canApplyMaskedCube;

+ (int)prewarmShaders:(id)a0;

- (void).cxx_destruct;
- (id)init:(id)a0 cubeSize:(unsigned int)a1 data:(const char *)a2;
- (int)load3DTextureFromData:(const char *)a0 cubeSize:(unsigned int)a1 metal:(id)a2 outTexture:(id *)a3;
- (id)init:(id)a0 alternateCubeSize:(unsigned int)a1 alternateCubeData:(const char *)a2 defaultCubeSize:(unsigned int)a3 defaultCubeData:(const char *)a4;
- (int)runOnLuma:(id)a0 andChroma:(id)a1 outChroma:(id)a2;
- (int)runOnLuma:(id)a0 andChroma:(id)a1 withMask:(id)a2 outChroma:(id)a3;

@end
