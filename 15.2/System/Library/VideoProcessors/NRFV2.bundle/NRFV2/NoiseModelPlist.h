@class NSString;

@interface NoiseModelPlist : NSObject {
    float bandFactorC;
    float bandFactorY;
    float biasFactor;
    float gammaC;
    float gammaY;
    float slopeFactor;
    float baseSigma;
    float baseSigmaC;
    NSString *variant;
}

- (void).cxx_destruct;
- (int)readPlist:(id)a0;

@end
