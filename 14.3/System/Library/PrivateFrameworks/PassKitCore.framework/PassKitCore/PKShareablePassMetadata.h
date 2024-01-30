@class NSString, PKImage;

@interface PKShareablePassMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *credentialIdentifier;
@property (retain, nonatomic) NSString *cardConfigurationIdentifier;
@property (retain, nonatomic) NSString *sharingInstanceIdentifier;
@property (nonatomic) struct CGImage { } *passThumbnailImage;
@property (retain, nonatomic) NSString *localizedDescription;
@property (retain, nonatomic) NSString *ownerDisplayName;
@property (retain, nonatomic) PKImage *pkPassThumbnailImage;
@property (retain, nonatomic) NSString *nonce;

- (id)initWithProvisioningCredentialIdentifier:(id)a0 cardConfigurationIdentifier:(id)a1 sharingInstanceIdentifier:(id)a2 passThumbnailImage:(struct CGImage { } *)a3 ownerDisplayName:(id)a4 localizedDescription:(id)a5;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (struct CGImage { } *)passThumbnailImage;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
