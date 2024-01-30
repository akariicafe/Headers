@interface GDCConfig : SoftISPConfig

- (int)getWarpConfigForInputFrame:(id)a0 bounds:(id)a1 warpConfig:(struct CMIWarpConfig { } *)a2;
- (id)initWithStaticParameters:(id)a0 prepareDescriptor:(id)a1 outputPixelFormat:(unsigned int)a2;

@end
