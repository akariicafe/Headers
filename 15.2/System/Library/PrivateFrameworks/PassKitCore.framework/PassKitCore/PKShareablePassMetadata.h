@class PKImage, NSString;

@interface PKShareablePassMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKImage *pkPassThumbnailImage;
@property (retain, nonatomic) NSString *nonce;
@property (nonatomic) unsigned long long targetDevice;
@property (readonly, nonatomic) NSString *credentialIdentifier;
@property (readonly, nonatomic) NSString *cardConfigurationIdentifier;
@property (readonly, nonatomic) NSString *sharingInstanceIdentifier;
@property (readonly, nonatomic) NSString *accountHash;
@property (readonly, nonatomic) NSString *templateIdentifier;
@property (readonly, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, nonatomic) BOOL requiresUnifiedAccessCapableDevice;
@property (readonly, nonatomic) struct CGImage { } *passThumbnailImage;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *ownerDisplayName;

- (id)initWithProvisioningCredentialIdentifier:(id)a0 sharingInstanceIdentifier:(id)a1 passThumbnailImage:(struct CGImage { } *)a2 ownerDisplayName:(id)a3 localizedDescription:(id)a4 accountHash:(id)a5 templateIdentifier:(id)a6 relyingPartyIdentifier:(id)a7 requiresUnifiedAccessCapableDevice:(BOOL)a8;
- (id)_initWithProvisioningCredentialIdentifier:(id)a0 cardConfigurationIdentifier:(id)a1 sharingInstanceIdentifier:(id)a2 passThumbnailImage:(struct CGImage { } *)a3 ownerDisplayName:(id)a4 localizedDescription:(id)a5 accountHash:(id)a6 templateIdentifier:(id)a7 relyingPartyIdentifier:(id)a8 requiresUnifiedAccessCapableDevice:(BOOL)a9;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProvisioningCredentialIdentifier:(id)a0 cardConfigurationIdentifier:(id)a1 sharingInstanceIdentifier:(id)a2;
- (id)initWithProvisioningCredentialIdentifier:(id)a0 cardConfigurationIdentifier:(id)a1 sharingInstanceIdentifier:(id)a2 passThumbnailImage:(struct CGImage { } *)a3 ownerDisplayName:(id)a4 localizedDescription:(id)a5;
- (struct CGImage { } *)passThumbnailImage;

@end
