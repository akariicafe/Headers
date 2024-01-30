@class AMSDelegatePurchaseResult;

@interface CASStorePurchaseResponse : CASAuthenticationResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AMSDelegatePurchaseResult *purchaseResult;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPurchaseResult:(id)a0;

@end
