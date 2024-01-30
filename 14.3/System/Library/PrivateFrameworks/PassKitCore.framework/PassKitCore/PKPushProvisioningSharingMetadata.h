@class NSString;

@interface PKPushProvisioningSharingMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sharingInstanceIdentifier;
@property (copy, nonatomic) NSString *provisioningCredentialHash;
@property (nonatomic) unsigned long long sharingStatus;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToEncryptedProvisioningTarget:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
