@class NSData, NSNumber, CIImage;

@interface CILocalLightMapPrepare : CIFilter {
    NSData *inputLightMap;
    NSNumber *inputLightMapWidth;
    NSNumber *inputLightMapHeight;
    CIImage *inputGuideImage;
}

+ (id)customAttributes;

- (id)outputImage;

@end
