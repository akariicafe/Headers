@class CIImage;

@interface PIRAWFaceBalance : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (nonatomic) double inputOrigI;
@property (nonatomic) double inputOrigQ;
@property (nonatomic) double inputStrength;
@property (nonatomic) double inputWarmth;

+ (id)faceBalanceKernels;
+ (struct CGColorSpace { } *)linearWideGamutColorSpace;
+ (struct CGColorSpace { } *)newLinearWideGamutColorSpace;

- (id)outputImage;
- (void).cxx_destruct;

@end
