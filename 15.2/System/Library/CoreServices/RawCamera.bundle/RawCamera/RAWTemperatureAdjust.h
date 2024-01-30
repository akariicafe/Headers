@class CIImage, CIVector, NSNumber;

@interface RAWTemperatureAdjust : RAWFilter {
    CIImage *inputImage;
    CIVector *inputWhitePoint;
    NSNumber *inputExposure;
    NSNumber *inputVersion;
    CIVector *defaultWhitePoint;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)customAttributes;

- (id)outputImage;
- (void).cxx_destruct;
- (void)setInputExposure:(id)a0;
- (id)customAttributes;
- (id)outputMatrix;
- (void)setInputWhitePoint:(id)a0;

@end
