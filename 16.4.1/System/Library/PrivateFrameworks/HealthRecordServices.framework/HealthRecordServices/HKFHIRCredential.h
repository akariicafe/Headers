@class NSString;

@interface HKFHIRCredential : HKOAuth2Credential <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *patientID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithAccessToken:(id)a0 refreshToken:(id)a1 expiration:(id)a2 requestedScopeString:(id)a3 scopes:(id)a4;
- (id)initWithAccessToken:(id)a0 refreshToken:(id)a1 patientID:(id)a2 expiration:(id)a3 requestedScopeString:(id)a4 scopeString:(id)a5;
- (id)initWithAccessToken:(id)a0 refreshToken:(id)a1 patientID:(id)a2 expiration:(id)a3 requestedScopeString:(id)a4 scopes:(id)a5;
- (BOOL)isEqualToCredential:(id)a0 epsilonExpiration:(double)a1;

@end
