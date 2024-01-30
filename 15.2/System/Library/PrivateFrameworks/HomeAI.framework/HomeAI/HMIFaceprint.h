@class NSUUID, NSData;

@interface HMIFaceprint : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isSentinelFaceprint) BOOL sentinelFaceprint;
@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSUUID *modelUUID;
@property (readonly, copy) NSUUID *faceCropUUID;

+ (id)sentinelFaceprintWithUUID:(id)a0 modelUUID:(id)a1 faceCropUUID:(id)a2;

- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithUUID:(id)a0 data:(id)a1 modelUUID:(id)a2 faceCropUUID:(id)a3;

@end
