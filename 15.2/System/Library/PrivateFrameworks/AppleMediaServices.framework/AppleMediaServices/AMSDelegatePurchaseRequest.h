@class AMSPurchaseResult;

@interface AMSDelegatePurchaseRequest : AMSDelegateAuthenticateRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMSPurchaseResult *purchaseResult;

- (void)encodeWithCoder:(id)a0;
- (id)initWithPurchaseResult:(id)a0 challenge:(id)a1 userAgent:(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
