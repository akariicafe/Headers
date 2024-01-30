@interface VCPBlurAnalyzer : VCPImageAnalyzer

- (int)computeSharpnessScore:(float *)a0 forObjects:(id)a1 inImage:(struct __CVBuffer { } *)a2;
- (float)computeRegionSharpness:(char *)a0 width:(int)a1 height:(int)a2 stride:(long long)a3;

@end
