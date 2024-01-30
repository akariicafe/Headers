@class NSUUID, NSData;

@interface HMITorsoprint : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSData *data;
@property (readonly) BOOL lowQuality;
@property (readonly) BOOL unrecognizable;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 data:(id)a1;
- (id)initWithUUID:(id)a0 data:(id)a1 lowQuality:(BOOL)a2 unrecognizable:(BOOL)a3;

@end
