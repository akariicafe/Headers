@interface H13FastLumaSharpeningConfig : SoftISPConfig

- (int)getLumaSharpeningConfigForInputFrame:(id)a0 lumaSharpeningConfig:(struct { BOOL x0; void /* unknown type, blank encoding */ x1; void /* unknown type, blank encoding */ x2; void /* unknown type, blank encoding */ x3; void /* unknown type, blank encoding */ x4; void /* unknown type, blank encoding */ x5; void /* unknown type, blank encoding */ x6; void /* unknown type, blank encoding */ x7; void /* unknown type, blank encoding */ x8; void /* unknown type, blank encoding */ x9[5][5]; } *)a1;
- (id)initWithStaticParameters:(id)a0 prepareDescriptor:(id)a1 outputPixelFormat:(unsigned int)a2;

@end
