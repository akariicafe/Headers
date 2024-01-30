@interface VCPImageExposurePreAnalyzer : VCPImageAnalyzer

@property (readonly, nonatomic) float exposureScore;

- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (float)computeNoiseLevel:(char *)a0 width:(int)a1 height:(int)a2 stride:(long long)a3 textureness:(char *)a4;
- (float)computeRegionNoise:(char *)a0 blockTextureness:(char *)a1 average:(char *)a2 width:(int)a3 height:(int)a4 stride:(long long)a5;

@end
