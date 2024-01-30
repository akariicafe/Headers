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
@property (nonatomic) unsigned long long supportedRadioTechnologies;

+ (id)invitationFromSharedCredential:(id)a0 withCredential:(id)a1 pass:(id)a2;

- (id)initWithIdentifier:(id)a0 sharingSessionIdentifier:(id)a1 originatorIDSHandle:(id)a2 invitationData:(id)a3;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)sharingConfigurationRepresentation;
- (id)invitationRequestRepresentation;
- (id)initWithPartnerIdentifier:(id)a0 pairedReaderIdentifier:(id)a1 recipientName:(id)a2 entitlement:(unsigned long long)a3 supportedRadioTechnologies:(unsigned long long)a4;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isSameInvitationAsInvitation:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canBeSent;
- (unsigned long long)hash;
- (BOOL)isEqualToInvitation:(id)a0;

@end
