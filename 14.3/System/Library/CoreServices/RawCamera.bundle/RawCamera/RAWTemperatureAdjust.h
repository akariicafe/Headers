@class CIImage, CIVector, NSNumber;

@interface RAWTemperatureAdjust : RAWFilter {
    CIImage *inputImage;
    CIVector *inputWhitePoint;
    NSNumber *inputExposure;
    NSNumber *inputVersion;
    CIVector *defaultWhitePoint;
}

+ (id)customAttributes;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)customAttributes;
- (void).cxx_destruct;
- (void)setInputExposure:(id)a0;
- (id)outputImage;
- (id)outputMatrix;
- (void)setInputWhitePoint:(id)a0;

@end
