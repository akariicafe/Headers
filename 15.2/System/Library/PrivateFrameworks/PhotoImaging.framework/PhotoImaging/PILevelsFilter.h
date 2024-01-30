@class CIImage, NSNumber, NSString;

@interface PILevelsFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputBlackSrcRGB;
@property (retain, nonatomic) NSNumber *inputBlackDstRGB;
@property (retain, nonatomic) NSNumber *inputShadowSrcRGB;
@property (retain, nonatomic) NSNumber *inputShadowDstRGB;
@property (retain, nonatomic) NSNumber *inputMidSrcRGB;
@property (retain, nonatomic) NSNumber *inputMidDstRGB;
@property (retain, nonatomic) NSNumber *inputHilightSrcRGB;
@property (retain, nonatomic) NSNumber *inputHilightDstRGB;
@property (retain, nonatomic) NSNumber *inputWhiteSrcRGB;
@property (retain, nonatomic) NSNumber *inputWhiteDstRGB;
@property (retain, nonatomic) NSNumber *inputBlackSrcRed;
@property (retain, nonatomic) NSNumber *inputBlackDstRed;
@property (retain, nonatomic) NSNumber *inputShadowSrcRed;
@property (retain, nonatomic) NSNumber *inputShadowDstRed;
@property (retain, nonatomic) NSNumber *inputMidSrcRed;
@property (retain, nonatomic) NSNumber *inputMidDstRed;
@property (retain, nonatomic) NSNumber *inputHilightSrcRed;
@property (retain, nonatomic) NSNumber *inputHilightDstRed;
@property (retain, nonatomic) NSNumber *inputWhiteSrcRed;
@property (retain, nonatomic) NSNumber *inputWhiteDstRed;
@property (retain, nonatomic) NSNumber *inputBlackSrcGreen;
@property (retain, nonatomic) NSNumber *inputBlackDstGreen;
@property (retain, nonatomic) NSNumber *inputShadowSrcGreen;
@property (retain, nonatomic) NSNumber *inputShadowDstGreen;
@property (retain, nonatomic) NSNumber *inputMidSrcGreen;
@property (retain, nonatomic) NSNumber *inputMidDstGreen;
@property (retain, nonatomic) NSNumber *inputHilightSrcGreen;
@property (retain, nonatomic) NSNumber *inputHilightDstGreen;
@property (retain, nonatomic) NSNumber *inputWhiteSrcGreen;
@property (retain, nonatomic) NSNumber *inputWhiteDstGreen;
@property (retain, nonatomic) NSNumber *inputBlackSrcBlue;
@property (retain, nonatomic) NSNumber *inputBlackDstBlue;
@property (retain, nonatomic) NSNumber *inputShadowSrcBlue;
@property (retain, nonatomic) NSNumber *inputShadowDstBlue;
@property (retain, nonatomic) NSNumber *inputMidSrcBlue;
@property (retain, nonatomic) NSNumber *inputMidDstBlue;
@property (retain, nonatomic) NSNumber *inputHilightSrcBlue;
@property (retain, nonatomic) NSNumber *inputHilightDstBlue;
@property (retain, nonatomic) NSNumber *inputWhiteSrcBlue;
@property (retain, nonatomic) NSNumber *inputWhiteDstBlue;
@property (retain, nonatomic) NSString *inputColorSpace;

+ (id)defaultValueForKey:(id)a0;
+ (id)customAttributes;
+ (id)_customAttributesForKey:(id)a0;
+ (id)P3Kernel;

- (id)outputImage;
- (void)setDefaults;
- (void).cxx_destruct;
- (double)floatValueForKey:(id)a0 defaultValue:(double)a1 clearIfNotDefault:(BOOL *)a2;
- (id)_LUTImage;

@end
