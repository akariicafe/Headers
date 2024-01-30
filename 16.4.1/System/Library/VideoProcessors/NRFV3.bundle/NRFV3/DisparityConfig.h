@interface DisparityConfig : SoftISPConfig

- (int)determineDemosaicParameters:(struct { float x0; float x1; float x2; int x3; } *)a0 inputFrame:(id)a1 bounds:(id)a2;
- (id)initWithStaticParameters:(id)a0 prepareDescriptor:(id)a1 outputPixelFormat:(unsigned int)a2;

@end
