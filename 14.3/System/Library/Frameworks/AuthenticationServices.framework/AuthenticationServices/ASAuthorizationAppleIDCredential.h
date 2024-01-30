@class NSString, NSArray, NSData, NSPersonNameComponents;

@interface ASAuthorizationAppleIDCredential : NSObject <ASAuthorizationCredential>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *accessToken;
@property (copy, nonatomic) NSData *refreshToken;
@property (copy, nonatomic) NSData *identityToken;
@property (copy, nonatomic) NSData *authorizationCode;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSPersonNameComponents *fullName;
@property (nonatomic) long long realUserStatus;
@property (readonly, copy, nonatomic) NSString *user;
@property (readonly, copy, nonatomic) NSArray *authorizedScopes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUser:(id)a0 authorizedScopes:(id)a1;

@end
