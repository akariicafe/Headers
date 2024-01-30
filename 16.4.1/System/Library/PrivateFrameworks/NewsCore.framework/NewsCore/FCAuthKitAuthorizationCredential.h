@class NSString;

@interface FCAuthKitAuthorizationCredential : NSObject

@property (readonly, copy, nonatomic) NSString *authorizationCode;
@property (readonly, copy, nonatomic) NSString *identityToken;
@property (readonly, copy, nonatomic) NSString *userIdentifier;
@property (readonly, copy, nonatomic) NSString *email;
@property (readonly, copy, nonatomic) NSString *familyName;
@property (readonly, copy, nonatomic) NSString *givenName;

- (void).cxx_destruct;
- (id)initWithAuthorizationCode:(id)a0 identityToken:(id)a1 userIdentifier:(id)a2 email:(id)a3 familyName:(id)a4 givenName:(id)a5;

@end
