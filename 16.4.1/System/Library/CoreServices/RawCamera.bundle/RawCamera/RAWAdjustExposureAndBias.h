@class CIImage, NSNumber;

@interface RAWAdjustExposureAndBias : RAWFilter {
    CIImage *inputImage;
    id inputColorSpace;
    NSNumber *inputBaselineExposure;
    NSNumber *inputExposure;
    NSNumber *inputBias;
}

+ (id)customAttributes;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)setInputExposure:(id)a0;
- (id)outputImage;
- (id)customAttributes;
- (void)setInputBias:(id)a0;
- (void).cxx_destruct;
- (id)outputMatrix;

@end
