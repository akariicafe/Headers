@class NSString, _SFAsymmetricKeySpecifier;

@interface SFIdentityAttributes : NSObject <SFKeychainItemAttributes> {
    id _identityAttributesInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identityName;
@property (readonly, copy, nonatomic) _SFAsymmetricKeySpecifier *keySpecifier;
@property (readonly, nonatomic) BOOL hasCertificate;
@property (readonly, copy, nonatomic) NSString *privateKeyDomain;
@property (copy, nonatomic) NSString *localizedLabel;
@property (copy, nonatomic) NSString *localizedDescription;
@property (readonly, copy, nonatomic) NSString *persistentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setKeySpecifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
