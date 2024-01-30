@class NSString, NSSet, NSDate;

@interface HKOAuth2Credential : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *accessToken;
@property (readonly, copy, nonatomic) NSString *refreshToken;
@property (readonly, copy, nonatomic) NSDate *expiration;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, copy, nonatomic) NSSet *scopes;
@property (readonly, copy, nonatomic) NSString *scopeString;
@property (readonly, copy, nonatomic) NSString *requestedScopeString;

+ (id)expirationFromTimeInterval:(double)a0;
+ (id)scopeStringFromScopes:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_commonInitWithAccessToken:(id)a0 refreshToken:(id)a1 expiration:(id)a2 requestedScopeString:(id)a3 scopes:(id)a4;
- (id)initWithAccessToken:(id)a0 refreshToken:(id)a1 expiration:(id)a2 requestedScopeString:(id)a3 scopeString:(id)a4;
- (id)initWithAccessToken:(id)a0 refreshToken:(id)a1 expiration:(id)a2 requestedScopeString:(id)a3 scopes:(id)a4;
- (BOOL)isEqualToCredential:(id)a0 epsilonExpiration:(double)a1;

@end
