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

- (void)setValue:(id)a0 forKey:(id)a1;
- (id)customAttributes;
- (void).cxx_destruct;
- (id)outputImage;
- (BOOL)makeMapImages;

@end
