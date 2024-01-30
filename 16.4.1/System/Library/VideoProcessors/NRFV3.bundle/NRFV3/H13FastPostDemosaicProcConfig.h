@class H13FastPostDemosaicProcConfigMetal;

@interface H13FastPostDemosaicProcConfig : SoftISPConfig

@property (retain, nonatomic) H13FastPostDemosaicProcConfigMetal *cfgMTL;

- (void).cxx_destruct;
- (int)getPostDemosaicProcConfigForInputFrame:(id)a0 postDemosaicProcConfig:(struct { struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; BOOL x6; BOOL x7; float x8[257]; float x9; float x10; float x11; float x12; BOOL x13; BOOL x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23[8]; float x24; float x25; float x26; float x27; float x28; float x29; } x0; float x1; } *)a1 chromaSuppressionConfig:(struct ChromaSupressionStruct { float x0[35]; float x1[25]; float x2; float x3; float x4; float x5; float x6[129]; float x7[33]; float x8[129]; float x9[129]; float x10; float x11; float x12; struct CCParams { struct YCC2RGBParams { short x0[9]; } x0; struct RGB2YCCParams { short x0[9]; } x1; } x13; } *)a2;
- (id)initWithStaticParameters:(id)a0 prepareDescriptor:(id)a1 outputPixelFormat:(unsigned int)a2;

@end
