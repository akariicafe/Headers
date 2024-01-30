@class NSMutableArray;

@interface NoiseModelDeviceParameters : NSObject {
    float gammaY;
    float bandFactorY;
    float biasFactor;
    float slopeFactor;
    float gammaC;
    float bandFactorC;
    float lensShadingFactors[2];
    float chromaDemoireStrength;
    struct { float start; float end; float margin; } bluenessCb;
    struct { float start; float end; float margin; } bluenessCr;
    struct { int length; struct *elements; } high_gain_threshold;
    NSMutableArray *bands;
    float disableLGAThreshold;
    float highGainDenoiseThreshold;
    float highGainSharpenThreshold;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
