@class CIContext, NSData, CIImage, NSNumber;

@interface CISmartToneFilter : CIFilter {
    CIImage *_cubeImage;
    NSData *_cubeData;
    CIContext *_cubeContext;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputExposure;
@property (retain, nonatomic) NSNumber *inputContrast;
@property (retain, nonatomic) NSNumber *inputBrightness;
@property (retain, nonatomic) NSNumber *inputShadows;
@property (retain, nonatomic) NSNumber *inputHighlights;
@property (retain, nonatomic) NSNumber *inputBlack;
@property (retain, nonatomic) NSNumber *inputRawHighlights;
@property (retain, nonatomic) NSNumber *inputLocalLight;
@property (retain, nonatomic) NSData *inputLightMap;
@property (retain, nonatomic) NSNumber *inputUseCube;
@property (retain, nonatomic) id inputUseCubeColorSpace;

+ (id)customAttributes;

- (id)outputImage;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)_kernelH;
- (id)_kernelC;
- (id)_kernelRH;
- (void)dealloc;
- (BOOL)_isIdentity;
- (id)_kernelBneg;
- (id)_kernelBpos;

@end
