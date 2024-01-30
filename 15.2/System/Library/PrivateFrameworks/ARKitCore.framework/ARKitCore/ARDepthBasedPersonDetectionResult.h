@interface ARDepthBasedPersonDetectionResult : ARPersonDetectionResult {
    float _sumDepthValues;
    long long _numberDepthPixels;
    float _sumDepthValuesWithHighConfidence;
    long long _numberDepthPixelsWithHighConfidence;
}

@property (nonatomic) double initialBoundingBoxAvg;
@property (readonly, nonatomic) unsigned long long numberOfSamples;

- (float)meanValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addSampleValueWithHighConfidence:(float)a0;
- (void)addSampleValue:(float)a0;

@end
