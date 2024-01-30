@class NSUUID;

@interface HMIPersonSourceUUIDPair : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *sourceUUID;
@property (readonly, copy) NSUUID *personUUID;

+ (id)personSourceUUIDPairFromPersonLink:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPersonUUID:(id)a0 sourceUUID:(id)a1;

@end
