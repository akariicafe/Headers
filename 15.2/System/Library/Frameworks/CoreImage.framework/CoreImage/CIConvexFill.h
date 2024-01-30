@class CIImage, NSNumber, CIVector;

@interface CIConvexFill : CIFilter {
    CIImage *inputImage;
}

@property (retain, nonatomic) CIImage *inputCenter;
@property (retain, nonatomic) NSNumber *inputThreshold;
@property (retain, nonatomic) CIVector *inputAreaThresholdLoHi;
@property (retain, nonatomic) NSNumber *inputSplat;

- (id)outputImage;

@end
