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
    NSNumber *inputStrength;
    id inputColorSpace;
}

- (id)outputImage;
- (void).cxx_destruct;
- (id)gainImage;

@end
