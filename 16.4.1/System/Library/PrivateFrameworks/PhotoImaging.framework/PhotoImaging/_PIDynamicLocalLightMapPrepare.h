@class NSData, NSNumber, CIImage;

@interface _PIDynamicLocalLightMapPrepare : CIFilter {
    NSData *inputLightMap;
    NSNumber *inputLightMapWidth;
    NSNumber *inputLightMapHeight;
    CIImage *inputGuideImage;
    NSNumber *inputGuidedFilterEpsilon;
}

+ (id)customAttributes;

- (id)outputImage;
- (void).cxx_destruct;

@end
