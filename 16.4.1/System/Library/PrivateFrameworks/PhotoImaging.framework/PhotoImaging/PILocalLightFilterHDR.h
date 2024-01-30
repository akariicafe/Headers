@class CIImage, NSData, NSNumber;

@interface PILocalLightFilterHDR : CIFilter {
    CIImage *inputImage;
    CIImage *inputGuideImage;
    NSData *inputLightMap;
    CIImage *inputLightMapImage;
    NSNumber *inputLightMapWidth;
    NSNumber *inputLightMapHeight;
    NSNumber *inputLocalLight;
    NSNumber *inputSmartShadows;
}

+ (id)customAttributes;

- (id)outputImage;
- (void).cxx_destruct;
- (id)_polyKernelHDR;
- (id)_shadowKernelHDR;

@end
