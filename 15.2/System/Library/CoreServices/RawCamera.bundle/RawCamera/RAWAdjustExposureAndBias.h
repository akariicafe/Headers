@class CIImage, NSNumber;

@interface RAWAdjustExposureAndBias : RAWFilter {
    CIImage *inputImage;
    id inputColorSpace;
    NSNumber *inputBaselineExposure;
    NSNumber *inputExposure;
    NSNumber *inputBias;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)customAttributes;

- (void)setInputBias:(id)a0;
- (id)outputImage;
- (void).cxx_destruct;
- (void)setInputExposure:(id)a0;
- (id)customAttributes;
- (id)outputMatrix;

@end
