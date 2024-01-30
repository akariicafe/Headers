@class NSString, NSArray, AKPasswordRequest, AKAuthorizationRequest;

@interface CASAppSignInRequest : CASAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *overrideBundleIdentifier;
@property (readonly, nonatomic) BOOL isAppleIDOnlyRequest;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) AKAuthorizationRequest *appleIDRequest;
@property (readonly, nonatomic) AKPasswordRequest *passwordRequest;
@property (copy, nonatomic) NSArray *customAuthenticationMethods;

- (void)encodeWithCoder:(id)a0;
- (long long)authType;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRequests:(id)a0;

@end
