@class CIColor;

@interface CIConstantColorGenerator : CIFilter

@property (retain, nonatomic) CIColor *inputColor;

+ (id)customAttributes;

- (id)outputImage;

@end
