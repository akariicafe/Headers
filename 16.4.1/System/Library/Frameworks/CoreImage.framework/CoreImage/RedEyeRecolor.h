@class CIImage, NSNumber, CIVector;

@interface RedEyeRecolor : CIFilter {
    CIImage *inputImage;
}

@property (retain, nonatomic) CIImage *inputSource;
@property (retain, nonatomic) CIImage *inputMask;
@property (retain, nonatomic) NSNumber *inputNoiseAmount;
@property (retain, nonatomic) NSNumber *inputBrightness;
@property (retain, nonatomic) NSNumber *inputRecovery;
@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) NSNumber *inputWhiteCutoff;
@property (retain, nonatomic) NSNumber *inputChroma;

- (id)outputImage;
- (id)kernelRecovery;
- (id)kernelRepair;

@end
