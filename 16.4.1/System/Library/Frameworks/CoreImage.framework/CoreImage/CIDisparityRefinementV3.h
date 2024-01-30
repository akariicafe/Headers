@class NSNumber, CIImage, NSDictionary;

@interface CIDisparityRefinementV3 : CIFilter

@property (copy) NSNumber *inputScale;
@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputMainImage;
@property (retain) CIImage *inputMatteImage;
@property (retain) NSDictionary *inputTuningParameters;
@property (retain, nonatomic) NSNumber *inputDraftMode;

+ (id)customAttributes;

- (id)outputImage;
- (id)alphaImageForMainImage:(id)a0 disparity:(id)a1;

@end
