@class CIImage, NSNumber;

@interface PISmartColorFilterHDR : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputVibrancy;
@property (retain, nonatomic) NSNumber *inputContrast;
@property (retain, nonatomic) NSNumber *inputCast;

+ (id)customAttributes;

- (id)outputImage;
- (void).cxx_destruct;
- (BOOL)_isIdentity;
- (id)_kernelCPos;
- (id)_kernelV_lt1;
- (id)_kernelV_gt1;
- (id)_kernelCNeg;
- (id)_kernelCast;

@end
