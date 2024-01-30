@class CIImage, NSNumber;

@interface PIIPTHueChromaColorFilter : PIIPTHueChromaFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputHueTarget;
@property (retain, nonatomic) NSNumber *inputHueRange;
@property (retain, nonatomic) NSNumber *inputChromaMin;
@property (retain, nonatomic) NSNumber *inputHueIsNormalized;

+ (id)filterHueKernel;

- (id)outputImage;
- (void).cxx_destruct;

@end
