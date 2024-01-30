@class H13FastPostDemosaicProcShaders, FigMetalContext, H13FastPostDemosaicProcConfigMetal, SoftISPStaticParameters;

@interface H13FastPostDemosaicProcMetal : NSObject {
    SoftISPStaticParameters *_staticParameters;
    H13FastPostDemosaicProcConfigMetal *_h13FastConfig;
}

@property (retain, nonatomic) FigMetalContext *metal;
@property (readonly, nonatomic) H13FastPostDemosaicProcShaders *shaders;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (id)createIntermediateMetalTexture:(id)a0 pixelFormat:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
- (int)runWithInputLumaTex:(SEL)a0 inputChromaTex:(id)a1 postDemosaicProcConfig:(id)a2 chromaSuppressionConfig:(struct { struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; BOOL x6; BOOL x7; float x8[257]; float x9; float x10; float x11; float x12; BOOL x13; BOOL x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23[8]; float x24; float x25; float x26; float x27; float x28; float x29; } x0; float x1; } *)a3 outputSize:(struct ChromaSupressionStruct { float x0[35]; float x1[25]; float x2; float x3; float x4; float x5; float x6[129]; float x7[33]; float x8[129]; float x9[129]; float x10; float x11; float x12; struct CCParams { struct YCC2RGBParams { short x0[9]; } x0; struct RGB2YCCParams { short x0[9]; } x1; } x13; } *)a4 outputLumaTex:(id)a5 outputChromaTex:(id)a6 commandBuffer:(id)a7 outputFrame:(id)a8 isQuadra:(BOOL)a9;
- (int)runWithTextureArray:(id)a0 inputCropRect:(struct { union { struct { int x0; int x1; } x0; } x0; union { struct { unsigned int x0; unsigned int x1; } x0; } x1; })a1 inputMetadata:(id)a2 controls:(const struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; BOOL x6; BOOL x7; float x8[257]; float x9; float x10; float x11; float x12; BOOL x13; BOOL x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23[8]; float x24; float x25; float x26; float x27; float x28; float x29; } *)a3 outputCropRect:(struct { union { struct { int x0; int x1; } x0; } x0; union { struct { unsigned int x0; unsigned int x1; } x0; } x1; })a4 blacklevel:(float)a5;
- (int)runWithTextureArray:(SEL)a0 postDemosaicProcConfig:(id)a1 chromaSupressionConfig:(struct { struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; BOOL x6; BOOL x7; float x8[257]; float x9; float x10; float x11; float x12; BOOL x13; BOOL x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23[8]; float x24; float x25; float x26; float x27; float x28; float x29; } x0; float x1; } *)a2 outputSize:(struct ChromaSupressionStruct { float x0[35]; float x1[25]; float x2; float x3; float x4; float x5; float x6[129]; float x7[33]; float x8[129]; float x9[129]; float x10; float x11; float x12; struct CCParams { struct YCC2RGBParams { short x0[9]; } x0; struct RGB2YCCParams { short x0[9]; } x1; } x13; } *)a3;
- (BOOL)supportsInPlaceOperation:(const struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; BOOL x6; BOOL x7; float x8[257]; float x9; float x10; float x11; float x12; BOOL x13; BOOL x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23[8]; float x24; float x25; float x26; float x27; float x28; float x29; } *)a0;

@end
