@class AMSPurchaseSIWAAuthorizationResult, AMSPurchaseResult;

@interface AMSPurchaseSIWAResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AMSPurchaseResult *purchaseResult;
@property (readonly, nonatomic) AMSPurchaseSIWAAuthorizationResult *authorizationResult;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithPurchaseResult:(id)a0 authorizationResult:(id)a1;
- (BOOL)isEqualToPurchaseSIWAResult:(id)a0;

@end
