@class CIVector, NSNumber, CIColor;

@interface CIRoundedRectangleGenerator : CIFilter

@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) CIColor *inputColor;

+ (id)customAttributes;

- (id)outputImage;

@end
