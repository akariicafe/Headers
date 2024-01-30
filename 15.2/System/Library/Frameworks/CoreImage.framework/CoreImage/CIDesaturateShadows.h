@class NSNumber, CIImage;

@interface CIDesaturateShadows : CIFilter {
    CIImage *inputImage;
}

@property (retain, nonatomic) NSNumber *inputIntensity;
@property (retain, nonatomic) NSNumber *inputThreshold;
@property (retain, nonatomic) NSNumber *inputSoftness;

+ (id)customAttributes;

- (id)outputImage;

@end
