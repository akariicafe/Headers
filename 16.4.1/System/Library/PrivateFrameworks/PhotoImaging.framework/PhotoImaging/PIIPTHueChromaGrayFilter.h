@class CIImage, NSNumber;

@interface PIIPTHueChromaGrayFilter : PIIPTHueChromaFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputLumaTarget;
@property (retain, nonatomic) NSNumber *inputLumaRange;
@property (retain, nonatomic) NSNumber *inputChromaMax;

+ (id)filterLumaKernel;

- (id)outputImage;
- (void).cxx_destruct;

@end
