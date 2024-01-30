@class NSNumber, NSUUID, HMITorsoRecognition;

@interface HMIVideoAnalyzerEventTorso : HMIVideoAnalyzerEvent

@property (readonly) HMITorsoRecognition *torsoRecognition;
@property (readonly) NSNumber *roll;
@property (readonly) NSUUID *sessionEntityUUID;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;

- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 roll:(id)a2 torsoRecognition:(id)a3;

@end
