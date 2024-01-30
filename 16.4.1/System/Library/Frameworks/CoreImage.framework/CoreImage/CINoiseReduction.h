@class CIImage, NSNumber;

@interface CINoiseReduction : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputNoiseLevel;
@property (retain, nonatomic) NSNumber *inputSharpness;

+ (id)customAttributes;

- (id)outputImage;
- (id)_CINoiseReduction;

@end
