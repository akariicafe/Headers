@class NSString, NSUUID, PKSharedAppletSubcredentialMetadata;

@interface PKAppletSubcredentialSharingInvitationReceipt : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSUUID *sharingSessionIdentifier;
@property (nonatomic, getter=isForWatch) BOOL forWatch;
@property (nonatomic) BOOL requiresAuthentication;
@property (copy, nonatomic) NSString *recipientIdentifier;
@property (retain, nonatomic) PKSharedAppletSubcredentialMetadata *metadata;
@property (nonatomic) unsigned long long status;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToInvitationReceipt:(id)a0;
- (id)initWithInvitationData:(id)a0 recipientIdentifier:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
