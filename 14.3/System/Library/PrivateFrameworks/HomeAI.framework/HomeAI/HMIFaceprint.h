@class NSUUID, NSData;

@interface HMIFaceprint : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isSentinelFaceprint) BOOL sentinelFaceprint;
@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSUUID *modelUUID;
@property (readonly, copy) NSUUID *faceCropUUID;

+ (id)sentinelFaceprintWithUUID:(id)a0 modelUUID:(id)a1 faceCropUUID:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithUUID:(id)a0 data:(id)a1 modelUUID:(id)a2 faceCropUUID:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
