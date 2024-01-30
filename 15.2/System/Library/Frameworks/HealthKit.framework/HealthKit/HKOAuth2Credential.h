@class NSUUID, NSArray, NSString, NSDate;

@interface HKOAuth2Credential : NSObject <NSCopying, NSSecureCoding> {
    NSString *_accessToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessTokenLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDate *expiration;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, copy, nonatomic) NSArray *scope;
@property (readonly, copy, nonatomic) NSString *scopeString;
@property (readonly, copy, nonatomic) NSString *requestedScopeString;

+ (id)scopeFromScopeString:(id)a0;
+ (id)_scopeStringFromScope:(id)a0;
+ (id)expirationFromTimeInterval:(double)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_accessTokenIdentifier;
- (id)_commonInitWithIdentifier:(id)a0 requestedScopeString:(id)a1 expiration:(id)a2 scope:(id)a3;
- (id)initWithIdentifier:(id)a0 requestedScopeString:(id)a1 expiration:(id)a2 scope:(id)a3;
- (id)_refreshTokenIdentifier;
- (BOOL)storeAccessToken:(id)a0 error:(id *)a1;
- (BOOL)storeRefreshToken:(id)a0 error:(id *)a1;
- (BOOL)isEqualToCredential:(id)a0 epsilonExpiration:(double)a1;
- (BOOL)deleteTokensWithError:(id *)a0;
- (id)initWithIdentifier:(id)a0 requestedScopeString:(id)a1 expiration:(id)a2 scopeString:(id)a3;
- (id)fetchAccessTokenWithError:(id *)a0;
- (id)fetchRefreshTokenWithError:(id *)a0;
- (unsigned long long)hash;

@end
