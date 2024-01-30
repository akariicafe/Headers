@class NSString, HMFPairingKey;

@interface HMFPairingIdentity : HMFObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) HMFPairingKey *publicKey;
@property (readonly, copy, nonatomic) HMFPairingKey *privateKey;
@property (readonly, copy) HMFPairingIdentity *publicPairingIdentity;

+ (id)pairingIdentity;

- (id)shortDescription;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 privateKey:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
