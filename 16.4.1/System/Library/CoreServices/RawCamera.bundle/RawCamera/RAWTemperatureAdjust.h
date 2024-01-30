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

- (void)setInputExposure:(id)a0;
- (id)outputImage;
- (id)customAttributes;
- (void).cxx_destruct;
- (id)outputMatrix;
- (void)setInputWhitePoint:(id)a0;

@end
