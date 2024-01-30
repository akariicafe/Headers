@class CIImage;

@interface PIHDRInverseHLGFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;

+ (id)inverseHLGLumaBlendingKernel;

- (id)outputImage;
- (void).cxx_destruct;

@end
