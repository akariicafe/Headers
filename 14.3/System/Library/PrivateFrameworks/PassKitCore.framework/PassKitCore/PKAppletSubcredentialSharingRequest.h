@class PKAppletSubcredential, NSString, PKPaymentPass, PKAppletSubcredentialEntitlement;

@interface PKAppletSubcredentialSharingRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKAppletSubcredential *credential;
@property (readonly, copy, nonatomic) NSString *passIdentifier;
@property (readonly, copy, nonatomic) NSString *credentialIdentifier;
@property (retain, nonatomic) PKAppletSubcredentialEntitlement *entitlement;
@property (copy, nonatomic) NSString *recipientIdentifier;
@property (copy, nonatomic) NSString *recipientName;
@property (nonatomic, getter=isForLocalDevice) BOOL forLocalDevice;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)invitations;
- (id)credentialWithIdentifier:(id)a0;
- (id)credentialForPass:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPaymentPass:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
