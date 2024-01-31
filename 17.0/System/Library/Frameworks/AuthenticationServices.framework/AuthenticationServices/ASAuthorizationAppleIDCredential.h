@class NSString, NSArray, NSData, NSPersonNameComponents;

@interface ASAuthorizationAppleIDCredential : NSObject <ASAuthorizationCredential> {
    NSString *_state;
    NSData *_authorizationCode;
    NSData *_identityToken;
    NSString *_email;
    NSPersonNameComponents *_fullName;
    NSData *_accessToken;
    NSData *_refreshToken;
    long long _realUserStatus;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
}

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
- (void)setUser:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUser:(id)a0 authorizedScopes:(id)a1;
- (void)setAuthorizedScopes:(id)a0;

@end
