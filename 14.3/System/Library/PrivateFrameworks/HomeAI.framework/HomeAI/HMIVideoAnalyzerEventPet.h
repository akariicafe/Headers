@interface HMIVideoAnalyzerEventPet : HMIVideoAnalyzerEvent

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 hasMotionVectors:(BOOL)a2;

@end
