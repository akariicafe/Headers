@class NSString, NSDate;

@interface CMSAuthenticationCredential : NSObject <NSSecureCoding, NSCopying> {
    NSString *_authHeader;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *authToken;
@property (readonly) NSString *tokenType;
@property (readonly) NSDate *authTokenExpiration;
@property (readonly) NSString *scope;
@property (readonly) NSString *refreshToken;
@property (readonly) NSString *authHeader;

+ (id)authCredentialWithToken:(id)a0 tokenType:(id)a1 expirationDate:(id)a2 scope:(id)a3 refreshToken:(id)a4;
+ (id)authCredentialFromMSAuthData:(id)a0;

- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)basicPropertiesDictionary;
- (id)initWithToken:(id)a0 tokenType:(id)a1 expirationDate:(id)a2 scope:(id)a3 refreshToken:(id)a4;

@end
