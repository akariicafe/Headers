@class NSSet, HMITorsoprint, HMITorsoClassification, NSUUID;

@interface HMITorsoRecognition : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HMITorsoprint *torsoprint;
@property (readonly) HMITorsoClassification *classification;
@property (readonly) NSSet *predictedLinkedEntityUUIDs;
@property (readonly) long long sessionEntityAssignment;
@property (readonly) NSUUID *sessionEntityUUID;

+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTorsoprint:(id)a0 classification:(id)a1 predictedLinkedEntityUUIDs:(id)a2 sessionEntityAssignment:(long long)a3 sessionEntityUUID:(id)a4;

@end
