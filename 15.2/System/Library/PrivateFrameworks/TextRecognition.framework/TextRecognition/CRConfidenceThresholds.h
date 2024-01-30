@interface CRConfidenceThresholds : NSObject

@property (readonly) float mediumConfidenceThreshold;
@property (readonly) float highConfidenceThreshold;

- (id)initWithMediumThreshold:(float)a0 highThreshold:(float)a1;

@end
