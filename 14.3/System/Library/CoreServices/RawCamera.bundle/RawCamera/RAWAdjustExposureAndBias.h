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

- (id)customAttributes;
- (void).cxx_destruct;
- (void)setInputExposure:(id)a0;
- (id)outputImage;
- (void)setInputBias:(id)a0;
- (id)outputMatrix;

@end
