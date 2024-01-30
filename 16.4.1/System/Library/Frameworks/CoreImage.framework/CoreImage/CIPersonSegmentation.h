@class CIImage, NSNumber;

@interface CIPersonSegmentation : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputQualityLevel;

+ (id)customAttributes;

- (id)outputImage;

@end
