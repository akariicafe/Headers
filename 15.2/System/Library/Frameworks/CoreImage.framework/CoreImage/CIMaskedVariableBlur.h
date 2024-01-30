@class CIImage, NSNumber;

@interface CIMaskedVariableBlur : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputMask;
@property (retain, nonatomic) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)outputImage;
- (id)downTwo:(id)a0;
- (id)_kernelD2;
- (id)upCubic:(id)a0 scale:(float)a1;
- (id)_kernelCombine;
- (BOOL)_isIdentity;

@end
