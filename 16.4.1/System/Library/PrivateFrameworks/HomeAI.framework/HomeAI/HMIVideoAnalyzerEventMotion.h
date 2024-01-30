@interface HMIVideoAnalyzerEventMotion : HMIVideoAnalyzerEvent

@property (readonly) float motionScore;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 motionScore:(float)a2;

@end
