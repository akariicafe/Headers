@class GuidedFilterShaders, FigMetalContext;

@interface GuidedFilter : NSObject {
    FigMetalContext *_metalContext;
    GuidedFilterShaders *_shaders;
}

+ (int)prewarmShaders:(id)a0;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (id)createIntermediateTextureWithFormat:(unsigned long long)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 usage:(unsigned long long)a3 label:(id)a4;
- (int)encodeToCommandBuffer:(id)a0 inputTexture:(id)a1 guideTexture:(id)a2 outputTexture:(id)a3 kernelRadius:(unsigned long long)a4 epsilon:(float)a5;

@end
