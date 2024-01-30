@class NSData;

@interface IDSCertifiedDeliveryReplayKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *payloadHash;

- (id)initWithHash:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToReplayKey:(id)a0;
- (id)initWithPayload:(id)a0 legacyIdentity:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
