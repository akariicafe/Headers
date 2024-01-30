@class CIImage, NSNumber;

@interface PIHighKey : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputStrength;

+ (id)kernel;

- (id)outputImage;
- (void).cxx_destruct;

@end
