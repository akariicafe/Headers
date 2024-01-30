@class AMSDelegatePurchaseRequest, ACAccount;

@interface CASStorePurchaseRequest : CASAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMSDelegatePurchaseRequest *purchaseRequest;
@property (retain, nonatomic) ACAccount *account;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)authType;
- (id)description;
- (void).cxx_destruct;

@end
