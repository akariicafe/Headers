@class NSDictionary, NSString, NSDate;

@interface WFOAuth2Credential : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *responseObject;
@property (readonly, nonatomic) NSString *accessToken;
@property (readonly, nonatomic) NSString *tokenType;
@property (readonly, nonatomic) NSString *refreshToken;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithResponseObject:(id)a0;

@end
