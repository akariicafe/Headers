@class NSDictionary, ACAccount, AMSAuthKitUpdateResult;

@interface AMSAuthenticateResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMSAuthKitUpdateResult *authKitUpdateResult;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSDictionary *authenticationResults;
@property (readonly, nonatomic) NSDictionary *serverResponse;

- (id)initWithAccount:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
