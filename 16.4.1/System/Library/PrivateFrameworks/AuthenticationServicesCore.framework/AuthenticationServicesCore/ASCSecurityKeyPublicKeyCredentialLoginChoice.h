@class NSString, WBSPublicKeyCredentialIdentifier, NSUUID;

@interface ASCSecurityKeyPublicKeyCredentialLoginChoice : NSObject <ASCLoginChoiceProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) long long credentialKind;
@property (readonly, copy, nonatomic) WBSPublicKeyCredentialIdentifier *identifier;
@property (copy, nonatomic) NSUUID *publicKeyCredentialOperationUUID;
@property (readonly, nonatomic) unsigned long long loginChoiceKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initAssertionPlaceholderChoice;
- (id)initRegistrationChoiceWithOptions:(id)a0;
- (id)initWithName:(id)a0 displayName:(id)a1 identifier:(id)a2 publicKeyCredentialOperationUUID:(id)a3;
- (id)_initWithKind:(long long)a0 name:(id)a1 displayName:(id)a2 identifier:(id)a3 publicKeyCredentialOperationUUID:(id)a4;

@end
