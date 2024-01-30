@class NSString, NSDate;

@interface HDFHIRAuthResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *accessToken;
@property (readonly, copy, nonatomic) NSString *refreshToken;
@property (readonly, copy, nonatomic) NSString *patientID;
@property (readonly, copy, nonatomic) NSDate *expiration;
@property (readonly, copy, nonatomic) NSString *scope;

+ (id)authResponseFromServerResponseDictionary:(id)a0 baseURL:(id)a1 previousCredential:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)createCredentialWithRequestedScope:(id)a0 error:(id *)a1;
- (id)initWithAccessToken:(id)a0 refreshToken:(id)a1 patientID:(id)a2 expiration:(id)a3 scope:(id)a4;
- (BOOL)isEquivalentToAuthResponse:(id)a0;

@end
