@class CIImage, NSNumber;

@interface CIDisplacementDistortion : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputDisplacementImage;
@property (retain, nonatomic) NSNumber *inputScale;

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIDisplaceFromImage;

@end
