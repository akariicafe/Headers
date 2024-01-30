@class NSString, PKSharedAppletSubcredentialMetadata, PKAppletSubcredentialEntitlement;

@interface PKSharedAppletSubcredential : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long state;
@property (retain, nonatomic) PKAppletSubcredentialEntitlement *entitlement;
@property (retain, nonatomic) PKSharedAppletSubcredentialMetadata *metadata;
@property (nonatomic, getter=isDataSourceCredentialManifest) BOOL dataSourceCredentialManifest;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSharedCredentialManifestItem:(id)a0 credential:(id)a1;
- (id)initWithIdentifier:(id)a0 sharingInvitationReceipt:(id)a1;
- (id)updateWithSharedCredentialManifestItem:(id)a0 credential:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;

@end
