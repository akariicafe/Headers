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

- (id)customAttributes;
- (void)setInputExposure:(id)a0;
- (void).cxx_destruct;
- (id)outputImage;
- (id)outputMatrix;
- (void)setInputWhitePoint:(id)a0;

@end
