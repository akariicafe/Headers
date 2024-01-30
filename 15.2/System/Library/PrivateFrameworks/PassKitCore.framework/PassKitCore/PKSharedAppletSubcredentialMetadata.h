@class NSString, NSUUID, PKAppletSubcredentialEntitlement;

@interface PKSharedAppletSubcredentialMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isLocalDevice) BOOL localDevice;
@property (copy, nonatomic) NSString *recipientIdentifier;
@property (copy, nonatomic) NSString *recipientHandle;
@property (nonatomic, getter=isRevoked) BOOL revoked;
@property (retain, nonatomic) NSUUID *sharingSessionIdentifier;
@property (copy, nonatomic) NSString *groupIdentifier;
@property (retain, nonatomic) PKAppletSubcredentialEntitlement *entitlement;

+ (id)metadataWithSharingRequest:(id)a0 andInvitationReceipt:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
