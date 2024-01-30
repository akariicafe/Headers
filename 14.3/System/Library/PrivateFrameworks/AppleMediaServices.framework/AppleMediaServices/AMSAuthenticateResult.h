@class NSDictionary, ACAccount;

@interface AMSAuthenticateResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSDictionary *serverResponse;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithAccount:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
