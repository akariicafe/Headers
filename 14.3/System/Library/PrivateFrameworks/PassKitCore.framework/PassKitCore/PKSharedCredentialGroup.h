@class PKAppletSubcredential, NSSet, NSString, PKAppletSubcredentialEntitlement;

@interface PKSharedCredentialGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKAppletSubcredential *credential;
@property (readonly, nonatomic) NSSet *sharedCredentials;
@property (readonly, nonatomic) NSSet *receipts;
@property (readonly, nonatomic) NSString *recipientHandle;
@property (readonly, nonatomic) NSString *recipientName;
@property (readonly, nonatomic) PKAppletSubcredentialEntitlement *entitlement;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic, getter=isLocalGroup) BOOL localGroup;

- (void).cxx_destruct;
- (void)parseGroupItems;
- (id)initWithCredential:(id)a0 sharedCredentials:(id)a1 receipts:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
