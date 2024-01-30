@class CIImage, NSString;

@interface PIAutoEnhanceFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputTargetImage;
@property (retain, nonatomic) NSString *inputAlgorithm;

+ (id)customAttributes;
+ (id)autoEnhanceCache;

- (id)outputImage;
- (void).cxx_destruct;
- (id)apertureAutoEnhanceFiltersForImage:(id)a0;
- (id)autoEnhanceFiltersForImage:(id)a0 algorithm:(id)a1;
- (id)colorNormalizationFiltersForImage:(id)a0;
- (id)photosAutoEnhanceFiltersForImage:(id)a0;

@end
