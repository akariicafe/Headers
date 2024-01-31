@class CIImage, NSNumber, NSData;

@interface RAWLensCorrectionLateralCAFilter : RAWFilter {
    CIImage *inputImage;
    NSNumber *inputLateralCAAmount;
    NSData *inputLateralCAMap;
    NSNumber *inputLateralCAMapWidth;
    NSNumber *inputLateralCAMapHeight;
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
