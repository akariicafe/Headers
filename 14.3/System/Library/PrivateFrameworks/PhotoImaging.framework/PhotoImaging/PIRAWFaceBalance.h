@class CIImage;

@interface PIRAWFaceBalance : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (nonatomic) double inputOrigI;
@property (nonatomic) double inputOrigQ;
@property (nonatomic) double inputStrength;
@property (nonatomic) double inputWarmth;

+ (struct CGColorSpace { } *)linearWideGamutColorSpace;
+ (id)faceBalanceKernels;

- (void).cxx_destruct;
- (id)outputImage;

@end
