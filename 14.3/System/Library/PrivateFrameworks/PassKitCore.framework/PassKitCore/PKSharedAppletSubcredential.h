@class NSString, PKSharedAppletSubcredentialMetadata, PKAppletSubcredentialEntitlement;

@interface PKSharedAppletSubcredential : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long state;
@property (retain, nonatomic) PKAppletSubcredentialEntitlement *entitlement;
@property (retain, nonatomic) PKSharedAppletSubcredentialMetadata *metadata;
@property (nonatomic, getter=isDataSourceCredentialManifest) BOOL dataSourceCredentialManifest;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithSharedCredentialManifestItem:(id)a0 credential:(id)a1;
- (id)initWithIdentifier:(id)a0 sharingInvitationReceipt:(id)a1;
- (id)updateWithSharedCredentialManifestItem:(id)a0 credential:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
