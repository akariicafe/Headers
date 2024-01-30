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

- (id)_kernelC;
- (id)_kernelBneg;
- (id)_kernelH;
- (id)outputImage;
- (id)_kernelRH;
- (BOOL)_isIdentity;
- (id)_kernelBpos;
- (void).cxx_destruct;
- (id)_kernelC_hdr;

@end
