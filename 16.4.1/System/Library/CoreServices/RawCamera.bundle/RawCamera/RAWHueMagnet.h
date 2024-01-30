@class CIImage, NSNumber;

@interface RAWHueMagnet : RAWFilter {
    CIImage *inputImage;
    id inputColorSpace;
    NSNumber *inputHueMagMR;
    NSNumber *inputHueMagRY;
    NSNumber *inputHueMagYG;
    NSNumber *inputHueMagGC;
    NSNumber *inputHueMagCB;
    NSNumber *inputHueMagBM;
    NSNumber *inputVersion;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)customAttributes;
- (void).cxx_destruct;

@end
