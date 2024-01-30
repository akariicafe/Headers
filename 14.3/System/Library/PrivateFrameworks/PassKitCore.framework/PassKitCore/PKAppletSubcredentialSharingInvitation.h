@class NSString, NSUUID;

@interface PKAppletSubcredentialSharingInvitation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *originatorIDSHandle;
@property (copy, nonatomic) NSString *partnerIdentifier;
@property (copy, nonatomic) NSString *pairedReaderIdentifier;
@property (copy, nonatomic) NSString *recipientName;
@property (retain, nonatomic) NSUUID *sharingSessionIdentifier;
@property (nonatomic) unsigned long long entitlement;
@property (copy, nonatomic) NSString *issuer;
@property (copy, nonatomic) NSString *deviceModel;
@property (nonatomic, getter=isForWatch) BOOL forWatch;

+ (id)invitationFromSharedCredential:(id)a0 withCredential:(id)a1 pass:(id)a2;

- (id)invitationRequestRepresentation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToInvitation:(id)a0;
- (id)initWithIdentifier:(id)a0 sharingSessionIdentifier:(id)a1 originatorIDSHandle:(id)a2 invitationData:(id)a3;
- (id)initWithPartnerIdentifier:(id)a0 pairedReaderIdentifier:(id)a1 recipientName:(id)a2 entitlement:(unsigned long long)a3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)canBeSent;
- (BOOL)isEqual:(id)a0;
- (BOOL)isSameInvitationAsInvitation:(id)a0;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)sharingConfigurationRepresentation;

@end
