@class NSNumber, CIImage;

@interface CIPercentileRed : CIFilter {
    CIImage *inputImage;
}

@property (retain, nonatomic) NSNumber *inputPercentile;
@property (retain, nonatomic) NSNumber *inputCount;
@property (retain, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) NSNumber *inputNormalize;
@property (retain, nonatomic) NSNumber *inputClip;
@property (retain, nonatomic) NSNumber *inputHard;

+ (id)customAttributes;

- (id)outputImage;

@end
