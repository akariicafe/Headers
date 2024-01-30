@class NSUUID;

@interface HMITorsoClassification : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *sourceUUID;
@property (readonly) NSUUID *personUUID;
@property (readonly) double confidence;

- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPersonUUID:(id)a0 sourceUUID:(id)a1 confidence:(double)a2;

@end
