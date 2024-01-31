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

- (id)customAttributes;
- (void)setInputExposure:(id)a0;
- (void).cxx_destruct;
- (void)setInputBias:(id)a0;
- (id)outputImage;
- (id)outputMatrix;

@end
