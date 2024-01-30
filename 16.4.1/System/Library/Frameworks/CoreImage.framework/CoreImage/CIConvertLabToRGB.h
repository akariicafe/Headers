@class CIImage, NSNumber;

@interface CIConvertLabToRGB : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputNormalize;

+ (id)customAttributes;

- (id)outputImage;

@end
