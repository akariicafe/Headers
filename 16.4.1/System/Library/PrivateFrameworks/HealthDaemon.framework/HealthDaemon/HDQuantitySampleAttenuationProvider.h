@class HKQuantityType, HDProfile, HDQuantitySampleOverlapProcessor;

@interface HDQuantitySampleAttenuationProvider : NSObject <HDQuantitySampleAttenuationEngineDelegate> {
    HKQuantityType *_quantityType;
    HDProfile *_profile;
    HDQuantitySampleOverlapProcessor *_overlapProcessor;
}

- (void).cxx_destruct;
- (id)initWithQuantityType:(id)a0 profile:(id)a1;
- (long long)loadAttenuationSamples:(struct { double x0; double x1; double x2; } *)a0 anchorTime:(double)a1 errorOut:(id *)a2;

@end
