@class NSString, WBSPublicKeyCredentialIdentifier, NSUUID;

@interface ASCPlatformPublicKeyCredentialLoginChoice : NSObject <ASCLoginChoiceProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *userVisibleName;
@property (readonly, copy, nonatomic) NSString *userHandle;
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, nonatomic) BOOL isRegistrationRequest;
@property (readonly, copy, nonatomic) WBSPublicKeyCredentialIdentifier *identifier;
@property (readonly, copy, nonatomic) NSUUID *publicKeyCredentialOperationUUID;
@property (readonly, nonatomic) unsigned long long loginChoiceKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initRegistrationChoiceWithOptions:(id)a0;
- (id)initWithName:(id)a0 displayName:(id)a1 identifier:(id)a2 userHandle:(id)a3 relyingPartyIdentifier:(id)a4 publicKeyCredentialOperationUUID:(id)a5;
- (id)_initAsRegistrationChoice:(BOOL)a0 withName:(id)a1 displayName:(id)a2 identifier:(id)a3 userHandle:(id)a4 relyingPartyIdentifier:(id)a5 publicKeyCredentialOperationUUID:(id)a6;

@end
