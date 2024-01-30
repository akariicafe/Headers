@class HMIVideoAnalyzerEventFace;

@interface HMIVideoAnalyzerEventPerson : HMIVideoAnalyzerEvent

@property (readonly, getter=hasEstimatedBoundingBox) BOOL isBoundingBoxEstimated;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBoxForFaceTracker;
@property (readonly) HMIVideoAnalyzerEventFace *face;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;

- (id)confidence;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBox;
- (void)encodeWithCoder:(id)a0;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 hasMotionVectors:(BOOL)a2 face:(id)a3;
- (id)initWithFaceEvent:(id)a0;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 hasMotionVectors:(BOOL)a2;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 face:(id)a2;

@end
