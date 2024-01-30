@class NSNumber;

@interface CIHueSaturationValueGradient : CIFilter

@property (retain, nonatomic) NSNumber *inputValue;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputSoftness;
@property (retain, nonatomic) NSNumber *inputDither;
@property (retain, nonatomic) id inputColorSpace;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelD;
- (id)_kernel;

@end
