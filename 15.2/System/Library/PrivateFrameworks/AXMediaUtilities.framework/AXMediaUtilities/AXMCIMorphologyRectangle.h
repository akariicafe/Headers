@class CIImage, NSNumber;

@interface AXMCIMorphologyRectangle : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputWidth;
@property (retain, nonatomic) NSNumber *inputHeight;

+ (id)customAttributes;

- (id)outputImage;
- (void).cxx_destruct;
- (BOOL)_doMinimum;
- (BOOL)_isIdentity;

@end
