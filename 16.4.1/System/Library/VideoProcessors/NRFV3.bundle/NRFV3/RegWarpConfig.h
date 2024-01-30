@interface RegWarpConfig : SoftISPConfig

- (int)getDemosaicConfigForInputFrame:(id)a0 demosaicConfig:(struct { unsigned char x0; float x1; float x2; struct { void /* unknown type, empty encoding */ x0[3]; } x3; } *)a1;
- (int)getValidBufferRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forInputFrame:(id)a1 withWidth:(unsigned int)a2 andHeight:(unsigned int)a3;
- (id)initWithStaticParameters:(id)a0 prepareDescriptor:(id)a1;

@end
