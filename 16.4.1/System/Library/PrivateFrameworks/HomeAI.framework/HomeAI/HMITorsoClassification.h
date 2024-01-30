@class NSUUID;

@interface HMITorsoClassification : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *sourceUUID;
@property (readonly) NSUUID *personUUID;
@property (readonly) double confidence;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithPersonUUID:(id)a0 sourceUUID:(id)a1 confidence:(double)a2;

@end
