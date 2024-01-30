@class HMIVideoAnalyzerEventTorso, NSUUID, HMIVideoAnalyzerEventFace;

@interface HMIVideoAnalyzerEventPerson : HMIVideoAnalyzerEvent

@property (readonly, getter=hasEstimatedBoundingBox) BOOL isBoundingBoxEstimated;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBoxForTracker;
@property (readonly) HMIVideoAnalyzerEventTorso *torso;
@property (readonly) NSUUID *sessionEntityUUID;
@property (readonly) HMIVideoAnalyzerEventFace *face;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBox;
- (id)initWithCoder:(id)a0;
- (id)confidence;
- (id)allEvents;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)copyWithFaceEvent:(id)a0 torso:(id)a1;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 face:(id)a2;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 face:(id)a2 torso:(id)a3;
- (id)initWithFaceEvent:(id)a0;
- (id)initWithFaceEvent:(id)a0 torso:(id)a1;
- (id)initWithTorsoEvent:(id)a0;

@end
