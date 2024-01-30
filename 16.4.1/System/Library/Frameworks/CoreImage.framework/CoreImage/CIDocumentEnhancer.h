@class CIImage, NSNumber;

@interface CIDocumentEnhancer : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputAmount;

+ (id)customAttributes;

- (id)outputImage;

@end
