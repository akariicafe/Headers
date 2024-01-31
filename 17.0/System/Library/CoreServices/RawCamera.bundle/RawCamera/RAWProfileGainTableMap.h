@class CIVector, NSData, CIImage, NSNumber;

@interface RAWProfileGainTableMap : RAWFilter {
    CIImage *inputImage;
    NSNumber *inputMapPointsV;
    NSNumber *inputMapPointsH;
    NSNumber *inputMapSpacingV;
    NSNumber *inputMapSpacingH;
    NSNumber *inputMapOriginV;
    NSNumber *inputMapOriginH;
    NSNumber *inputMapPointsN;
    CIVector *inputWeights;
    NSData *inputGainData;
    NSNumber *inputGamma;
    NSNumber *inputStrength;
    id inputColorSpace;
}

- (void).cxx_destruct;
- (id)outputImage;
- (id)gainImage;

@end
