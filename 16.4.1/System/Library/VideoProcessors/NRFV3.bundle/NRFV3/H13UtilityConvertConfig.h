@interface H13UtilityConvertConfig : SoftISPConfig

- (int)getConfigForInputFrame:(id)a0 outputFrame:(id)a1 config:(struct { float x0; int x1; } *)a2;
- (id)initWithStaticParameters:(id)a0 prepareDescriptor:(id)a1 inputPixelFormat:(int)a2 outputPixelFormat:(int)a3 outputCompressionLevel:(int)a4;

@end
