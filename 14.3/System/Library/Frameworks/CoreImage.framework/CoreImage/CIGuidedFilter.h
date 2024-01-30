@class CIImage, NSNumber;

@interface CIGuidedFilter : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputGuideImage;
@property (copy) NSNumber *inputRadius;
@property (copy) NSNumber *inputEpsilon;

+ (id)customAttributes;

- (id)computeAB:(id)a0;
- (id)_fullFloatBoxFilter;
- (id)_multiplyImagesKernel;
- (id)_boxFilter:(id)a0 fullFloat:(BOOL)a1;
- (id)_swizzleImageXXX1:(id)a0;
- (id)_swizzleImageYYZ1:(id)a0;
- (id)_swizzleImageYZZ1:(id)a0;
- (id)multiplyImages:(id)a0 imageB:(id)a1;
- (id)subtract:(id)a0 minus:(id)a1;
- (id)_computeABKernel;
- (id)_downsampledColorImage:(id)a0;
- (id)_combineRGB_and_A;
- (id)_upsampleImage:(id)a0 targetImageSize:(struct CGSize { double x0; double x1; })a1;
- (id)outputImage;
- (id)_finalResult;

@end
