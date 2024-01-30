@class NSData;

@interface PKEncryptedPushProvisioningTarget : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *ephemeralPublicKey;
@property (copy, nonatomic) NSData *publicKeyHash;
@property (copy, nonatomic) NSData *data;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long source;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asWebServiceDictionary;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToEncryptedProvisioningTarget:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
