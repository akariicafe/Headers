@class NSNumber, HMIFaceRecognition;

@interface HMIVideoAnalyzerEventFace : HMIVideoAnalyzerEvent

@property (readonly) NSNumber *yaw;
@property (readonly) NSNumber *roll;
@property (readonly) HMIFaceRecognition *faceRecognition;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)shortDescription;
- (id)attributeDescriptions;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 yaw:(id)a2 roll:(id)a3 faceRecognition:(id)a4 userInfo:(id)a5;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithConfidence:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 faceRecognition:(id)a2;

@end
