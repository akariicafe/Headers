@class CIImage, NSNumber, NSData;

@interface RAWLensCorrectionDistortionFilter : RAWFilter {
    CIImage *inputImage;
    NSNumber *inputDistortionAmount;
    NSData *inputDistortionMap;
    NSNumber *inputDistortionMapWidth;
    NSNumber *inputDistortionMapHeight;
    id inputColorSpace;
    CIImage *mapImg;
}

+ (id)customAttributes;

- (id)outputImage;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)customAttributes;
- (BOOL)makeMapImages;

@end
