@class NSString, NSDictionary, ASCredentialServiceIdentifier, NSExtension;

@interface ASAccountAuthenticationModificationUpgradePasswordToStrongPasswordRequest : ASAccountAuthenticationModificationRequest

@property (readonly, nonatomic) NSString *password;
@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) NSString *user;
@property (readonly, nonatomic) ASCredentialServiceIdentifier *serviceIdentifier;
@property (readonly, nonatomic) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)initWithUser:(id)a0 password:(id)a1 extension:(id)a2 serviceIdentifier:(id)a3 userInfo:(id)a4;
- (id)initWithUser:(id)a0 serviceIdentifier:(id)a1 userInfo:(id)a2;

@end
