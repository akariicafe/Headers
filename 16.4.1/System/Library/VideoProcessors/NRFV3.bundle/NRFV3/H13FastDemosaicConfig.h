@class H13FastDemosaicConfigMetal;

@interface H13FastDemosaicConfig : SoftISPConfig

@property (retain, nonatomic) H13FastDemosaicConfigMetal *cfgMTL;
@property (readonly) BOOL outputGammaEncoded;

- (void).cxx_destruct;
- (int)getDemosaicConfigForInputFrame:(id)a0 demosaicConfig:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; struct { void /* unknown type, empty encoding */ x0[3]; } x4; int x5; BOOL x6; unsigned short x7; } *)a1;
- (id)initWithStaticParameters:(id)a0 prepareDescriptor:(id)a1 outputPixelFormat:(unsigned int)a2 outputGammaEncoded:(BOOL)a3;

@end
