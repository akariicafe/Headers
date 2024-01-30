@class CIImage, NSNumber;

@interface PISmartToneFilterHDR : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputExposure;
@property (retain, nonatomic) NSNumber *inputContrast;
@property (retain, nonatomic) NSNumber *inputBrightness;
@property (retain, nonatomic) NSNumber *inputShadows;
@property (retain, nonatomic) NSNumber *inputHighlights;
@property (retain, nonatomic) NSNumber *inputBlack;
@property (retain, nonatomic) NSNumber *inputRawHighlights;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelH;
- (id)_kernelC;
- (void).cxx_destruct;
- (id)_kernelRH;
- (BOOL)_isIdentity;
- (id)_kernelBneg;
- (id)_kernelBpos;
- (id)_kernelC_hdr;

@end
