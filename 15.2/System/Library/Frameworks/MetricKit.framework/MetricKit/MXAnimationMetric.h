@class NSMeasurement;

@interface MXAnimationMetric : MXMetric

@property (readonly) NSMeasurement *scrollHitchTimeRatio;

+ (BOOL)supportsSecureCoding;

- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithGlitchTimeRatio:(id)a0;

@end
