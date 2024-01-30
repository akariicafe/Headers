@class NSSet, NSString, HMIFaceCrop, HMIFaceprint;

@interface HMIFaceRecognition : HMFObject <HMFLogging, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSSet *predictedLinkedEntityUUIDs;
@property (readonly) long long sessionEntityAssignment;
@property (readonly) HMIFaceCrop *faceCrop;
@property (readonly) HMIFaceprint *faceprint;
@property (readonly) NSSet *classifications;
@property (readonly) double faceQualityScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFaceCrop:(id)a0 faceprint:(id)a1 classifications:(id)a2 predictedLinkedEntityUUIDs:(id)a3 faceQualityScore:(double)a4 sessionEntityAssignment:(long long)a5;
- (id)initWithFaceCrop:(id)a0 faceprint:(id)a1 classifications:(id)a2;
- (id)initWithFaceCrop:(id)a0 faceprint:(id)a1 classifications:(id)a2 predictedLinkedEntityUUIDs:(id)a3;

@end
