@class CIImage, NSData, NSNumber;

@interface RAWLensCorrectionVignetteFilter : RAWFilter {
    CIImage *inputImage;
    NSData *inputVignetteTable;
    NSNumber *inputVignetteAmount;
    id inputColorSpace;
    CIImage *vigImg;
}

+ (id)customAttributes;

- (id)outputImage;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)customAttributes;
- (BOOL)makeMapImages;

@end
