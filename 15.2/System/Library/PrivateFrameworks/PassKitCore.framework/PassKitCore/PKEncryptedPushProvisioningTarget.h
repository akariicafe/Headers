@class NSData;

@interface PKEncryptedPushProvisioningTarget : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *ephemeralPublicKey;
@property (copy, nonatomic) NSData *publicKeyHash;
@property (copy, nonatomic) NSData *data;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long targetDevice;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToEncryptedProvisioningTarget:(id)a0;
- (id)description;
- (id)asWebServiceDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
