@class NSString, WBSPublicKeyCredentialIdentifier;

@interface SFAutoFillPasskeyIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) WBSPublicKeyCredentialIdentifier *coreIdentifier;
@property (readonly, copy, nonatomic) NSString *credentialID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithCoreIdentifier:(id)a0;

@end
