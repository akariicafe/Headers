@class NSData, NSNumber, CIImage;

@interface PILocalLightMapPrepareHDR : CIFilter {
    NSData *inputLightMap;
    NSNumber *inputLightMapWidth;
    NSNumber *inputLightMapHeight;
    CIImage *inputGuideImage;
}

+ (id)customAttributes;

- (id)outputImage;
- (void).cxx_destruct;

@end
