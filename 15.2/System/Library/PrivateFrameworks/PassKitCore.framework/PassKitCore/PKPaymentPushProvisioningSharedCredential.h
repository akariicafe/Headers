@class NSString;

@interface PKPaymentPushProvisioningSharedCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *sharingInstanceIdentifier;
@property (nonatomic) long long source;
@property (readonly, nonatomic) NSString *provisioningCredentialIdentifierHash;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDict:(id)a0;

@end
