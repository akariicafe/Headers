@interface H13FastPowerBlurConfig : SoftISPConfig

- (float)_calculateReadNoise:(const struct { float x0; float x1; float x2; } *)a0;
- (int)getPowerBlurConfigForInputFrame:(id)a0 PowerBlurConfig:(struct { unsigned short x0; float x1; float x2; struct { float x0; float x1; float x2; float x3; float x4; } x3; float x4; float x5; union { } x6; union { } x7; } *)a1 enablePowerBlur:(BOOL *)a2;
- (id)initWithStaticParameters:(id)a0 prepareDescriptor:(id)a1 outputPixelFormat:(unsigned int)a2;

@end
