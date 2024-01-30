@class CIImage, NSNumber, CIContext;

@interface CISmartColorFilter : CIFilter {
    CIImage *_cubeImage;
    CIContext *_cubeContext;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputVibrancy;
@property (retain, nonatomic) NSNumber *inputContrast;
@property (retain, nonatomic) NSNumber *inputCast;
@property (retain, nonatomic) NSNumber *inputUseCube;
@property (retain, nonatomic) id inputUseCubeColorSpace;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (void)dealloc;
- (id)_kernelV_lt1;
- (id)_kernelV_gt1;
- (id)_kernelCPos;
- (id)_kernelCNeg;
- (id)_kernelCast;
- (id)outputImage;
- (void)setValue:(id)a0 forKey:(id)a1;

@end
