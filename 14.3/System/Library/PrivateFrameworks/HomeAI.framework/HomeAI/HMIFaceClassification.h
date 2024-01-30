@class NSString, NSUUID, HMIFaceCrop, HMIFaceprint;

@interface HMIFaceClassification : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double confidence;
@property (readonly) NSString *identifier;
@property (readonly) NSString *name;
@property (readonly) NSString *personsModelIdentifier;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceBoundingBox;
@property (readonly) HMIFaceCrop *faceCrop;
@property (readonly) HMIFaceprint *faceprint;
@property (readonly) NSUUID *UUID;
@property (readonly) NSUUID *personUUID;
@property (readonly) NSUUID *sourceUUID;
@property (readonly) NSUUID *sessionEntityUUID;
@property (readonly) long long familiarity;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 sourceUUID:(id)a1 sessionEntityUUID:(id)a2 faceCrop:(id)a3 faceprint:(id)a4 confidence:(double)a5 familiarity:(long long)a6;
- (id)initWithPersonUUID:(id)a0 sourceUUID:(id)a1 sessionEntityUUID:(id)a2 confidence:(double)a3 familiarity:(long long)a4;
- (id)initWithUUID:(id)a0 sourceUUID:(id)a1 faceBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithUUID:(id)a0 sourceUUID:(id)a1 sessionEntityUUID:(id)a2 faceBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 facecrop:(id)a4 faceprint:(id)a5 confidence:(double)a6;
- (id)initWithUUID:(id)a0 name:(id)a1 personsModelIdentifier:(id)a2 faceBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
