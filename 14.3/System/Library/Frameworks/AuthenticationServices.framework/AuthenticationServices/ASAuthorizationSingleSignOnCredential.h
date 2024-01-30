@class NSString, NSArray, NSData, NSHTTPURLResponse;

@interface ASAuthorizationSingleSignOnCredential : NSObject <ASAuthorizationCredential>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *state;
@property (readonly, copy, nonatomic) NSData *accessToken;
@property (readonly, copy, nonatomic) NSData *identityToken;
@property (readonly, copy, nonatomic) NSArray *authorizedScopes;
@property (readonly, copy, nonatomic) NSHTTPURLResponse *authenticatedResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)emptyCredential;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAuthenticatedResponse:(id)a0;

@end
