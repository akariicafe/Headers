@class CIImage, NSNumber;

@interface PIHighKeyHDR : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputStrength;

+ (id)customAttributes;

- (id)outputImage;
- (void).cxx_destruct;
- (id)_highKeyHDR;

@end
